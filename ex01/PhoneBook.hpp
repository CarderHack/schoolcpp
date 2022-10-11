#include <string>
#include <iostream>
#include <vector>


class Search{

    private:
        std::string list[1];
        
    public:
        void set_new_contact(std::string info) {

           list[0] = info;
           
        }  

        std::string get_all_info() {

            for (int i = 0; i < 1; i++){ 
           std::cout << list[i] << std::endl;
            }
		   return (list[0]);
        }
};


