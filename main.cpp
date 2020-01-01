#include <iostream>
#include "Messenger.h"
using namespace std;

int main()
{

    Messenger m1, m2;
    string message;
    char selection;
    do{
    cout << "Enter the message: ";
    getline(cin, message);
    m1.setMessage(message);
    cout << "\nMENU\n" <<"1. Caesar Cipher\n" << "2. Atbash Cipher\n\n";
    cout << "Enter the number of the encryption method that you want: ";
    cin >> selection;
    cin.ignore();
    if(selection == '1'){
        int shift;
        cout << "Enter the shift: ";
        cin >> shift;
        cin.ignore();
        m1.sendMessage(shift);
        m2.receiveMessageCaesar(shift);
    }
    else if(selection == '2'){
        m1.sendMessage();
        m2.receiveMessageAtbash();
    }
    else{
        cout << "You select the wrong option\n" << "Try again\n\n";
    }
    cout << "The receiver messenger receive " << m2.getMessage() << "\n\n";
    cout << "If you want to exit press number 1, otherwise press any other character: ";
    cin >> selection;
    cin.ignore();
    cout << "\n\n";
    }while(!(selection == '1'));
    cout << "\n\nThank you for using the program";
    return 0;
}
