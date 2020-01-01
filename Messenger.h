#ifndef MESSENGER_H
#define MESSENGER_H
#include <iostream>
#include <string>
#include "CaesarCipher.h"
#include "AtbashCipher.h"
#include <fstream>

using namespace std;

class Messenger
{
    public:
        //Constructor
        Messenger(string encryptionMethod = "");
        //Destroyer
        virtual ~Messenger();
        //Setter functions
        void setMessage(string message);
        void setEncryptionMethod(string encryptionMethod);
        //Getter functions
        string getMessage()const;
        string getEncryptionMethod()const;
        //Send a message using caesar cipher
        void sendMessage(int shift);
        //Send a message using atbash cipher
        void sendMessage();
        //Receive a message using caesar cipher
        void receiveMessageCaesar(int shift);
        //Receive a message using caesar cipher
        void receiveMessageAtbash();


    protected:

    private:
        string message;
        string encryptionMethod;
        CaesarCipher caesar;
        AtbashCipher atbash;
};

#endif // MESSENGER_H
