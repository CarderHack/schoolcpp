#include <iostream>
#include <vector>
#include <string>
#include "Contact.hpp"

using namespace std;

int main()
{   
    string first;
    string search = "search";
    string add = "add";
    string exit = "exit";

    string name_of_contact;
    string nickname;
    string last_name_of_contact;
    int index_of_contact;

    
    do
    {   
        cin >> first;

        if (first == add) 
        {
          Contact adding_new;

        cout << "Введите имя: ";
        cin >> name_of_contact;
        cout << "Pull last name: ";
        cin >> last_name_of_contact;
        cout << "Pull the nickname: ";
        cin >> nickname;
        cout << "Pull the number: ";
        cin >> index_of_contact;

        adding_new.set_first_name(name_of_contact);
        adding_new.set_last_name(last_name_of_contact);
        adding_new.set_nickname(nickname);
        adding_new.set_number(index_of_contact);    

        cout << "Новый контакт добавлен " << adding_new.get_first_name() << " " 
        << adding_new.get_last_name() << " " << adding_new.get_nickname() << " " 
        << adding_new.get_number() << endl;  
        } 


    } while (first != exit);


}

