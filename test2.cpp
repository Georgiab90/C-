// Encrypting, string length

#include <iostream>
//#include <iomanip>
#include <string>
using namespace std;

int main() {

string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
string encrypted_message{};
string password{};

cout << "Enter a password: ";
cin.ignore(); 
getline(cin, password);

cout << "Encrypting message..." << endl;
for (char letter: password) {
     size_t position = alphabet.find(letter);
     if (position != string::npos) {
         char new_char { key.at(position)};
         encrypted_message += new_char;
    } else {
        encrypted_message += letter;
    }
    }
cout << "\nEncrypted message: " << encrypted_message << endl;
//string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
//string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
//
//char secretmessage{};
//    
//cout << "Enter a secret message :" << endl;
//cin >> secretmessage;

//strlen(secretmessage)
//

//for(size_t i{0}; i < strlen(secretmessage); swap()) {
//    if(isalpha(full_name[i]))
//        full_name[i] = toupper(full_name[i]);
//for (size_t i {0}; i < secretmessage.length(); swap(alphabet, key))
//cout << secretmessage << end;
//    
    

    
    
    
    
//string s0;
//string s1 {"Apple"};
//string s2 {"Banana"};
//string s3 {"Kiwi"};
//string s4 {"apple"};
//string s5 {s1};
//string s6 {s1, 0, 3};
//string s7 {10, 'X'};



//for (size_t i {0}; i < s1.length(); ++i)
//    cout << s1.at(i);

    
    
    
    
//    char first_name[20]{};
//    char last_name[20]{};
//    char full_name[50]{};
//    char temp[50]{};
    
    //cout << first_name;
//    cout << "Plese enter your first name";
//    cin >> first_name;
//    
//    cout << "please enter last name:";
//    cin >> last_name;
//    cout << "=================" << endl;
//    
//    cout << "Hello" << first_name << "your name has" << strlen(first_name) << "characters" << endl;
//    cout << "and your last name" << last_name << "has" << strlen(last_name) << "Characters" << endl;
//    
//    strcpy(full_name, first_name);
//    strcat(full_name, " ");
//    strcat(full_name, last_name);
//    cout << "Your full name is" << full_name << endl; 
//    
//cout << "Enter your full name";
//cin.getline(full_name, 50);
//cout << "your full name is" << full_name << endl;
//
//cout << "---------------------" << endl;
//strcpy(temp, full_name);
//if(strcmp(temp, full_name) ==0)
//    cout << temp << "and " << full_name << "arethe same" << endl;
//else
//    cout << temp << "and " << full_name << "are diff" << endl;
//
//for(size_t i{0}; i < strlen(full_name); ++i) {
//    if(isalpha(full_name[i]))
//        full_name[i] = toupper(full_name[i]);
//        
//        cout << "your full name is " << full_name << endl;()
//}
    
    

return 0;
}
