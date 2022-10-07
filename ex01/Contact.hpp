#include <string>

class Contact
{
    private:
    std::string first_name;
    std::string last_name;
    std::string nickname;

    std::string number;

    public:

    void set_first_name(std::string name_of_contact) {
        first_name = name_of_contact;
    }

    std::string get_first_name() {
        return first_name;
    }

    void set_last_name(std::string last_name_of_contact) {
        last_name = last_name_of_contact;
    }

    std::string get_last_name() {
        return last_name;
    }

    void set_nickname(std::string nickname_of_contact) {
        nickname = nickname_of_contact;
    }

    std::string get_nickname() {
        return nickname;
    }

    void set_number(std::string index) {
        number = index;
    }

    std::string get_number() {
        return number;
    }


};
