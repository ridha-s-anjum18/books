#include <iostream>
#include <string>
using namespace std;

int main() {
    int book = 7;
    int fine = 1;
    int days;
    string choice;

    while (1) {
        cout << "Menu" << endl;
        cout << "1. Borrow" << endl;
        cout << "2. Return" << endl;
        cout << "3. Quit" << endl;
        cout << "Select One: " << endl;
        cin >> choice;

        if (choice == "1") {
            if (book > 0) {
                book--;
                cout << "Book Borrowed" << endl;
            }
            else {
                cout << "No book available" << endl;
            }
        }
        else if (choice == "2") {
            if (book < 7) {
                book++;
                cout << "Enter the number of Days: ";
                cin >> days;
                fine += days;
                cout << "Book Returned" << endl;
            }
            else {
                cout << "Can't Return, Library is full" << endl;
            }
        }
        else if (choice == "3" || choice == "Q") {
            cout << "Total fine: $" << fine << endl;
            cout << "Thank you for using the library" << endl;
            break;
        }
        else {
            cout << "Invalid Choice" << endl;
        }
    }
    return 0;
}
