#include<iostream>
#include<string>
using namespace std;
class gfather{
   public:
   string name;
};
class father:public gfather{
    public:
    int age;
};
class son:public father{
    public:
    string sname;
};
int main(){
    son myson;
    myson.name="adil";
    myson.age=19;
    myson.sname="mahammad";
    cout<<myson.name<<"\n";
    cout<<myson.age<<"\n";
    cout<<myson.sname<<"\n";
    return 0;
}