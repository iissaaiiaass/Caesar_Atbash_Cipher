#include "Messenger.h"

//Constructors
Messenger::Messenger(string encryptionMethod)
{
    this->encryptionMethod = encryptionMethod;
    this->message = "";
}
//Destroyer
Messenger::~Messenger(){}
//Setter functions
void Messenger::setMessage(string message){
    this->message = message;
}
void Messenger::setEncryptionMethod(string encryptionMethod){
    this->encryptionMethod = encryptionMethod;
}
//Getter functions
string Messenger::getMessage()const{
    return this->message;
}
string Messenger::getEncryptionMethod()const{
    return this->encryptionMethod;
}
//Send a message using caesar cipher
void Messenger::sendMessage(int shift){
    string message;
    this->caesar.setShift(shift);
    message = this->caesar.encrypt(this->message);
    ofstream ofsFile;
    ofsFile.open("message.txt");
    if(ofsFile.fail())
        cout << "The file could not open\n";
    else
        ofsFile << message;
    ofsFile.close();
}
 //Send a message using atbash cipher
void Messenger::sendMessage(){
    string message;
    message = this->atbash.encrypt(this->message);
    ofstream ofsFile;
    ofsFile.open("message.txt");
    if(ofsFile.fail())
        cout << "The file could not open\n";
    else
        ofsFile << message;
    ofsFile.close();
}
//Receive a message using caesar cipher
void Messenger::receiveMessageCaesar(int shift){
    ifstream ifsFile;
    string message;
    ifsFile.open("message.txt");
    if(ifsFile.fail())
        cout << "The file could not open\n";
    else
        ifsFile >> message;
    this->caesar.setShift(shift);
    this->message = this->caesar.descrypt(message);
    ifsFile.close();
}
//Receive a message using caesar cipher
void Messenger::receiveMessageAtbash(){
    ifstream ifsFile;
    string message;
    ifsFile.open("message.txt");
    if(ifsFile.fail())
        cout << "The file could not open\n";
    else{
        ifsFile >> message;
    }
    this->message = this->atbash.descrypt(message);
    ifsFile.close();
}

