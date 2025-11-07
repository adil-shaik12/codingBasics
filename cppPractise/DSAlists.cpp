#include<iostream>
#include<string>
#include<list>
using namespace std;
int main(){
    list<string> name={"adil","shaik","mahammad"};
    name.push_front("azam");       //to add element in front
    name.push_back("moin");        //to add element in back
    name.pop_front();              //to remove element in front
    name.pop_back();               //to remove element in back
    cout<<name.size()<<"\n";       //to check size of a list
    cout<<name.empty()<<"\n";      //to check whether list is empty or not
    for(string names:name){
        cout<<names<<"\n";
    }
    cout<<name.front()<<"\n";
    cout<<name.back()<<"\n";
    name.front()="shaik";          //to change elements in front
    name.back()="adil";            //to change element in back
    cout<<name.front()<<"\n";
    cout<<name.back()<<"\n";
    return 0;
}
    