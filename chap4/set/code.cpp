#include <iostream>
#include <vector>
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


void printMultiset(multiset<int> &A) {

    for (auto x: A) {
        cout<<x<<" ";
    }

    cout<<"\n";

}

int main() {


    set <int> A;

    A.insert(3);
    A.insert(3);
    A.insert(4);


    printSet(A);

   cout<<A.count(3)<<endl;

    A.erase(3);
    printSet(A);

    //multi set

    multiset<int> mA;

    mA.insert(5);
    mA.insert(5);
    mA.insert(5);
    mA.insert(6);

    printMultiset(mA);
    mA.erase(5);
    printMultiset(mA);

    mA.insert(5);
    mA.insert(5);
    mA.insert(5);

    mA.erase(mA.find(5));
    printMultiset(mA);
 
    return 0;
}
