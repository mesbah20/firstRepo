import { Component } from '@angular/core';
import {Student} from "../student";
import {StudentService} from "../student.service";
import {Router} from "@angular/router";

@Component({
  selector: 'app-creat-student',
  templateUrl: './creat-student.component.html',
  styleUrls: ['./creat-student.component.css']
})
export class CreatStudentComponent {
  student: Student = new Student();

  constructor(private studentService: StudentService, private router: Router) {}

  saveStudent(){
    this.studentService.creatStudent(this.student).subscribe( data =>{
      console.log(data);
      this.goToStudentList();
    },
      error => console.log(error));
  }

  goToStudentList(){
       this.router.navigate(['/student']);
  }

  onSubmit() {
    console.log(this.student);
    this.saveStudent();
  }
}
