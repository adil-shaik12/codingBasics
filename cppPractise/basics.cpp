#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// the below code is for output
int output(){
    cout<<"output";
    return 0;
}
//the below code is for learning variablaes in cpp
int variables(){
    int a;
    char n;
    string name;
    cout<<a<<" "<<n<<" "<<name;
    return 0;
}
//the below code is for learning inputs in cpp
int inputStudentData(){
    string name;
    int age;
    int studentId, rollNo;
    cout<<"enter your name";
    cin>>name;
    cout<<"enter your age";
    cin>>age;
    cout<<"enter your studentId";
    cin>>studentId;
    cout<<"enter your rollNo";
    cin>>rollNo;
    cout<<name<<" "<<age<<" "<<studentId<<" "<<rollNo;
    return 0;
}
// the below code is dataTypes
int dataTypes(){
    int num;
    float fee;
    bool flag=true;
    string name;
    char sec;
    double data;
    cout<<"the num is:";
    cin>>num;
    cout<<"thr fee is:";
    cin>>fee;
    cout<<flag<<"\n";
    cout<<"the name is:";
    cin>>name;
    cout<<"sec is:";
    cin>>sec;
    cout<<"the data is:";
    cin>>data;
    cout<<num<<" "<<fee<<" "<<" "<<flag<<" "<<name<<" "<<sec<<" "<<data;
    return 0;
}
//the beow code is for operators
//for arithmetic 
int arithmetic(){
    int a=10;
    int b=5;
    cout<<a+b<<"\n";
    cout<<a-b<<"\n";
    cout<<a*b<<"\n";
    cout<<a/b<<"\n";
    cout<<a%b<<"\n";
    return 0;
}
int assignment(){
    int x=3;
     x += 5;
     x-=1;
     x*=5;
     x/=3;
     x%=2;
     cout<<x;
     return 0;
}
int comparison(){
    int x=5;
    int y=15;
    cout<<(x==y);
    cout<<(x!=y);
    cout<<(x>y);
    cout<<(x<y);
    cout<<(x<=y);
    cout<<(x>=y);
    return 0;
}
//the below code is for logical
int logical(){
    int x=10;
    int y=20;
    cout<<(x < 12 && y>20);
    cout<<(x<=10 || y<20);
    cout<<(x!=20);
    return 0;
}
//the below code is about strings
int name(){
    string name="adil";
    cout<<"my name is:"<<name;
    return 0;
}
//the below code is for concatenation
int concat(){
    string fname="shaik";
    string sname="mahammad";
    string tname="adil";
    cout<<fname<<" "+sname<<" "+tname;
    return 0;
}
//code using append function
int append(){
    string fname="adil";
    string sname="shaik";
    fname.append(sname);
    cout<<fname;
    return 0;
}
//the code is for adding numbers in strings
int stringnum(){
    string a="10";
    string b="10";
    a=a+b;
    cout<<a;
    return 0;
}
//the below code is for accessing strings,length and by using special characters
int length(){
    string txt="bhfbdhsgchsgdhcbh";
    string nm="character";
    string spe="my name is\"adil\"and i am from\\proddatur\\in \'kadapa'";
    cout<<txt.size();
    cout<<nm[0];
    cout<<spe;
    return 0;
}
//the below code is for user input string
int input(){
    string str;
    cout<<"type your name:";
    cin>>str;
    cout<<"your full name is:";
    return 0;
}
//the below code is fro user input string using getline() method
int get(){
    string var;
    cout<<"type your name:";
    getline (cin,var);
    cout<<"your full name is:"<<var;
    return 0;
}
//the below code is for math using cmath header file
int cmath(){
    cout<<"square root of 49 is:"<<sqrt(49);
    cout<<"round of a number 2.8 is :"<<round(2.8);
    cout<<"natural logarithm of 3 is:"<<log(3);
    cout<<"power of 2,3 is:"<<pow(2,3);
    return 0;
}




int main(){
    output();
    variables();
    inputStudentData();
    dataTypes();
    arithmetic();
    assignment();
    comparison();
    logical();
    name();
    concat();
    append();
    stringnum();
    length();
    input();
    get();
    cmath();
    return 0;
}