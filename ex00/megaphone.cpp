#include <iostream>
#include <cstring>


using namespace std;

int main()
{

    string x;
    cin >> x; 

    if (x.size() != 0)
    {
    transform(x.begin(), x.end(), x.begin(), ::toupper);
    cout << x;
    } else 
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
}