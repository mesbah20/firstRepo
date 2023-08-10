package com.anik.onlinebookportal;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

import java.sql.Connection;
import java.sql.DriverManager;

@SpringBootApplication
public class OnlineBookPortalApplication {

	public static void main(String[] args) {
		SpringApplication.run(OnlineBookPortalApplication.class, args);
	}

}
