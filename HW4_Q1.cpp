// Homework 4
// Question # 1
//


#include <iostream>
using namespace std;


int main() {

    int user_num = 0;
    int even_n = 2;
    cout << "Please enter a positive integer: ";
    cin >> user_num;

// Section a: use a while loop

    cout << "Section a: Using a while loop" << endl;
    while (even_n <= (user_num * 2)) {
        cout << even_n << endl;
        even_n = even_n + 2;
    }

// Section b: use a for loop

    cout << "Section b: Using a for loop" << endl;
    for (even_n = 2; even_n <= (user_num * 2); even_n = even_n + 2) {
        cout << even_n << endl;
    }


    return 0;
}
