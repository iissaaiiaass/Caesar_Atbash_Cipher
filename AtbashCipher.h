#ifndef ATBASHCIPHER_H
#define ATBASHCIPHER_H
#include "Cipher.h"
#include <string>

using namespace std;

class AtbashCipher: public Cipher
{
    public:
        //Constructors
        AtbashCipher();
        //Destroyer
        virtual ~AtbashCipher();
        // Return the letter position in the array
        int getMidAlphabetPosition(char letter)const;
        // Encrypt the user message
        string encrypt(string message);
        // Descrypt the user message
        string descrypt(string cipher);
        //Setter function
        void setMidAlphabet(string midAlphabet);
        //Getter function
        string getMidAlphabet()const;

    protected:

    private:
        string midAlphabet;
};

#endif // ATBASHCIPHER_H
