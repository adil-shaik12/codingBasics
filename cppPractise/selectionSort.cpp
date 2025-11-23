#include<bits/stdc++.h>
using namespace std;
void sSort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        if(arr[i]!=arr[minindex]){
            swap(arr[i],arr[minindex]);
        }
    }
}
void sSort1(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int maxindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[maxindex]){
                maxindex=j;
            }
        }
        if(arr[i]!=arr[maxindex]){
            swap(arr[i],arr[maxindex]);
        }
    }
}

void display(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\n";
    }
}
int main(){
    vector<int>arr={7,6,1,4,5};
    cout<<"before sorting"<<"\n";
    display(arr);
    sSort(arr);
    cout<<"after sorting"<<"\n";
    display(arr);
    cout<<"before sorting"<<"\n";
    display(arr);
    sSort1(arr);
    cout<<"after sorting"<<"\n";
    display(arr);
    return 0;

}