#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
    set<string, greater<string>> cars = {"toyota", "fortuner", "mahindra", "tata", "toyota"};
    cars.insert("suzuki");
    cars.insert("defender");
    cars.erase("tata");
    for (string car : cars)
    {
        cout << car << "\n";
    }
    cout << cars.size() << "\n";
    cout << cars.empty() << "\n";
    return 0;
}
