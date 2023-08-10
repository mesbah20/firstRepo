package com.anik.onlinebookportal.service;

import com.anik.onlinebookportal.model.Book;
import com.anik.onlinebookportal.repository.BookRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.Collections;
import java.util.List;
import java.util.Optional;

@Service
public class BookService {
    @Autowired
    BookRepository bookRepository;

    public List<Book> getBooks(){
        List<Book> allBooks = bookRepository.findAll();
        return allBooks;
    }

    public void save(Book book){
        bookRepository.save(book);
    }

    public Book getById(Long id){
        Optional<Book> optional = bookRepository.findById(id);
        Book book = null;
        if(optional.isPresent()){
            book = optional.get();
        }
        else{
            throw new RuntimeException("Book not found fro id : " + id);
        }

        return book;
    }

    public void deleteViaId(long id){
        bookRepository.deleteById(id);
    }


}















