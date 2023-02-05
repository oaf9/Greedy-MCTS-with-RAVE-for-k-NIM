//
//  Vertice.cpp
//  Demo
//
//  Created by Omar Afifi on 10/21/22.
#include "Vertice.hpp"

void multiset_printer(std :: multiset<int> set)
{
    for(int z : set) { std :: cout <<  z << ", "; }
}

void Vertice :: get_position() const
    {
        std :: cout << "[";
        multiset_printer(this->position);
        std :: cout << this->status;
        std :: cout << "]";
    }

Vertice :: Vertice(std::multiset<int> pos)
{
    position = pos;
}

void :: Vertice :: change_status(char color)
{
    status = color;
}





