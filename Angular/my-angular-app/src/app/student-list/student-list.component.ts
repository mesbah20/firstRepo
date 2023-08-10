import {Component, numberAttribute, OnInit} from '@angular/core';
import { Student } from '../student'
import { StudentService } from '../student.service'
import {ModalDismissReasons, NgbModal} from '@ng-bootstrap/ng-bootstrap';
import {Router} from "@angular/router";

@Component({
  selector: 'app-student-list',
  templateUrl: './student-list.component.html',
  styleUrls: ['./student-list.component.css']
})
export class StudentListComponent implements OnInit {

  student: Student[] = [];
  closeResult: string = '';
  private content: any;

  constructor(
    private studentService: StudentService,
    private modalService: NgbModal,
    private router: Router) {}

  ngOnInit(): void {
    this.getStudents();
  }

  private getStudents(){
    this.studentService.getStudentsList().subscribe((data: any) => {
      console.log(data); // for printing the student list
      this.student = data;
    });

  }

  updateStudent(id: any) {
  /** from this page this id goes to updateStudentComponent page
    through naviagte function,by importing update-student path in app-routing.module.ts folder */
    this.router.navigate(['update-student', id]);
  }

  StudentDetails(id: any){
    this.router.navigate(['student-details', id]);
  }

  deleteStudent(id: number) {
    this.studentService.deleteStudentById(id).subscribe(data => {
      console.log(data); // why we use console.log(data); here ?
      this.getStudents();
    })
  }
}
