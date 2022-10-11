#include <string>
#include <iostream>
#include <vector>


class Search{

    private:
        std::string list[1];
        int n = 0;
        
    public:
        void set_new_contact(std::string info) {

           list[0] = info;
           n++;
           
        }  

        std::string get_all_info() {

            for (int i = 0; i < n; i++){ 
           std::cout << list[i] << std::endl;
            }
           
            
        }
};


