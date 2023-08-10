package com.anik.onlinebookportal.controller;

import com.anik.onlinebookportal.model.Book;
import com.anik.onlinebookportal.model.Student;
import com.anik.onlinebookportal.service.BookService;
import com.anik.onlinebookportal.service.StudentService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;

import java.util.List;

// variable name always written in camelCase style!
// class name (first latter always capital) and CamelCase style!
// attribute name always written in camelCase style!
// others are all small letters!

@Controller
public class PortalController {
    @Autowired
    StudentService studentService;
    @Autowired
    BookService bookService;


    @GetMapping("/index")
    public String index(){
        return "page1";
    }


    @GetMapping("/booklist")
    public String bookList(){
        return "page2";
    }

    @GetMapping("/JOGET")
    public String webPage(){
        return "joget";
    }


    @GetMapping("/test")
    public String test(){
        return "ADMIN";
    }

    //FOR STUDENT
    @GetMapping("/students")
    public String students(Model model){
        List<Student> allStudent = studentService.getStudents();
        model.addAttribute("allStudents",allStudent);

        return "students";
    }

    //--------
    @GetMapping("/add_new")
    public String addStudents(Model model){
        model.addAttribute("student", new Student());

        return "add_students";
    }
    @PostMapping("/save_details")
    public String saveStudents(@ModelAttribute("student") Student student){
        studentService.save(student);

        return "redirect:/students";
    }

    @GetMapping("/showFormForUpdate/{id}")
    public String updateForm(@PathVariable(value = "id") long id, Model model){
        Student student = studentService.getById(id);
        model.addAttribute("student", student);

        return "update";
    }

    //QUS: why i don't have to use @DeletMapping here
    @GetMapping("/deleteStudent/{id}")
    public String deleteThroughId(@PathVariable(value = "id") long id){
        studentService.deleteViaId(id);

        return "redirect:/students";
    }



    //for book
    @GetMapping("/book_store")
    public String books(Model model){
        List<Book> allBooks = bookService.getBooks();
        model.addAttribute("allBooks", allBooks);

        return "book_list";
    }
    @GetMapping("/addnew")
    public String addBooks(Model model){
        model.addAttribute("book", new Book());

        return "add_book";
    }
    @PostMapping("/save")
    public String saveBooks(@ModelAttribute("book") Book book){
        bookService.save(book);

        return "redirect:/book_store";
    }
    @GetMapping("/showUpdate/{id}")
    public String showUpdate(@PathVariable(value = "id") long id, Model model){
        Book book = bookService.getById(id);
        model.addAttribute("book", book);

        return "update_book";
    }
    @GetMapping("/deleteBook/{id}")
    public String deleteBook(@PathVariable(value = "id") long id){
        bookService.deleteViaId(id);

        return "redirect:/book_store";
    }


}
