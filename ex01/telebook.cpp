#include <iostream>
#include <vector>
#include <string>

int main()
{
    setlocale(LC_ALL, "");
    std::vector<std::string> students;
    std::string buffer = "";

    std::cout << "Вводите фамилии студентов. "
         << "По окончание фамилий введите пустую строку" << std::endl;

    do {
        std::getline(std::cin, buffer);
        if(buffer.size() > 0) {
            students.push_back(buffer);
        }
    } while (buffer != "");


    unsigned int vector_size = students.size();
    std::cout << "Ваш вектор" << std::endl; 
    for (int i = 0; i < vector_size; i++) {
        std::cout << students[i] << std::endl;
    }
    
    return 0;
}

