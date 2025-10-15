#include<iostream>
using namespace std;
int shipGame(){
    int arr[4][4]=
    {
    {0,0,1,0},
    {1,0,0,0},
    {0,0,0,1},
    {1,0,0,0}
};
int hits=0;
int r;
int c;
int numberOfturns=0;
while(hits<4){
    cout<<"input your row number";
    cin>>r;
    cout<<"input your column number";
    cin>>c;
    
    numberOfturns++;
    if(arr[r][c]==1){
        hits++;
        cout<<"you have hit the ship"<<"\n";
        arr[r][c]=0;
        
    }
}
cout<<"congrats you have own the game in "<<numberOfturns<<" turns";
return 0;
}

//the below code is for finding largest element in an array

int largestElement(){
    int arr[]={2,4,10,8,11};
    int lval=0;
    for(int i=0;i<5;i++){
        if(arr[i]>lval){
            lval=arr[i];
        }
    }
    cout<<"the largestELement in an array is"<<lval;
    return 0;
}
//the below code is for sum of all elements in an array
int sum(){
    int arr[]={2,4,6,8,10};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=arr[i]+sum;
    }
    cout<<"sum of all elements is"<<sum;
    return 0;
}
//the below code is for reversing the elements in an array
int reverse(){
    int arr[]={1,2,3,4,5};
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<"\n";
    }
    return 0;
}
//the below code is for finding numbers occuring odd number of times
int oddNumber(){
  
   int arr[]={2,3,5,4,5,2,4,3,5,2,4,4,2};
    for(int i=0;i<14;i++){
        int count=0;
        for(int j=0;j<14;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count%2!=0){
            cout<<arr[i]<<"\n";
        }
    }
    return 0;
}

int main(){
    shipGame();
    largestElement();
    sum();
    reverse();
    oddNumber();
    return 0;
}