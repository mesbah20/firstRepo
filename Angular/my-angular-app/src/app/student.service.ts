import { Injectable } from '@angular/core';
import {HttpClient} from '@angular/common/http'
import {Student} from "./student";
import {observableToBeFn} from "rxjs/internal/testing/TestScheduler";
import {Observable} from "rxjs";

@Injectable({
  providedIn: 'root'
})
export class StudentService {

  private baseURL = "http://localhost:8080/api/v1/students";

  constructor(private httpClient: HttpClient) {
  }

  // to get the student list
  getStudentsList(): any{
    const url = this.baseURL + "/all"
    return this.httpClient.get<any>(url);
  }

  //for saving the input student data
  creatStudent(student: Student): Observable<object>{
    const url = this.baseURL + "/save_details";
    return this.httpClient.post<any>(url, student);// using post method to creat new student data
    // return this.httpClient.post(`${this.baseURL + "/all"}`, student);
  }

  getStudentById(id: number): Observable<Student>{
    return this.httpClient.get<Student>(`${this.baseURL}/update/${id}`);
  }

  //here we pass and execute update method(put) by the id value from (array index) and
  // updated student information with this (baseURL + /update/) and it store in student parameter !
  updateStudent(id: number, student: Student): Observable<Object>{
    return this.httpClient.put(`${this.baseURL}/update/${id}`, student);
  }

  deleteStudentById(id: number): Observable<Object> {
    return this.httpClient.delete(`${this.baseURL}/delete/${id}`);
  }

}
