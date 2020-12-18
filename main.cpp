//
//  main.cpp
//  C867-Jack-Jutzi
//
//  Created by Jack Jutzi on 12/15/20.
//  Copyright © 2020 Jack Jutzi. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include "roster.hpp"
#include "degree.hpp"

using std::stringstream;
using std::stoi;
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
    
    const std::string studentData[] {
        "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmail.com,19,50,30,40,NETWORK",
        "A3,Jack, Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin, Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Jack, Jutzi,jjutzi@wgu.edu,33,20,30,40,SOFTWARE"
    };
    
    // Initialize Roster
    Roster *classRoster = new Roster();
    DegreeProgram degreeProgram = SOFTWARE;

    
    // Populate Roster
    for (int i = 0; i <= 4; i++) {
        stringstream ss(studentData[i]);
        
        vector<string> studentProps;
        vector<int> currDaysInCourse;
        
        // As long as input stream has a "next" value, continue
        while(ss.good()) {
            string currString;
            getline(ss, currString, ',');
            studentProps.push_back(currString);
        }
        
        // Parse degree type -> enumerated type
        if (studentProps[8] == "NETWORK") {
            degreeProgram = NETWORK;
        }
        if (studentProps[8] == "SECURITY") {
            degreeProgram = SECURITY;
        }
        if (studentProps[8] == "SOFTWARE") {
            degreeProgram = SOFTWARE;
        }
        
        // Parse age to int
        int parsedAge = stoi(studentProps[4]);

        // Parse days to int's for vector
        currDaysInCourse.push_back(stoi(studentProps[5]));
        currDaysInCourse.push_back(stoi(studentProps[6]));
        currDaysInCourse.push_back(stoi(studentProps[7]));

        // Add student to roster
        classRoster->add(studentProps[0], studentProps[1], studentProps[2], studentProps[3], parsedAge, currDaysInCourse, degreeProgram);

    }
    classRoster->printAll();
    
    return 0;
}
