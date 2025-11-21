#include<iostream>
#include<vector>
using namespace std;
int largestnum(vector<int>arr){
    int max=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
//to find second largest element
int secondlargest(vector<int>arr){
    int n=arr.size();
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[n-1]){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    vector<int>arr={2,3,4,5,6};
    int lar=largestnum(arr);
    cout<<lar;
    cout<<secondlargest(arr);
    return 0;
}