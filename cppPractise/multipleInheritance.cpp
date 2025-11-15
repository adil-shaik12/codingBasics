#include<iostream>
#include<string>
using namespace std;
class employee1{
    public:
    int emplo(){
    string name="adil";
    int age=20;
    cout<<name<<"\n";
    cout<<age<<"\n";
    return 0;
    }
};
class employee2{
    public:
    int employ(){
    string name="azam";
    int age=21;
    cout<<name<<"\n";
    cout<<age<<"\n";
    return 0;
    }
};
class emp:public employee1,public employee2{
};
int main(){
    emp e1;
    e1.emplo();
    e1.employ();
    return 0;

}