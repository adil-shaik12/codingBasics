#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
    int car1(){
        cout<<model<<"\n";
        return 0;
    }
    int year1(int& year2){
        cout<<++year2;
        return 0;
    }
};
int main(){
car mycar;
mycar.brand="toyota";
mycar.model="fortuner";
mycar.year=2022;
cout<<mycar.brand<<"\n";
cout<<mycar.model<<"\n";
cout<<mycar.year<<"\n";
mycar. car1();
mycar.year1(mycar.year);
return 0;
}
//using constructors
class truck{
    public:
    string brand;
    string model;
    int year;
    truck(string x,string y,int z);
};
class bike{
    public:
    string brand;
    string model;
    int year;
    bike(string a,string b){
        brand=a;
        model=b;
        cout<<a<<"\n";
        cout<<b<<"\n";
    }
    bike(string p,string q,int r){
        brand=p;
        model=q;
        year=r;
        cout<<p<<"\n";
        cout<<q<<"\n";
        cout<<r<<"\n";
    }
    bike();
};
truck::truck(string x,string y,int z){
        brand=x;
        model=y;
        year=z;
}
bike::bike(){
    cout<<"this is empty constructor for overloding";
}
int main(){
    truck mytruck("mahindra","thar",2024);
    cout<<mytruck.brand<<"\n";
    cout<<mytruck.model<<"\n";
    cout<<mytruck.year<<"\n";
    bike bike1("yamaha","rx");
    bike bike2("honda","unicorn",1980);
    bike bike3;
    return 0;
}
//access specifiers
class person{
    public:
    string name;
    int age;
};
int main(){
    person p1;
    p1.name="adil";
    p1.age=19;
    cout<<p1.name<<"\n";
    cout<<p1.age<<"\n";
    return 0;
}
//encapsulation
//private access specifier
class person{
    private:
    int salary;
    public:
    int setsalary(int s){
        salary=s;
        return 0;
    }
    int getsalary(){
        cout<<salary;
        return 0;
    }
    public:
    string name;
    int age;
};
int main(){
    person p1;
    p1.name="adil";
    p1.age=19;
    p1.setsalary(30000);
    cout<<p1.name<<"\n";
    cout<<p1.age<<"\n";
    p1.getsalary();
    return 0;
}
