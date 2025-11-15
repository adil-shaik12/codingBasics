#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    stack<string> cars;
    cars.push("toyota");
    cars.push("fortuner");
    cars.push("mahindra");
    cout << cars.top() << "\n"; // to access top element
    cars.top() = "tata";        // to change top element
    cout << cars.top() << "\n";
    cout << cars.size() << "\n";  // to check size of stack
    cout << cars.empty() << "\n"; // to check if stack is empty or not
    cars.pop();                   // to remove top element
    cout << cars.top() << "\n";
    return 0;
}