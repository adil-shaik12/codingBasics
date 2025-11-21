#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> arr,int key){
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int key=14;
    vector<int>arr={11,12,13,14,15};
    int bin=binarysearch(arr,key);
    if(bin==-1){
        cout<<"element is not found"<<"\n";
    }
    else cout<<"element is found at index:"<<bin<<"\n";
    return 0;
}