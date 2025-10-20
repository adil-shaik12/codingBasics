#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int sum(int a,int b)
{
    cout << a + b << "\n";
    return 0;
}
int sub(int a,int b)
{
    cout << a - b << "\n";
    return 0;
}
int multi(int a,int b)
{
    cout << a * b << "\n";
    return 0;
}
int divi(int a,int b)
{
    cout << a / b << "\n";
    return 0;
}
int mod(int a,int b)
{
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
int statement(int x,int y)
{
    if (x < y)
    {
        cout << "x is lessthan y";
    }
    else if (x <= y)
    {
        cout << "x is equal to y";
    }

    else
    {
        cout << "x is greater than y";
    }
    return 0;
}
int switchStatement(int day)
{
    switch (day)
    {
    case 1:
        cout << "monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "thursday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturday";
        break;
    case 7:
        cout << "sunday";
        break;
        return 0;
    }
    return 0;
}
int loop(int i)
{
    while (i < 10)
    {
        cout << i << "\n";
        i++;
    }
    return 0;
}
int doWhile(int i)
{
    do
    {
        cout << i << "\n";
        i++;
    } while (i <= 10);
    return 0;
}
int main(){
    sum(20,30);
    sub(20,30);
    multi(2,6);
    divi(20,2);
    mod(21,2);
    assignment(10);
    comparison(10,20);
    logical(10,20);
    name("mahammad");
    concat("adil","shaik","mahammad");
    append("adil","shaik","mahammad");
    stringnum("7565","2343");
    length("bhfbdhsgchsgdhcbh","character","my name is\"adil\"and i am from\\proddatur\\in \'kadapa'");
    statement(10,20);
    switchStatement(3);
    loop(0);
    doWhile(0);
    return 0;
}
