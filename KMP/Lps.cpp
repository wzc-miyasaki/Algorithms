#include "Lps.hpp"
using namespace std;

Lps::Lps(const string& s) : _s(s)
    {}

    
vector<int>
Lps::MaxLength()
    {
        vector<int> res;
        int size = 0;
        while(size < (int)_s.length())
        {
            res.push_back(FindMax(size));
            ++size;
        }

        return res;
    }

void 
Lps::SetStr(const string& s) { _s = s; }

Lps::Lps(){};

int 
Lps:: FindMax(const int& sz)
{
    int maxL=sz;
    int l;
    int r;
    int n;
    while(maxL > 0)
    {
        l = 0;
        r = sz-maxL + 1;    // start index of suffix
        for(n=0; n<maxL; n++)
        {
            if(_s[l] == _s[r])
            {
                ++ l; 
                ++ r;
            } else 
                break;
        }

        if(n == maxL)
            break;
        else
            -- maxL;
    }

    return maxL;
}   