#include <iostream>
#include <string>
#include "stands.hpp"
#include "allcontacts.hpp"

using namespace std;

int main(){


    string command;
    string name;
    string surname;
    string number;

    int count = 0;
    
    Contact a; AllContacts arr;
    do
    {   
        
        cout << "Take commands: add, search, exit" << endl;
        cin >> command;

        if (command == "add") {
            cout << "Name: "; cin >> name;
            cout << "Second Name: "; cin >> surname;
            cout << "Number: "; cin >> number;

            a.set_name(name); a.set_surname(surname); a.set_number(number);
            arr.set_info(a.get_name(), a.get_surname(), a.get_number(), count);

            count++;
        } else if(command == "search") {

            arr.get_info();

        } else
            cout << "error command"<< endl;

    }while(command != "exit");

    return 0;
}