//
//  roster.cpp
//  C867-Jack-Jutzi
//
//  Created by Jack Jutzi on 12/15/20.
//  Copyright © 2020 Jack Jutzi. All rights reserved.
//

#include "roster.hpp"
#include "student.hpp"
#include "degree.hpp"
#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout;


using std::vector;

void Roster::add(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    
    // Create vector for days in course
    vector<int> daysInCourse{daysInCourse1, daysInCourse2, daysInCourse3};
    
    Student *student = new Student(studentId, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
    
    this->classRosterArray[this->classRosterArray.size()] = *student;
    cout << this->classRosterArray[-1].getFirstName();
    
}
void remove(string studentId) {
    // add student
}
void printAll() {
    // print all students
}
void printAverageDaysInCourse() {
    // print average days in course
}
void printInvalidEmails() {
    // print emails that don't include @
}
void printByDegreeProgram(DegreeProgram degree) {
    // prints out all students in a given degree program
}

// Constructor
Roster::Roster() {
        this->classRosterArray = vector<Student>{};
}
// Destructor
//Roster::~Roster();

//// Call Destructor to release memory allocation
//Roster::~Roster() {}
