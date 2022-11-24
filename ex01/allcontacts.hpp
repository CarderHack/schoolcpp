#include <string>
#include <iostream>

class AllContacts
{
    private:
        std::string arr[1];

    public:
        void set_info(std::string name, std::string surname,std::string number) {arr[0] = name + " " + surname + " " + number;}

        std::string get_info() {return arr[0];}

};