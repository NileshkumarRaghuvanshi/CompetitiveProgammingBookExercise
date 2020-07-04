//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
//#include "edgeList.h"

#define MAX_GRAPH_NODES 5
using namespace std;

std::vector<std::pair<int, int>> edgeList;
std::vector<std::tuple<int, int, int>> weightEdgeList;


void printGraph( std::vector<std::pair<int, int>> &edgeList1) {
    
    for (auto edge: edgeList1) {
        cout << edge.first << "-->" <<edge.second <<endl;
    }
#if 0
    for(int i=0; i< MAX_GRAPH_NODES; i++) {
        cout << i << ":";
        for(auto neighbour : adjList[i]) {
            cout<< " "<<neighbour;
        }
        cout <<"."<<endl;
    }
#endif
}

void printWeightedGraph(std::vector<std::tuple<int, int, int>> &weightEdgeList) {

    for (auto weightedEdge : weightEdgeList) {
        int src, dest, weight;
        tie(src, dest, weight) = weightedEdge;
        cout <<src<<"-->"<<dest<<"("<<weight<<")"<<endl;
    }
}

#if 0
int main() {

    edgeList.push_back({1,2});
    edgeList.push_back({2,3});
    edgeList.push_back({2,4});
    edgeList.push_back({3,4});
    edgeList.push_back({4,1});

    printGraph(edgeList);

    weightEdgeList.push_back({1,2,5});
    weightEdgeList.push_back({2,3,6});
    weightEdgeList.push_back({2,4,7});
    weightEdgeList.push_back({3,4,8});
    weightEdgeList.push_back({4,1,9});

    printWeightedGraph( weightEdgeList);
    return 0;

}
#endif
