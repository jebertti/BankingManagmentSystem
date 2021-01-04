#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

class MemberAccounts{

private:
    string firstName;
    string lastName;
    string emailAddress;
    string streetAddress;
    int acno;
    int phoneNumber;
    int SSN;
    int balance;

public:
    void createAccount();
    void withdraw();
    void deposit();
    void closeApp();
};

void MemberAccounts::createAccount() 
{
    ;
}

void MemberAccounts::withdraw() 
{
    ;
}

void MemberAccounts::deposit() 
{
    ;
}

void MemberAccounts::closeApp()
{
    ;
}

/******************************************************************************************************************
*******************************************************************************************************************/
void displayAccount() //Displays all account information
{
    ;
}


int main()
{
    cout << "===========================" << endl;
    cout << "Welcome to the Ibrahim Bank" << endl;
    cout << "===========================" << endl << endl;
    cout << "1. Create an account" << endl;
    cout << "2. Withdraw money" << endl;
    cout << "3. Deposit money" << endl;
    cout << "4. Close application" << endl << endl;
    cout << "Select your option <1-6>. Then press enter: ";

    char number;
    cin >> number;

    switch (number)
    {
    case '1':
        cout << "You selected option: 1" << endl;
        break;

    case '2':
        cout << "You selected option: 2" << endl;
        break;

    case '3':
        cout << "You selected option: 3" << endl;
        break;

    case '4': 
        cout << "You selected option: 4" << endl;
        break;

    default:
        break;
    }

    return 0;
}
