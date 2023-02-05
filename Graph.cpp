//
//  Graph.cpp
//  Demo
//
//  Created by Omar Afifi on 10/21/22.
//

#include "Graph.hpp"



Graph :: Graph(std :: vector<Pair> edges) : edges(edges){};

void :: Graph :: get_edges() const
{
    std :: cout << "(";
    for(Pair x : this->edges)
    {
        x.get_pair();
    }
    std :: cout << std :: endl;
    std :: cout << ")";
}
