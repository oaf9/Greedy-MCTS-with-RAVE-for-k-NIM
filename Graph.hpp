//
//  Graph.hpp
//  Demo
//
//  Created by Omar Afifi on 10/21/22.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <stdio.h>
#include "Pair.hpp"

class Graph
{
public:
    std :: vector<Pair> edges;
    Graph(std :: vector<Pair> edges);
    void get_edges() const;
};



#endif /* Graph_hpp */
