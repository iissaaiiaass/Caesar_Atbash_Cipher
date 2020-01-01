#ifndef CAESARCIPHER_H
#define CAESARCIPHER_H
#include "Cipher.h"
#include <cmath>
#include <iostream>

using namespace std;

class CaesarCipher: public Cipher
{
    public:
        //Constructors
        CaesarCipher(int shift = 0);
        //Destroyer
        virtual ~CaesarCipher();
        //Get a character position in the array
        int getAlphabetPosition(char letter)const;
        // Encrypt the user message
        string encrypt(string message);
        // Descrypt the user message
        string descrypt(string cipher);
        //Setter function
        void setShift(int shift);
        //Getter functions
        int getShift()const;



    protected:

    private:
        int shift;
};

#endif // CAESARCIPHER_H
