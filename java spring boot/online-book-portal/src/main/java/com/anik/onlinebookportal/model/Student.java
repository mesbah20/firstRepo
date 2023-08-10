package com.anik.onlinebookportal.model;

import jakarta.persistence.*;
import lombok.Data;
import org.hibernate.annotations.CreationTimestamp;
import org.hibernate.annotations.UpdateTimestamp;

import java.sql.Timestamp;

// variable/attribute name always written in camelCase style!
// class name (first latter always capital) and CamelCase style!
// method name always written in camelCase style!
// others are all small letters!

@Entity
@Data
@Table(name="student")
public class Student {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private int id;

    @Column(name="roll")
    private String roll;

    @Column(name="name")
    private String name;

    @Column(name="gender")
    private String gender;

    @Column(name="age")
    private String age;

    @Column(name="gpa")
    private double gpa;

    @Column(name="city")
    private String city;

    @CreationTimestamp
    @Column(name="created_at")
    private Timestamp createdAt;

    @UpdateTimestamp
    @Column(name="updated_at")
    private Timestamp updatedAt;
}








