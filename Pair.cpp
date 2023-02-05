//
//  pair.cpp
//  Demo
//
//  Created by Omar Afifi on 10/21/22.
//

#include "Pair.hpp"
#include <iostream>

Pair :: Pair(Vertice vertice1, Vertice vertice2): v1(vertice1), v2(vertice2){};

void :: Pair :: get_pair() const
{
    std :: cout << "("; v1.get_position(); std :: cout << ","; v2.get_position(); std :: cout << ")";
}
