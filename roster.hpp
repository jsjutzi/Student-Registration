//
//  roster.hpp
//  C867-Jack-Jutzi
//
//  Created by Jack Jutzi on 12/15/20.
//  Copyright © 2020 Jack Jutzi. All rights reserved.
//

#ifndef roster_hpp
#define roster_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include "degree.hpp"
#include "student.hpp"

using std::string;
using std::vector;

const std::string studentData[] {
    "A1, John, Smith, John1989@gmail.com, 20, 30, 35, 40, SECURITY",
    "A2, Suzan, Erickson, Erickson_1990@gmail.com, 19, 50, 30, 40, NETWORK",
    "A3, Jack, Napoli, The_lawyer99yahoo.com, 19, 20, 40, 33, SOFTWARE",
    "A4, Erin, Black, Erin.black@comcast.net, 22, 50, 58, 40, SECURITY",
    "A5, Jack, Jutzi, jjutzi@wgu.edu, 33, 20, 30, 40, SOFTWARE"
};

class Roster {
    public:
        // Constructor
        Roster();
        ~Roster();
    
        vector<Student> classRosterArray{};
        void add(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
        void remove(string studentId);
        void printAll();
        void printAverageDaysInCourses();
        void printInvalidEmails();
};

#endif /* roster_hpp */
