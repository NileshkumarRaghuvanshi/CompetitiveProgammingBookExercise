#include <iostream>
#include <vector>
#include <limits>
#include "../edgeList.h"

#define INT_INF std::numeric_limits<int>::max()
using namespace std;
extern std::vector<std::tuple<int, int, int>> weightEdgeList;

/*
** finds the shortest path from a node to all other nodes in the graph:w

** Algorithm:
    1. initialized distance to all nodes equal to INFINITY, except the starting node
    2. traverse over all the edges and shorten the distance from starting node.
    3. repeat it for each node
*/
void shortestPath(std::vector<std::tuple<int, int, int>> &weightEdgeList, unsigned int max_node, int start_node) {

    int distance[max_node+1];
    bool distance_changed = true;
    for (int i=0; i<(max_node + 1); i++) {
        distance[i] = INT_INF;
    }

    distance[start_node] = 0;

    for (int i=1; i<=max_node && distance_changed; i++) {
        cout<<"==============================================="<<endl;
        distance_changed = false;
        for (auto edge: weightEdgeList) {
            int src, dest, weight;
            tie(src, dest, weight) = edge;
            //cout<<"src: "<< src << " dest: "<<dest << " weight: "<<weight<<endl;
            cout<<"old : "<< distance[dest];
            if (distance[dest] != min(distance[dest], distance[src]+ weight)) {
                distance[dest] = min(distance[dest], distance[src]+ weight);
                distance_changed |= true;
            }
            else {
                distance_changed |= false;
            }
            cout<<" new : "<< distance[dest]<<endl;
        }
    }

    for(int i=0; i< (max_node + 1); i++) {
        cout<< i<< ":"<<distance[i]<<endl;
    }
    
    /*
        Negative cycle is cycle with overall negative weight, when you add
        weights of all nodes in cycle the sum is negtive.
    */
    if(distance_changed == true) {
        cout<<"================ Graph contains negative cycle ==============="<<endl;
    }
}

int main() {

    weightEdgeList.push_back({1,2,5});
    weightEdgeList.push_back({2,1,5});
    weightEdgeList.push_back({1,3,3});
    weightEdgeList.push_back({3,1,3});
    weightEdgeList.push_back({1,4,7});
    weightEdgeList.push_back({4,1,7});
    weightEdgeList.push_back({3,4,1});
    weightEdgeList.push_back({4,3,1});
    weightEdgeList.push_back({2,4,3});
    //makes a negative cycle
    weightEdgeList.push_back({4,2,-9});
    //weight is negative but the cycle is not
    //weightEdgeList.push_back({4,2,-3});
    weightEdgeList.push_back({2,1,5});
    weightEdgeList.push_back({1,2,5});
    weightEdgeList.push_back({4,5,2});
    weightEdgeList.push_back({5,4,2});
    weightEdgeList.push_back({2,5,2});
    weightEdgeList.push_back({5,2,2});

    printWeightedGraph(weightEdgeList);

    shortestPath(weightEdgeList, 5, 1);

    return 0;
}
