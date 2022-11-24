#include <iostream>
#include <string>

class Contact 
{
    private:
        std::string name;
        std::string surname;
        std::string number;

    public:
        void set_name(std::string name_class){name = name_class;}
        void set_surname(std::string surname_class){surname = surname_class;}
        void set_number(std::string number_class){number = number_class;}

        std::string get_name() {return name;}
        std::string get_surname() {return surname;}
        std::string get_number() {return number;}



};