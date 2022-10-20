#include "Lps.hpp"
using namespace std;

Lps::Lps(const string& s) : _s(s)
    {}

    
int
Lps::MaxLength()
    {
        if(_s.empty())
            return 0;

        int maxL = 0;
        int size = 0;
        while(size < (int)_s.length())
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