#include<iostream>
using namespace std;
int twoDimension(){
    int arr[2][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10}
    };
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<"\n";
        }
    
    }
    return 0;
} 
int threeDimension(){
    int arr[2][2][5]={
        {
            {1,2,3,4,5},
            {6,7,8,9,10}
        },
        {
            {10,9,8,7,6},
            {5,4,3,2,1}
        }
    };
    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            for(int k=0;k<5;k++){
                cout<<arr[i][j][k]<<"\n";
            }
        }
    }
    return 0;
}
int main(){
    twoDimension();
    threeDimension();
    return 0;

}