//
//  student.hpp
//  C867-Jack-Jutzi
//
//  Created by Jack Jutzi on 12/15/20.
//  Copyright © 2020 Jack Jutzi. All rights reserved.
//

#ifndef student_hpp
#define student_hpp

#include <stdio.h>
#include "degree.hpp"
#include <string>
#include <vector>


using std::string;
using std::vector;

class Student {
    private:
        // Properties
        string studentId;
        string firstName;
        string lastName;
        string email;
        int age;
        vector<int> daysInCourse;
        DegreeProgram degreeProgram;
    public:
        // Constructors
        Student(string studentId, string firstName, string lastName, string email, int age, vector<int> daysInCourse, DegreeProgram degreeProgram);
    
        // Getters
        string getStudentId() const;
        string getFirstName() const;
        string getLastName() const;
        string getEmail() const;
        int getAge() const;
        vector<int> getDaysInCourse();
    
        // Allow override via enumerator
        virtual DegreeProgram getDegreeProgram();
        virtual void print();
    
        // Setters
        void setStudentId(string studentId);
        void setFirstName(string firstName);
        void setLastName(string lastName);
        void setEmail(string email);
        void setAge(int age);
        void setDaysInCourse(vector<int>);
        void setDegreeProgram(DegreeProgram degreeProgram);
    
//        ~Student();
};

#endif /* student_hpp */
