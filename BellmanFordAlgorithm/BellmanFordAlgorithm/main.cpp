//
//  main.cpp
//  BellmanFordAlgorithm
//
//  Created by Michal Bialas on 16.10.2013.
//

#include <iostream>

#define MAX_EDGES 11
#define MAX_VERTICIES 7

using namespace std;

typedef struct {
    int v1, v2;
    double weight;
} Edge;

const double infinity = 10000;

int predecessor[MAX_VERTICIES];


int main(int argc, char** argv) {
    
    Edge edge[MAX_EDGES] = {
        { 2, 1, 1 },
        { 3, 2, 3 },
        { 6, 3, -2 },
        { 1, 4, 4 },
        { 4, 1, 2 },
        { 6, 4, -6 },
        { 5, 6, -3 },
        { 4, 5, 15 },
        { 5, 0, 2 },
        { 5, 1, 2 },
        { 1, 0, 3 }
        
    };
    
    cout << "\n=====================================================\n" << endl;
    
    for (int i = 0; i < MAX_EDGES; i++) {
        Edge e = edge[i];
        cout<<"Edge["<<i<<"]: "<<"v1: "<<e.v1 <<", v2: "<<e.v2<<" , weight: "<<e.weight<<endl;
    }
    
    cout << "\n=====================================================\n" << endl;
    
    for (int i = 0; i < MAX_VERTICIES; i++) {
        predecessor[i] = -1;
    }
    
    double distance[MAX_VERTICIES];
    
    for (int i = 1; i < MAX_VERTICIES; i++) {
        distance[i] = infinity;
    }
    distance[0] = 0;
    
    for (int i = 0; i < MAX_VERTICIES; i++) {
        cout << "distance[" << i << "] = " << distance[i]
        << ", predecessor[i] = " << predecessor[i] << endl;
        
    }
    
    cout << "\n===============BELLMAN-FORD'S ALGORITHM===============\n" << endl;
    
    for (int j = 1; j < MAX_VERTICIES - 1; j++) {
        for (int i = 0; i < MAX_EDGES; i++) {
            Edge e = edge[i];
            if (distance[e.v1] > distance[e.v2] + e.weight) {
                distance[e.v1] = distance[e.v2] + e.weight;
                predecessor[e.v1] = e.v2;
                
            }
        }
    }
    
    for (int i = 0; i < MAX_VERTICIES; i++) {
        cout << "Vertex[" << i << "]: distance[i] = " << distance[i]
        << ", is the predecessor of Vertex[" << predecessor[i] << "]" << endl;
    }
    
    cout << "\n=====================================================\n" << endl;
    
    return 0;
}

