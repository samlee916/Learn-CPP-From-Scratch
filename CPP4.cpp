#include <iostream>

using namespace std;

//if else statements
int main () {

    int time = 22;
    if (time < 10 ) {
        cout << "Hello" << endl;
    } else if (time < 20) {
        cout << "World" << endl;
    } else {
        //since time = 22, this statements get printed
        cout << "Hello World" << endl;
    }

    return 0;

}
