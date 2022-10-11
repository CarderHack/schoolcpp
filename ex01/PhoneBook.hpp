#include <string>
#include <iostream>
#include <vector>


class Search{

    private:
        std::string list[1];
        int n = 0;
        
    public:
        void set_new_contact(std::string info) {

            n++;

        }  

        int get_all_info() {

           std::cout << n;
            
        }
};


