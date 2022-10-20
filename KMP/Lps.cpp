#include "Lps.hpp"
using namespace std;

/**
 *  Find the longest Proper Prefix that is also a suffix
 *  (Required by KMP algorithm)
*/

Lps::Lps(const string& s) : _s(s)
    {}

    
int
Lps::MaxLength()
    {
        if(_s.empty())
            return 0;

        int maxL = 0;
        int size = 0;
        while(size < _s.length())
        {
            bool IsProper = IsProperWithSize(size);
            if(IsProper)
                maxL = max(size, maxL);
            ++size;
        }

        return maxL;
    }

void 
Lps::SetStr(const string& s) { _s = s; }

Lps::Lps(){};

bool 
Lps:: IsProperWithSize(const int& sz)
{
    int l = 0;
    int r = _s.length()-sz;
    bool res = true;
    while(l < sz)
    {
        if(_s[l] == _s[r])
        {
            ++ l;
            ++ r;
        } 
        
        else
        {
            res = false;
            break;
        }
    }

    return res;
}   



// int main()
// {   
//     int maxL = -1;
//     Lps test("");
//     string s;
//     while(true)  
//     {
//         cout << "enter: ";
//         cin >> s;
//         test.SetStr(s);
//         cout << test.MaxLength() << endl;
//     }  

//     return 0;
// }