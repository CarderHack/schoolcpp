#include <iostream>
#include "zombie.h"
using namespace std;

int main()
{
    std::string* kucha = NULL;
    string stek;

    string name;
    getline(cin, name);

    Zombie a(name);
    stek = a.stek();
    kucha = new string[1];
    kucha[0] = a.kucha();
    
    cout << stek << endl;
    cout << *kucha << endl;

    



    delete [] kucha;
    return 0;
}
