//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX_GRAPH_NODES 5
using namespace std;

/*
** A good way to represent graph using adjacency list is through
** array of vectors
*/
int adjList[MAX_GRAPH_NODES][MAX_GRAPH_NODES];

void printGraph() {

    for(int i=0; i< MAX_GRAPH_NODES; i++) {
        for(int j = 0; j < MAX_GRAPH_NODES; j++ ) {
            
            cout<< adjList[i][j] << " ";
        }
        cout <<endl;
    }

}
int main() {

    adjList[1][2] = 1;
    adjList[2][3] = 1;
    adjList[2][4] = 1;
    adjList[3][4] = 1;
    adjList[4][1] = 1;

    printGraph();

    return 0;

}
