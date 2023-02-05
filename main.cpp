//
//  main.cpp
//  Demo
//
//  Created by Omar Afifi on 10/21/22.
//
#include "Graph.hpp"





using namespace std;
int main()
{
    multiset<int> set = {1,2,3,4,5};
    Vertice gameplay = Vertice(set);
    gameplay.status = 'U';
    //gameplay.get_position();
    
    multiset<int> set2 = {1,2,5};
    Vertice gameplay2 = Vertice(set2);
    gameplay2.status = 'R';
    
    Pair firstedge = Pair(gameplay, gameplay2);
    
   // firstedge.get_pair();
    vector<Pair> nodes;
    nodes.push_back(firstedge);
    Graph game = Graph(nodes);
    game.get_edges();
    
    
    
    
    
    
    
    
    

    return 0;

}
