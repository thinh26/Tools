

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";
static int size = sizeof(alphanum) - 1;

int main()
{
    //password length
    int length;
     cout <<"Enter how many character you want: ";
    
cin	>> length;
    srand(long(0));
    for (int i = 0; i < length; i++)
    {
        cout << alphanum[rand() % ::size];
    }
    return 0;
}
