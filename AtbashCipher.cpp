#include "AtbashCipher.h"
#include <iostream>
//Constructors
AtbashCipher::AtbashCipher()
{
    Cipher::alphabet = "abcdefghijklm";
    this->midAlphabet = "zyxwvutsrqpon";
}
//Destroyer
AtbashCipher::~AtbashCipher(){}

int AtbashCipher::getMidAlphabetPosition(char letter)const{
    int position = -1;
    for(unsigned int i=0; i < Cipher::alphabet.length(); i++)
        if(Cipher::alphabet[i] == letter || this->midAlphabet[i] == letter)
            position = i;
    return position;
}

// Encrypt the user message
string AtbashCipher::encrypt(string message){
    string ciphertext;
    for(unsigned int i=0; i<message.length(); i++)
        if(message[i]==Cipher::alphabet[this->getMidAlphabetPosition(message[i])])
            ciphertext += this->midAlphabet[this->getMidAlphabetPosition(message[i])];
        else
           ciphertext += Cipher::alphabet[this->getMidAlphabetPosition(message[i])];
    return ciphertext;
}
// Descrypt the user message
string AtbashCipher::descrypt(string cipher){
    string message = this->encrypt(cipher);
    return message;
}
//Setter function
void AtbashCipher::setMidAlphabet(string midAlphabet){
    this->midAlphabet = midAlphabet;
}
//Getter function
string AtbashCipher::getMidAlphabet()const{
    return this->midAlphabet;
}
