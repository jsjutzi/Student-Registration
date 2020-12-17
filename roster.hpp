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

class Roster {
    public:
        // Constructor
        Roster();
        ~Roster();
    
        vector<Student> classRosterArray{};
        vector<Student>::iterator iter;
        void add(string studentId, string firstName, string lastName, string emailAddress, int age, vector<int> daysInCourse, DegreeProgram degreeProgram);
        void remove(string studentId);
        void printAll();
        void printAverageDaysInCourse(string studentId);
        void printInvalidEmails();
        void printByDegreeProgram(DegreeProgram degreeProgram);
};

#endif /* roster_hpp */
