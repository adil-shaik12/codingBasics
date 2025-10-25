#include<iostream>
#include<string>
using namespace std;
int towerOfhanoi(int n,int a,int b,int c){
    if(n>0){
        towerOfhanoi(n-1,a,c,b);
        cout<<a<<"to"<<c<<"\n";
        towerOfhanoi(n-1,b,a,c);
    }
}
int main(){
    towerOfhanoi(3,1,2,3);
    return 0;
}