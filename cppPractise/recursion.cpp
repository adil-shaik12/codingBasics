#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
//the below code is for finding factorial of a number 
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
//the below code is for fibonacci numbers
int fib(int n){
    if(n<=1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    cout<<sum(5);
    cout<<fact(5);
    cout<<fib(6);
    return 0;
}