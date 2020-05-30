#include <iostream>
#include <cmath>

using namespace std;

//functions in C++

class Student {

public:
    int id;
    string name;

};

int main () {

    Student s1;
    s1.id = 200;
    s1.name = "Sam Lee";
    cout << s1.id << endl;
    cout << s1.name << endl;

    //square root function example
    double number, squareRoot;
    cout << "Enter a number: ";
    cin >> number;
    squareRoot = sqrt(number);
    cout << "Square root of " << number << " = " << squareRoot << endl;

    return 0;

}
