#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int arithmetic(int a,int b)
{
    
    cout << a + b << "\n";
    cout << a - b << "\n";
    cout << a * b << "\n";
    cout << a / b << "\n";
    cout << a % b << "\n";
    return 0;
}
int assignment(int x)
{
    x += 5;
    x -= 1;
    x *= 5;
    x /= 3;
    x %= 2;
    cout << x;
    return 0;
}
int comparison(int x ,int y)
{
    cout << (x == y)<<"\n";
    cout << (x != y)<<"\n";
    cout << (x > y)<<"\n";
    cout << (x < y)<<"\n";
    cout << (x <= y)<<"\n";
    cout << (x >= y)<<"\n";
    return 0;
}
int logical(int x,int y)
{
    cout << (x < 12 && y > 20)<<"\n";
    cout << (x <= 10 || y < 20)<<"\n";
    cout << (x != 20);
    return 0;
}
int name(string name)
{
    cout << "my name is:" << name;
    return 0;
}
int concat(string fname,string sname,string tname)
{
    cout << fname << " " + sname << " " + tname;
    return 0;
}
int append(string fname,string sname,string tname)
{
    fname.append(sname).append(tname);
    cout << fname;
    return 0;
}
int stringnum(string a,string b)
{
    a = a + b;
    cout << a;
    return 0;
}
int length(string txt,string nm,string spe)
{
    cout << txt.size()<<"\n";
    cout << nm[0]<<"\n";
    cout << spe<<"\n";
    return 0;
}
int main(){
    arithmetic(20,30);
    assignment(10);
    comparison(10,20);
    logical(10,20);
    name("mahammad");
    concat("adil","shaik","mahammad");
    append("adil","shaik","mahammad");
    stringnum("7565","2343");
    length("bhfbdhsgchsgdhcbh","character","my name is\"adil\"and i am from\\proddatur\\in \'kadapa'");
    return 0;
}
