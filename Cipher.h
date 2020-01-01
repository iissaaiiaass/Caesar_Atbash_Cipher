#ifndef CIPHER_H
#define CIPHER_H
#include <string>

using namespace std;

class Cipher
{
    public:
        //Constructors
        Cipher(string alphabet = "abcdefghijklmnopqrstuvwxyz");
        //Destroyer
        virtual ~Cipher();
        // Encrypt the user message
        virtual string encrypt(string message)=0;
        // Descrypt the user message
        virtual string descrypt(string cipher)=0;
        //Setter function
        void setAlphabet(string alphabet);
        //Getter function
        string getAlphabet()const;


    protected:
        string alphabet;

    private:
};

#endif // CIPHER_H
