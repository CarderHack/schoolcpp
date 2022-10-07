#include <string>
#include <iostream>
#include <vector>


class Search{

    private:
        
        std::vector <std::string> list;
        int n;



    public:

        void set_new_contact(std::string info) {
            
            n = 0;
            if (n < 8) {
                list.push_back(info);
                n++;
            } else {
                list.pop_back();
                list.push_back(info);
            }
            
        }  

        void get_all_info() {
            for (int i = 0; i < 8; i++) {
                std::cout << list[i];
            }
        } 


};