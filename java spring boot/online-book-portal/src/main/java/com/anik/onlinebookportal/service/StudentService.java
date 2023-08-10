package com.anik.onlinebookportal.service;

import com.anik.onlinebookportal.model.Student;
import com.anik.onlinebookportal.repository.StudentRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.Collections;
import java.util.List;
import java.util.Optional;

@Service
public class StudentService {
    @Autowired
    StudentRepository studentRepository;

    public List<Student> getStudents(){
         List<Student> allStudent = studentRepository.findAll();
         return allStudent;
    }

    public void save(Student student){
        studentRepository.save(student);
    }

    public Student getById(long id){
        Optional<Student> optional = studentRepository.findById(id);
        Student student = null;
        if(optional.isPresent()){
            student = optional.get();
        }
        else{
            throw new RuntimeException("Student not found for id : " + id);
        }

        return student;
    }

    public void deleteViaId(long id){
        studentRepository.deleteById(id);
    }


}
