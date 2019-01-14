#include <iostream>
#include <vector>
#include <map>


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

void printSet(vector<int> &A) {

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

    map<string, int> m;

    m["Man"] = 5;
    m["Women"] = 9;
    m["boys"] = 15;

    printMap(m);

    cout<<m["boys"]<<endl;
    cout<<m["girls"]<< endl;

    printMap(m);

    cout<<m.count("children")<<endl;
    cout<<m.count("girls")<<endl;
    
    auto it = m.begin();

    cout<<it->first<<" : "<<it->second<<endl;

    it = m.find("Children");
    if (it == m.end() )
        cout<<"Children"<<" "<<"Not present"<<endl;
    else
        cout<<"Children"<<" "<<"Present"<<endl;

    it = m.find("girls");
    if (it == m.end() )
        cout<<"girls"<<" "<<"Not present"<<endl;
    else
        cout<<"girls"<<" "<<"Present"<<endl;

    //cout<<*it<<endl;
    return 0;
}
