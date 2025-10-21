// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
void reverseString(string& n,int start,int end){
    if(start>=end){
        return;
    }
    int t=n[start];
    n[start]=n[end];
    n[end]=t;
    return reverseString(n,start+1,end-1);
}
int main() {
    string name="encapsulation";
    cout<<"before reversing of a string: "<<name<<"\n";
    reverseString(name,0,name.length()-1);
    cout<<"after reversing of a string: "<<name<<"\n";
    return 0;
}