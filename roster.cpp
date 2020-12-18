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
using std::endl;


using std::vector;


void Roster::add(string studentId, string firstName, string lastName, string emailAddress, int age, vector<int> daysInCourse, DegreeProgram degreeProgram) {
    Student student = Student(studentId, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
    classRosterArray.push_back(student);
    
}
void Roster::remove(string studentId) {
    int i = 0;
    bool foundMatch = false;
    for (iter = classRosterArray.begin(); iter < classRosterArray.end(); iter++, i++) {
        if (classRosterArray[i].getStudentId() == studentId) {
            classRosterArray.erase(iter);
            foundMatch = true;
            cout << "Removed student with student id of " << studentId << endl;
            break;
        }
    }
    
    if (!foundMatch) {
        cout << "No student was found matching this student Id." << endl;
    }
}
void Roster::printAll() {
    for (int i = 0; i < classRosterArray.size(); i++) {
        classRosterArray[i].print();
    }
}
void Roster::printAverageDaysInCourse(string studentId) {
    int totalDays = 0;
    
    for (int i = 0; i < classRosterArray.size(); i++) {
        if (classRosterArray[i].getStudentId() == studentId) {
            for (int j = 0; j < 3; j++) {
                totalDays += classRosterArray[i].getDaysInCourse()[j];
            }
        }
    }
    
    cout << "Average number of days in course for student with student id " << studentId << " is: " << totalDays / 3 << endl;
}

void Roster::printInvalidEmails() {
    
    for (int i = 0; i < classRosterArray.size() - 1; i++) {
        string currentEmail = classRosterArray[i].getEmail();
        if (currentEmail.find('@') != std::string::npos &&
            currentEmail.find('.') != std::string::npos &&
            currentEmail.find(' ') == std::string::npos) {
            // valid email -- do nothing
        } else {
            cout << "Invalid email: " << currentEmail << endl;
        }
    }
}
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    // prints out all students in a given degree program
    string studentDegree = "";
    
    switch(degreeProgram) {
        case 0:
            studentDegree = "NETWORK";
            break;
        case 1:
            studentDegree = "SECURITY";
            break;
        case 2:
            studentDegree = "SOFTWARE";
            break;
    }
    cout << "Students in the " << studentDegree << " degree program: " << endl;
    for (int i = 0; i < classRosterArray.size(); i++) {
        if (classRosterArray[i].getDegreeProgram() == degreeProgram) {
            classRosterArray[i].print();
        }
    }
}

//// Constructor
Roster::Roster() {
        this->classRosterArray = vector<Student>{};
}

// Destructor
Roster::~Roster() {}
