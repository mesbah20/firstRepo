
import { Routes, RouterModule } from '@angular/router';
import {StudentListComponent} from "./student-list/student-list.component";
import {NgModule} from "@angular/core";
import {CreatStudentComponent} from "./creat-student/creat-student.component";
import {UpdateStudentComponent} from "./update-student/update-student.component";
import {StudentDetailsComponent} from "./student-details/student-details.component";

/**
 * how the routing model flow work ?
 */
const routes: Routes = [
  {path: 'student', component: StudentListComponent},
  {path: 'creat-student', component: CreatStudentComponent},
  {path: 'update-student/:id', component: UpdateStudentComponent},
  {path: 'student-details/:id', component: StudentDetailsComponent},
  {path: '', redirectTo: 'student', pathMatch:'full'}
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
