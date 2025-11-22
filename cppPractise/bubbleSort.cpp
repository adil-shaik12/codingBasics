#include<bits/stdc++.h>
using namespace std;
void bsort(vector<int>& arr){
    int n=arr.size();
    bool swapped;
    for(int i=0;i<n-1;i++){
        swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped){
            break;
        }
    }
}
void display(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\n";
    }
}
int main(){
    vector<int>arr={5,6,1,3,4};
    cout<<"before sorting"<<"\n";
    display(arr);
    bsort(arr);
    cout<<"after sorting"<<"\n";
    display(arr);
    return 0;
}