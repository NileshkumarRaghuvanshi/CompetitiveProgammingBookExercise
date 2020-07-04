//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX_GRAPH_NODES 5
using namespace std;

/*
** A good way to represent graph using adjacency list is through
** array of vectors
*/
vector<int> adjList[MAX_GRAPH_NODES];
vector<pair<int, int>> weighted_adj_list[MAX_GRAPH_NODES];

void printWeightedGraph() {

    for (auto node: weighted_adj_list) {
        for(auto neighbor : node) {

            cout << neighbor.first << ": "<< neighbor.second<<endl;

        }
    }
    for(int i=0; i< MAX_GRAPH_NODES; i++) {
        cout << i << ":";
        for(auto neighbour : weighted_adj_list[i]) {
            cout<< " "<<neighbour.first << "("<<neighbour.second<<")";
        }
        cout <<"."<<endl;
    }

}

void printGraph() {

//#if 0
    for (auto node : adjList) {
        for (auto neighbor: node) {
            cout << neighbor <<endl;
        }
    }
//#else
    for(int i=0; i< MAX_GRAPH_NODES; i++) {
        cout << i << ":";
        for(auto neighbour : adjList[i]) {
            cout<< " "<<neighbour;
        }
        cout <<"."<<endl;
    }
//#endif

}
int main() {

    adjList[1].push_back(2);
    adjList[2].push_back(3);
    adjList[2].push_back(4);
    adjList[3].push_back(4);
    adjList[4].push_back(1);

    printGraph();

    weighted_adj_list[1].push_back({2,5});
    weighted_adj_list[2].push_back({3,7});
    weighted_adj_list[2].push_back({4,6});
    weighted_adj_list[3].push_back({4,5});
    weighted_adj_list[4].push_back({1,2});

    printWeightedGraph();

    return 0;

}
