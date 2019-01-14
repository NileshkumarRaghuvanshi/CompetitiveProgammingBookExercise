#include <iostream>
#include <vector>
#include <map>
#include <set>

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

int main() {

    vector <int> A;
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);

    printVector(A);

    return 0;
}
