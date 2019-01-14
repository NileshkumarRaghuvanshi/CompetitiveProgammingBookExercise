#include<iostream>
#include <vector>

using namespace std;

int main() {


    //Type is initializtion :
    //1.
    vector<int> v;

    v.push_back(4);
    v.push_back(10);
    v.push_back(15);
    v.push_back(17);

   //2.
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2(10);
    vector<int> v3(10,5);

   for (auto x : v) {
        cout<< x <<" ";
   }

    cout<<endl;
   for (int i = 0; i < v.size(); i++) {

        cout<<v[i]<<" ";
    }

   cout<<endl;
   for (auto x : v1) {
        cout<< x <<" ";
   }

    cout<<endl;
   for (auto x : v2) {
        cout<< x <<" ";
   }
    cout<<endl;
   for (auto x : v3) {
        cout<< x <<" ";
   }


 
    //cout<<"Hello world"<<endl;

    //Operation on vectors

    cout<<"operations"<<endl;
    cout<<v.back()<<endl;
    v.pop_back();
    cout<<v.back() <<endl;

    return 0;
}
