//
//  main.cpp
//  C867-Jack-Jutzi
//
//  Created by Jack Jutzi on 12/15/20.
//  Copyright © 2020 Jack Jutzi. All rights reserved.
//

#include <iostream>
#include <string>
#include "roster.hpp"
#include "degree.hpp"

int main(int argc, const char * argv[]) {
    Roster *testing = new Roster();
    testing->add("A1", "John", "Smith", "John1989@gmail.com", 20, 30, 35, 40, SECURITY);
    
    
    return 0;
}
