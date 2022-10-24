#include <iostream>
#include "Lps.hpp"

using namespace std;

class Kmp
{
public:
    const string& s;
    const string& txt;

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
        for(auto i : test.MaxLength())
        {
            cout << i << " ";
        }
        cout << endl;
    }  

    return 0;
}