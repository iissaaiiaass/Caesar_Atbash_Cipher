#include "Cipher.h"

//Constructor
Cipher::Cipher(string alphabet)
{
    this->setAlphabet(alphabet);
}
//Destroyer
Cipher::~Cipher(){}
//Setter function
void Cipher::setAlphabet(string alphabet){
    this->alphabet = alphabet;
}
//Getter function
string Cipher::getAlphabet()const{
    return this->alphabet;
}
