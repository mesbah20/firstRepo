import {Component, OnInit} from '@angular/core';
import {StudentService} from "../student.service";
import {Student} from "../student";
import {ActivatedRoute, Route} from "@angular/router";
import {Router} from "@angular/router";
import {error} from "@angular/compiler-cli/src/transformers/util";

@Component({
  selector: 'app-update-student',
  templateUrl: './update-student.component.html',
  styleUrls: ['./update-student.component.css']
})
export class UpdateStudentComponent implements OnInit{

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
  onSubmit() {
    //this.studentService.updateStudent means updateStudent method is a studentService class method
    //here, updateStudent method has (array index) id value and updated student information which we
    // make change from (update-student.component.html) page. Now it will execute update functionality.
    this.studentService.updateStudent(this.id, this.student).subscribe(data =>{
      this.goToStudentList();
    }
      ,error => console.log(error));
  }

  goToStudentList(){
    this.router.navigate(['/student']);
  }
}
