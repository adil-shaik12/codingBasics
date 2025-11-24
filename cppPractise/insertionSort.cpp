#include<bits/stdc++.h>
using namespace std;
void iSort(vector<int>& arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void display(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\n";
    }
}
void iSort1(vector<int>& arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]<key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main(){
    vector<int>arr={5,3,6,8,7,2};
    cout<<"before sorting"<<"\n";
    display(arr);
    iSort(arr);
    cout<<"after sorting"<<"\n";
    display(arr);
    cout<<"before sorting"<<"\n";
    display(arr);
    iSort1(arr);
    cout<<"after sorting"<<"\n";
    display(arr);
    return 0;
}