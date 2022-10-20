#include <iostream>
#include "Lps.hpp"

using namespace std;

class Kmp
{
public:
    const string& s;
    const string& txt;
    int lps[];

};



int main()
{   
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