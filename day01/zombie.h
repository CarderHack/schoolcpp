#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:

        std::string announce()
        {
            return "Brainz...";
        }

        Zombie(std::string name)
        {
            this->name = name;
            std::cout << "Konstruktor had load" << std::endl;
        }

        ~Zombie()
        {
            std::cout << "Zombie " << this->name << " was destroyed" << std::endl;
        }

        std::string stek()
        {
            return this->name + ": " + announce() + " stek";
        }
        
        std::string kucha()
        {
            return this->name + ": " + announce() + " kucha";
        }

};