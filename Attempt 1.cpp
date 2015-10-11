#include <iostream>

using namespace std;

int main(void)
{
    string pass;
    cout << "Enter Password: ";
    getline (cin, pass);
    
    if(pass == "password")
    {
            string granted;
            cout << "Access Granted... ";
            getline (cin, granted);
    }
    if(pass != "password")
    {
            string denied;
            cout << "Access Denied... ";
            getline (cin, denied);
    }

}    


