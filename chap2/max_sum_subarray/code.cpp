#include <iostream>

using namespace std;

void printArray(int *arr , int len) {

    for (int i=0; i<len; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

}

int findMaxSumSubArray(int *arr, int len) {

    int sum = 0;
    int best = 0;

    for(int i = 0; i<len; i++) {
    
        sum = max(arr[i], sum + arr[i]);
        best = max(sum, best);

    }

    return best;

}

int main() {


    int arr[] = {2,-5,-2,1,3,-4,8,6,4};

    printArray(arr,sizeof(arr)/sizeof(arr[0]));
    
    cout <<"max sum subarray is " << findMaxSumSubArray(arr,sizeof(arr)/sizeof(arr[0]))<<endl;

    return 0;
}
