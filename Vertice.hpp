//
//  Vertice.hpp
//  Demo
//
//  Created by Omar Afifi on 10/21/22.
//

#ifndef Vertice_hpp
#define Vertice_hpp

#include <stdio.h>

#include<vector>
#include<iostream>
#include<set>

class Vertice
{
public:
    
    Vertice(std:: multiset<int> pos);
    void get_position() const;
    void change_status(char color);
    std :: multiset<int> position;
    char status;
};








#endif /* Vertice_hpp */
