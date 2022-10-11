#include <iostream>
#include <vector>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"


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
    string index_of_contact;


    
    do
    {   
        cin >> first;
        Search all_contacts;

        if (first == add) 
        { 
        
        Contact adding_new;
        
        

        cout << "Pull name: ";
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

        cout << "The new contact has been created " << adding_new.get_first_name() << " " 
        << adding_new.get_last_name() << " " << adding_new.get_nickname() << " " 
        << adding_new.get_number() << endl;

        string string_of_contact = name_of_contact + " " + last_name_of_contact + " " + nickname + " " + index_of_contact;


        all_contacts.set_new_contact(string_of_contact);

        } else if (first == "search") {

		  all_contacts.set_new_contact("ну ты долбаеб");
          all_contacts.get_all_info();
         
        }


    } while (first != exit);

    return 0;

}

