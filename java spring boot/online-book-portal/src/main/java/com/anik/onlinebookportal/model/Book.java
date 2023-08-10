package com.anik.onlinebookportal.model;


import jakarta.persistence.*;
import lombok.Data;
import org.hibernate.annotations.CreationTimestamp;
import org.hibernate.annotations.UpdateTimestamp;

import java.sql.Timestamp;

// database name is always small later
// database table attribute name always in small latter like: image_url

// variable/attribute name always written in camelCase style!
// class name (first latter always capital) and CamelCase style!
// method name always written in camelCase style!
// others are all small letters!

@Entity
@Data
@Table(name="book")
public class Book {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private int id;

    @Column(name = "name")
    private String name;

    @Column(name="category")
    private String category;

    @Column(name = "author")
    private String author;

    @Column(name="price")
    private int price;

    @Column(name="image_url")
    private String imageUrl;

    @CreationTimestamp
    @Column(name="created_at")
    private Timestamp createdAt;

    @UpdateTimestamp
    @Column(name="updated_at")
    private Timestamp updatedAt;
}
