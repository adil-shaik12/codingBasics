#include<iostream>
#include<vector>
using namespace std;
int countnum(vector<int> arr,int key){
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            count++;
        }
    }
    return count;
}
//using binarysearch
int bcountnum(vector<int> arr,int key){
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            int count=1;
            int left=mid-1;
            int right=mid+1;
            while(left>=0 && arr[left]==key){
                count++;
                left--;
            }
            while(right<arr.size() && arr[right]==key){
                count++;
                right++;
            }
            return count;
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
    int key=1;
    vector<int>arr={0,0,0,1,1,1,1,1,1,1};
    int count=countnum(arr,key);
    cout<<count<<"\n";
    int bcount=bcountnum(arr,key);
    cout<<bcount<<"\n";
    return 0;

}