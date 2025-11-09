#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    map<string, int> cars = {{"fortuner", 3}, {"scorpio", 4}, {"defender", 2}};
    cout << cars["scorpio"] << "\n";
    cars["defender"] = 1;
    cout << cars["defender"] << "\n";
    cars["volvo"] = 2;
    cars["audi"] = 1;
    cars.erase("audi");
    for (auto car : cars)
    {
        cout << car.first << ":" << car.second << "\n";
    }
    cout << cars.size() << "\n";
    cout << cars.empty() << "\n";
    return 0;
}
