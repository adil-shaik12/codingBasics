#include <iostream>
#include <string>
#include <cmath>
#include<vector>        
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
    string tname="mahammad";
    fname.append(sname).append(tname);
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
    string txt="adilghcydgdgcbhdcgg";
    string nm="character";
    string spe="my name is\"adil\"and i am from\\proddatur\\in \'kadapa'";
    int len=10;
    
    int a=txt.length();
    if(a>10){
        cout<<"string is big";
    }
    else{
        cout<<"string is small";
    }
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
//the below code is ofr using statements
int statement(){
    int x=10;
    int y=20;
    if(x<y){
        cout<<"x is lessthan y";
    }
    else if(x<=y){
        cout<<"x is lessthan or equal to y";
    }
    
    else{
        cout<<"x is greater than y";
    }

}
//the below code is for switch statement
int switchStatement(){
    int day;
    cout<<"enter the day number";
    cin>>day;
    switch (day){
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"tuesday";
        break;
        case 3:
        cout<<"wednesday";
        break;
        case 4:
        cout<<"thursday";
        break;
        case 5:
        cout<<"friday";
        break;
        case 6:
        cout<<"saturday";
        break;
        case 7:
        cout<<"sunday";
        break;
        return 0;
    }
}
//the below code is for while and do/while loop
int loop(){
    int i=0;
    while (i<10){
        cout<<i<<"\n";
        i++;
    }
}
int doWhile(){
    int i=0;
    do{
        cout<<i<<"\n";
        i++;
    }
    while(i<=10);
    return 0;
}
int forLoop(){
    int i=10;
    for(i=0;i<=10;i++){
        if(i=0){
            cout<<"the value is 0";
        }
        if(i=1){
            cout<<"the value is 1";
        }
        cout<<i<<"/n";

    }
}

//the below code is for arrays

int arrayForloop(){
    int n;
    int num[n];
    int i;
    
    cout<<"enter the size of array";
    cin>>n;
    for(i=0;i<5;i++){
        int j;
        cout<<"enter"<<i<<"number";
        cin>>j;
        num[i]=j;
}
    for(int j=0;j<5;j++){
        cout<<num[j];
    }
}
int arrayForeachloop(){
  
  string my[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  
  for (string string : my) 
  {
    cout << string<< "\n";
  }
  return 0;
}
//the below code is for arrays
int array(){
    int num[5];
    cout<<sizeof(num);
    return 0;
}
int arrayVector(){
    vector<string>name={"adil","shaik","mahammad"};
    name.push_back("cse");
    for(string a:name){
        cout<<a<<"\n";
    }
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
    statement();
    switchStatement();
    loop();
    doWhile();
    forLoop();
    arrayForloop();
    arrayForeachloop();
    array();
    arrayVector();
    return 0;
}






