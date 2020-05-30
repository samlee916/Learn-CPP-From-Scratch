#include <iostream>

using namespace std;

int main () {

    int foo [] = {16, 2, 56,234, 9876};
    int i, result;

    for (i=0; i<5; i++) {

        result += foo[i];

    }

    // an array
    string cars[4] = {"Volvo" , "Ford", "Mazda", "Toyota"};

    string firstName = "Sam";
    string lastName = "Lee";
    string fullName = firstName + " " + lastName;

    //prints the sum of the array foo
    cout << result << endl;
    //prints Volvo
    cout << cars[0] << endl;
    //prints out Sam Lee
    cout << fullName << endl;

    return 0;

}
