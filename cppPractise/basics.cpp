#include <iostream>
#include <string>
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

int main(){
    // output();
    // variables();
    // inputStudentData();
    dataTypes();
    return 0;
}