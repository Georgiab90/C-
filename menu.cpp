// Creating menu screen with histogram, graph, high/lower numbers, median, addition, subtraction
// else if statements

#include <iostream>

using namespace std;
#include <vector>
int main() {
vector<int>values{5, 10};
int i{0};
char selection {};
string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
string encrypted_message{};
string password{};

//cin.ignore(numeric_limits<streamsize>::max(),'\n');

cout << "\n\n\n";
cout << "***** MENU *****" << endl;
cout << "\n ---------" << endl;
cout << "P. print numbers" << endl;
cout << "A. Add a number" << endl;
cout << "M. Display mean of the numbers" << endl;
cout << "S. Display smallest number" << endl;
    cout << "L. Display the largest number" << endl;
    cout << "H. Display Histogram" << endl;
    cout << "C. Clear the list of numbers" << endl;
    cout << "Q. Quit" << endl;
    cout << "\n-----------" << endl;
    cout << "\n\n\n";
    cin >> selection;
    
if (selection == 'P' || selection == 'p' || selection == 'A' || selection == 'a' || selection == 'm' || selection == 'M')
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
    
    if (selection == 'p' || selection == 'P')
        if (values.size() ==0)
            cout << "[] The list is empty" << endl;
        else {
            cout << "[";
           for (auto num: values)
                cout << num << " ";
                cout << "]" << endl;
                cout << "\n" << endl;
        }
 else if (selection == 'a' || selection == 'A') {
    int num_to_add{};
    cout << "Enter a number to add to the list : " << endl;
    cin >> num_to_add;
    values.push_back(num_to_add);
    cout << num_to_add << " Added " << endl;
    
} else if (selection == 'm' || selection == 'M'){
    if (values.size() ==0)
        cout << "unable to calculate mean"<< endl;
        else {
            int total{};
            for (auto num: values)
                total += num;
                cout << "The mean is: " << static_cast<double>(total)/values.size() << endl;
        }
} else if (selection == 's' || selection == 'S'){
    if (values.size()==0)
        cout << "Unable to determine the smallest" << endl;
        else {
            int smallest = values.at(0);
            for (auto num: values)
            if (num < smallest)
                smallest = num;
            cout << "The smallest number is : " << smallest << endl;
            
        }
} else if (selection == 'l' || selection == 'L') {
    if (values.size() ==0)
        cout << "Unable to determine largest" << endl;
    else {
        int largest = values.at(0);
        for (auto num: values)
            if (num > largest)
                largest = num;
                cout << "The largest number is : " << largest << endl;
            
    }
} 
else if (selection == 'H' || selection == 'h')
    for (auto val: values) {
        for (int i{1}; i<=val; ++i) {
            if (i % 5==0)
                cout << "*";
                else
                cout <<  "-";
        }
        cout << endl;

} 
else if (selection == 'C' || selection =='c') {
    values.clear();
    cout << "You have chosen to clear the list. " << endl;
}
else if (selection == 'Q' || selection == 'q'){
    cout << "You have selected Quit. Goodbye. " << endl;
} else {
    cout << "Unknown selection." << endl;
}
       
//        else if (selection == 'a' || selection == 'A')
//cout << "you chose A. Add a number" << endl;
//cin >> add_number; 
//values.push_back (add_number);
//cout << values.size() << endl;
////        
////    if (selection == 'm' || selection == 'M')
////            cout << num_average / values.size(); << endl;
////    
////else if (selection == 's' || selection == 'S')
////        cout << "the smallest number is 1" << endl;
////else if (selection == 'l' || selection == 'L')
////        cout << "the largest number is 5" << endl;
////    else 
////        cout << "not a valid selection" << endl;
////} while (selection != 'q' && selection != 'Q');
while (selection != 'q' && selection != 'Q');
cout << endl;
return 0;
}
