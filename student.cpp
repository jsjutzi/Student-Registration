//
//  student.cpp
//  C867-Jack-Jutzi
//
//  Created by Jack Jutzi on 12/15/20.
//  Copyright © 2020 Jack Jutzi. All rights reserved.
//

#include "student.hpp"
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout;

class Student {
    private:
        // Properties
        string studentId;
        string firstName;
        string lastName;
        string email;
        int age;
        vector<int> daysInCourse;
        string degreeProgram;
    
    public:
        // Constructor
        Student(string studentId, string firstName, string lastName, string email, int age, vector<int> daysInCourse, string degreeProgram) {
            studentId = studentId;
            firstName = firstName;
            lastName = lastName;
            email = email;
            age = age;
            daysInCourse = daysInCourse;
            degreeProgram = degreeProgram;
        };
    
        // Setters
        void setStudentId(string studentId){
            this->studentId = studentId;
        }
        void setFirstName(string firstName) {
            this->firstName = firstName;
        };
        void setLastName(string lastName){
            this->lastName = lastName;
        };
        void setEmail(string email) {
            this->email = email;
        };
        void setAge(int age) {
            this->age = age;
        };
        void setDaysInCours(vector<int> days) {
            this->daysInCourse = days;
        };
        void setDegreeProgram(string degree) {
            this->degreeProgram = degree;
        };
    
        // Getters
        string getStudentId() const {
            return studentId;
        }
        string getFirstName() const {
            return firstName;
        }
        string getLastName() const {
            return lastName;
        }
        string getEmail() const {
            return email;
        }
        int getAge() const {
            return age;
        }
        vector<int> getDaysInCourse() const {
            return daysInCourse;
        }
        string getDegree() const {
            return degreeProgram;
        }
    void print() {
        cout << "\t First Name: " << getFirstName();
        cout << "\n\t Last Name: " << getLastName();
        cout << "\n\t Email: " << getEmail();
        cout << "\n\t Age: " << getAge();
        cout << "\n\t Days in Course: " << getDaysInCourse()[0] << getDaysInCourse()[1] << getDaysInCourse()[3];
        
        cout << "\n\t Degree Program: " << getDegree();
    }
};
