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

    set<int> A = {1,5,2,9,6,4};
    set<int>::iterator itr = A.begin();

    printSet(A);
    cout<<*itr<<endl;

    for (auto it = A.begin(); it != A.end(); it++) {
        cout<<*it<< " ";
    }

    cout<<"printing smallest and largest number"<<endl;
    
    auto it = A.begin();
    cout<<*it<< "<-- this is smallest number in set"<<endl;

    it = A.end(); it--;
    cout<<*it<<"<-- This is largetst number in set"<<endl;

    it = A.find(7);
    if(it == A.end() )
        cout<<"The number 7 is not present in set"<<endl;
    else
        cout<<"The number 7 is present in set"<<endl;
   
    cout<<"Understanding lower_bound and upper_bound API"<<endl;
    
    it = A.lower_bound(3) ;
    cout<<"lower bound for 3 is "<<*it<<endl;

    it = A.upper_bound(3);
    cout <<"upper bound for 3 is "<<*it<<endl;

    it = A.lower_bound(6) ;
    cout<<"lower bound for 6 is "<<*it<<endl;

    it = A.upper_bound(6);
    cout <<"upper bound for 6 is "<<*it<<endl;

    return 0;
}
