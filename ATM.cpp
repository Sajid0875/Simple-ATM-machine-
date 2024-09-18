#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int pin, confirm_pin, Balance, Deposit, Withdraw;
    bool istrue;
    bool is_greater;

    cout << "*ATM*" << endl;
    cout << "Enter your pin =";
    cin >> pin;

    cout << "Confirm your pin=";
    cin >> confirm_pin;
    istrue = (pin == confirm_pin);

    Balance = 0;
    cout << endl << "*DashBoard";
    cout << "1: Deposit Money" << endl;
    cout << "2: Withdraw Money" << endl;
    
    cout << endl << "Current Balance = " << Balance;
    cout << endl << "Deposit Amount =";
    cin >> Deposit;
    
    Balance = Balance + Deposit;
    cout << endl << "New Balance = " << Balance << endl;
    
    is_greater = (Balance > 0);
    cout << "Your balance is more than '0' (1/0 = yes/no)\t" << is_greater << endl;
    
    cout << "Withdraw Amount = ";
    cin >> Withdraw;
    
    Balance = Balance - Withdraw;
    cout << endl << "New balance = " << Balance << endl << endl;
    cout<<"********Thank you********";

    return 0;
    
}
