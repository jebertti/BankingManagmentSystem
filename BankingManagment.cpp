// BankingManagment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class MemberAccounts
{
public:

private:
    char firstName;
    char lastName;
    char emailAddress;
    char streetAddress;
    int phoneNumber;
    int SSN;
    int balance;
};


// Needs: First and last name. Phone number. Email address. Street address. SSN. 


int main()
{
    cout << "===========================" << endl;
    cout << "Welcome to the Ibrahim Bank" << endl;
    cout << "===========================" << endl << endl;
    cout << "1. Create an account" << endl;
    cout << "2. Withdraw money" << endl;
    cout << "3. Deposit money" << endl;
    cout << "4. Edit account" << endl;
    cout << "5. Delete account" << endl;
    cout << "6. Close application" << endl << endl;
    cout << "Select your option (1-6). Then press enter." << endl;

    int numberOption;
    cin >> numberOption;

    if (numberOption == 1) {
        cout << "You chose option: 1" << endl;
    }

    else if (numberOption == 2) {
        cout << "You chose option: 2" << endl;
    }

    else if (numberOption == 3) {
        cout << "You chose option: 3" << endl;
    }

    else if (numberOption == 4) {
        cout << "You chose option: 4" << endl;
    }

    else if (numberOption == 5) {
        cout << "You chose option: 5" << endl;
    }

    else if (numberOption == 6) {
        exit(1);
    }
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
