#include "CaesarCipher.h"
//Constructors
CaesarCipher::CaesarCipher(int shift)
{
    this->shift = shift;
}
//Destroyer
CaesarCipher::~CaesarCipher(){}
//Get a character position in the array
int CaesarCipher::getAlphabetPosition(char letter)const{
    int position = -1;
    for(unsigned int i=0; i < Cipher::alphabet.length(); i++)
        if(Cipher::alphabet[i] == letter)
            position = i;
    return position;
}
 // Encrypt the user message
string CaesarCipher::encrypt(string message){
    string ciphertext = "";
    int alphabetPosition;
    int encryptedPosition;
    for(unsigned int i=0; i < message.length(); i++){
        alphabetPosition = this->getAlphabetPosition(message[i]);
        encryptedPosition = ((alphabetPosition + this->shift) % 26);
        ciphertext += Cipher::alphabet[encryptedPosition];
    }
    return ciphertext;
}
// Descrypt the user message
string CaesarCipher::descrypt(string cipher){
    string message = "";
    int alphabetPosition;
    int descryptedPosition;
    for(unsigned int i=0; i < cipher.length(); i++){
        alphabetPosition = this->getAlphabetPosition(cipher[i]);
        descryptedPosition = (int)(fabs((alphabetPosition - this->shift% 26)));
        message += Cipher::alphabet[descryptedPosition];
    }
    return message;
}
//Setter function
void CaesarCipher::setShift(int shift){
    this->shift = shift;
}
//Getter function
int CaesarCipher::getShift()const{
    return this->shift;
}
