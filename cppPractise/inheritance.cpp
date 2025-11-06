#include<iostream>
#include<string>
using namespace std;
class cars{
    public:
    string brand;
    string model;
};
class car1:public cars{
    public:
    int year;
};
int main(){
    car1 mycar;
    mycar.brand="toyota";
    mycar.model="fortuner";
    mycar.year=2022; 
    cout<<mycar.brand<<"\n";
    cout<<mycar.model<<"\n";
    cout<<mycar.year<<"\n";
    return 0;
}