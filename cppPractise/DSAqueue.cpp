#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main(){
    queue<string>cars;
    cars.push("toyota");
    cars.push("fortuner");
    cars.push("mahindra");
    cars.push("tata");
    cout<<cars.front()<<"\n";        //to access front element 
    cout<<cars.back()<<"\n";         //to access back element
    cars.front()="ford";             //to change front element 
    cars.back()="volvo";             //to change back element
    cout<<cars.front()<<"\n";
    cout<<cars.back()<<"\n";
    cout<<cars.size()<<"\n";         //to know the size 
    cout<<cars.empty()<<"\n";        //to check whether the size is empty or not
    cars.pop();                      //to remove element
    cout<<cars.front()<<"\n";
    return 0;

}