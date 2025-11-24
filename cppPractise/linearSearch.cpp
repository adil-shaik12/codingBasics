#include<iostream>
#include<vector>
using namespace std;
int linearsearch(vector<int>arr,int key){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            return i;
        }
    }
     return -1;
}
int main(){
    int key=8;
    vector<int>arr={2,4,6,8,10};
    int sear=linearsearch(arr,key);
    if(sear==-1){
        cout<<"key is not found"<<"\n";
    }
        cout<<"element is found at index:"<<sear<<"\n";
    return 0;
}