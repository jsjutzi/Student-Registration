//
//  student.cpp
//  C867-Jack-Jutzi
//
//  Created by Jack Jutzi on 12/15/20.
//  Copyright © 2020 Jack Jutzi. All rights reserved.
//

#include "student.hpp"
#include "degree.hpp"
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;


// Constructor
Student::Student(string studentId, string firstName, string lastName, string email, int age, vector<int> daysInCourse, DegreeProgram degreeProgram) {
    this->studentId = studentId;
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->age = age;
    this->daysInCourse = daysInCourse;
    this->degreeProgram = degreeProgram;
};


// Destructor
Student::~Student() {};

// Setters
void Student::setStudentId(string studentId){
            this->studentId = studentId;
}
void Student::setFirstName(string firstName) {
            this->firstName = firstName;
};
void Student::setLastName(string lastName){
            this->lastName = lastName;
};
void Student::setEmail(string email) {
            this->email = email;
};
void Student::setAge(int age) {
            this->age = age;
};
void Student::setDaysInCourse(vector<int> days) {
            this->daysInCourse = days;
};
void Student::setDegreeProgram(DegreeProgram degree) {
            this->degreeProgram = degree;
};
    
// Getters
string Student::getStudentId() const {
            return this->studentId;
}
string Student::getFirstName() const {
            return this->firstName;
}
string Student::getLastName() const {
            return this->lastName;
}
string Student::getEmail() const {
            return this->email;
}
int Student::getAge() const {
            return this->age;
}
vector<int> Student::getDaysInCourse() {
            return this->daysInCourse;
}
DegreeProgram Student::getDegreeProgram() {
    cout << this->degreeProgram << endl;
            return this->degreeProgram;
}
void Student::print() {
    string studentDegree = "";
    
    switch(getDegreeProgram()) {
        case 0:
            studentDegree = "NETWORK";
            break;
        case 1:
            studentDegree = "SECURITY";
            break;
        case 2:
            studentDegree = "SOFTWARE";
            break;
        default:
            break;
    }
    
    cout << "\t First Name: " << getFirstName();
    cout << "\t Last Name: " << getLastName();
    cout << "\t Email: " << getEmail();
    cout << "\t Age: " << getAge();
    cout << "\t Days in Course: {" << getDaysInCourse()[0] << ", " << getDaysInCourse()[1] << ", " << getDaysInCourse()[2] << "}";
    
    cout << "\t Degree Program: " << studentDegree << endl;
}

