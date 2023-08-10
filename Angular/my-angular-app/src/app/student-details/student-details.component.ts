import {Component, OnInit} from '@angular/core';
import {Student} from "../student";
import {StudentService} from "../student.service";
import {ActivatedRoute, Router} from "@angular/router";

@Component({
  selector: 'app-student-details',
  templateUrl: './student-details.component.html',
  styleUrls: ['./student-details.component.css']
})
export class StudentDetailsComponent implements OnInit{
  id: any;
  student: Student = new Student();
  constructor(
    private studentService: StudentService,
    private route: ActivatedRoute,
    private router: Router){
  }

  ngOnInit(): void{
    //(this.id = this.route.snapshot.params['id']) this line :
    // fetches the value of the id parameter from the current route's parameters and stores it in the this.id,
    //and we get the id value from student array index, in student-list.html page
    this.id = this.route.snapshot.params['id'];
    //subscribe to this method so that it can return observable..........what is observable ?
    //here getStudentById this function return specific student information from backend by id wise !
    this.studentService.getStudentById(this.id).subscribe(data => {
      this.student = data;

      console.log(this.student);

    },error => console.log(error));
  }



}
