#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main()
{
    deque<string> cars = {"toyota", "fortuner", "mahindra", "tata"};
    cars.push_front("suzuki");
    cars.push_back("defender");
    cout << cars.size() << "\n";
    cout << cars.empty() << "\n";
    cars.pop_front();
    cars.pop_back();
    for (string car : cars)
    {
        cout << car << "\n";
    }
    cout << cars[1] << "\n";
    cout << cars[2] << "\n";
    cout << cars.front() << "\n";
    cout << cars.back() << "\n";
    cars[1] = "honda";
    cars[2] = "safari";
    cout << cars[1] << "\n";
    cout << cars[2] << "\n";
    return 0;
}
