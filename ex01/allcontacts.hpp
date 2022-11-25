#include <string>
#include <iostream>

int schet = 0;

class AllContacts
{
    private:
        std::string arr[8];
        
    public:
        void set_info(std::string name, std::string surname,std::string number, int count) 
        {
            arr[count] = name + " " + surname + " " + number;
            schet++;
        }

        void get_info() 
        {
            for(int i = 0; i < schet; i++)
            {
                std::cout << arr[i] << std::endl;  
            }
            return;
        }
};