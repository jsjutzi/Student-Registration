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
//    cout << classRosterArray[-1].getFirstName();
    
}
void Roster::remove(string studentId) {
    int i = 0;
    for (iter = classRosterArray.begin(); iter < classRosterArray.end(); iter++, i++) {
        if (classRosterArray[i].getStudentId() == studentId) {
            classRosterArray.erase(iter);
            cout << "Removed student with student id of " << studentId << endl;
            break;
        }
    }
}
void Roster::printAll() {
    for (int i = 0; i < classRosterArray.size(); i++) {
        classRosterArray[i].print();
    }
}
void Roster::printAverageDaysInCourse(string studentId) {
    int totalDays = 0;
    
    for (int i = 0; i < classRosterArray.size() - 1; i++) {
        if (classRosterArray[i].getStudentId() == studentId) {
            for (int j = 0; j < classRosterArray[i].getDaysInCourse().size() -1; j++) {
                totalDays += classRosterArray[i].getDaysInCourse()[j];
            }
        }
    }
    
    cout << "Average number of days in course for student with student id " << studentId << " is: " << totalDays << endl;
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
    cout << "Students in the " << degreeProgram << " degree program: " << endl;
    for (int i = 0; i < classRosterArray.size() -1; i++) {
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
