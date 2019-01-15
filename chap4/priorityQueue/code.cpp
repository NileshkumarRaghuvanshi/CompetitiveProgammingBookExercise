#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>


using namespace std;

void printArray(int *arr, int size) {

    for (int i=0; i<size; i++) {

        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void printVector(vector<int> &A) {

    for (auto x: A) {
        cout <<x<< " ";
    }
    cout<<"\n";
}

void printSet(set<int> &A) {

    for (auto x: A) {
        cout <<x<< " ";
    }
    cout<<"\n";
}

void printMap(map<string, int> &map) {

    for (auto x: map) {
        cout <<x.first<< ": "<<x.second<<"\n";
    }
    cout<<"\n";

}

void printPriorityQueue(priority_queue<int> &pq) {

    priority_queue<int> temp_pq = pq;

    while(!temp_pq.empty() ) {
    
       cout << temp_pq.top()<<" ";
       temp_pq.pop();
    }

    cout<<"\n";
}

void printMinPriorityQueue(priority_queue<int, vector<int>, greater<int>> &lpq) {

    priority_queue<int, vector<int>, greater<int>> temp_lpq = lpq;

    while(!temp_lpq.empty()) {

        cout<<temp_lpq.top()<<" ";
        temp_lpq.pop();
    }
    cout<<"\n";
}

int main() {

    priority_queue<int> pq;

    pq.push(3);
    pq.push(10);
    pq.push(134);
    pq.push(1);

    
    printPriorityQueue(pq);
    pq.pop();
    printPriorityQueue(pq);

    cout<<"Priority queue with minimum value as high priority\n";

    priority_queue<int, vector<int>, greater<int>> lpq;

    lpq.push(10);
    lpq.push(50);
    lpq.push(2);
    lpq.push(9);

    printMinPriorityQueue(lpq);
    lpq.pop();
    printMinPriorityQueue(lpq);

    

    return 0;
}
