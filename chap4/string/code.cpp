#include <iostream>

using namespace std;

int main() {

    //String examplses
    //Initializations

    string a = "World";
    string b = a + " " + "is not at peace!!!";
    cout<<b<<"\n";

    b[9] = 'N';
    cout<<b<<"\n";

    string c = b.substr(16,5);
    cout<<c<<endl;

    return 0;
}

