package com.anik.onlinebookportal.controller;

import com.anik.onlinebookportal.model.Student;
import com.anik.onlinebookportal.repository.StudentRepository;
import com.anik.onlinebookportal.service.StudentService;
import lombok.RequiredArgsConstructor;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.context.config.ConfigDataResourceNotFoundException;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.server.ResponseStatusException;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * Keep in mind that if you have other constructors in the class
 * (either default or explicitly defined constructors), Lombok will not generate a new constructor to
 * avoid conflicts. In such cases, you can use @AllArgsConstructor to generate a constructor that includes
 * all fields, not just the final ones.
 */

@RestController
@RequestMapping("/api/v1/students")
@CrossOrigin("*")
@RequiredArgsConstructor
public class StudentController {

    private final StudentRepository studentRepository;
    private final StudentService studentService;

    /**
    @GetMapping("/all")
    public String students(){
        List<Student> allStudent = studentService.getStudents();
        return List<Student>;
    }*/

    /**
     *why we skip the service layer for evey API call ?
     */

//     This is direct call to repository from controller, we skip the service layer
//     GET ALL STUDENT
    @GetMapping("/all")
    public List<Student> get() {
        return studentRepository.findAll();
    }

    //Add new student
    @PostMapping("/save_details")
    public Student AddStudent(@RequestBody Student student){
        /**@RequestBody: this annotation get new updated student data of a (particular array position / from one
         * ID, in every submit)  from angular frontend to this (java: Student student) part ==> means
         * to this (java: student object)
         */
        return studentRepository.save(student);
    }

    //get student by id.......
    @GetMapping("/update/{id}")
    public ResponseEntity<Student> getStudentById(@PathVariable Long id) {
        Student student = studentRepository.findById(id)
                .orElseThrow(() -> new ResponseStatusException(HttpStatus.NOT_FOUND, "Student id not found: " + id));


        return ResponseEntity.ok(student);
    }


   //update student REST API
    @PutMapping("/update/{id}")
    public ResponseEntity<Student> updateStudentById(@PathVariable Long id, @RequestBody Student studentDetails) {
        /**
         * 1.ResponseEntity<Student> = here ResponseEntity is (Student class)
         * 2.("/update/{id}") here (id) is a student path variable. we use @Pathvariable annotation to
         * map OR store the path variable(id) value what we get from frontend (student array) index
         * to (java variable ): Long id
         * public ResponseEntity<Student> getStudentById(@PathVariable Long id)
         */
        Student student = studentRepository.findById(id)
                .orElseThrow(() -> new ResponseStatusException(HttpStatus.NOT_FOUND, "Student id not found: " + id));

        // here, studentDetails.get() function provides updated student data, which we update in frontend.
        // then, student.set() function set this updated data in student object from studentDetails.get() function
        student.setRoll(studentDetails.getRoll());
        student.setName(studentDetails.getName());
        student.setGender(studentDetails.getGender());
        student.setAge(studentDetails.getAge());

        Student updatedStudent = studentRepository.save(student);

        return ResponseEntity.ok(updatedStudent);
    }

    @DeleteMapping("/delete/{id}") // ResponseEntity is a return type !
    public ResponseEntity<Map<String, Boolean>> deleteEmployee(@PathVariable Long id){
        Student student = studentRepository.findById(id)
                .orElseThrow(() -> new ResponseStatusException(HttpStatus.NOT_FOUND, "Student id not found: " + id));

        studentRepository.delete(student);
        Map<String, Boolean> response = new HashMap<>();
        response.put("deleted", Boolean.TRUE); // in map we input value by (put)
        return ResponseEntity.ok(response);
    }

}
