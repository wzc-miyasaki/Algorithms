#include <iostream>
#include "Lps.hpp"

using namespace std;

int main()
{   
    int maxL = -1;
    Lps test("");
    string s;
    while(true)  
    {
        cout << "enter: ";
        cin >> s;
        test.SetStr(s);
        cout << test.MaxLength() << endl;
    }  

    return 0;
}