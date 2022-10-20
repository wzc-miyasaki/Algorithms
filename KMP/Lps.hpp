#ifndef _LPS_HPP
#define _LPS_HPP

#include <string>

/**
 *  Find the longest Proper Prefix that is also a suffix
 *  (Required by KMP algorithm)
*/
class Lps
{
    public:
        Lps(const std::string& s);
        int MaxLength();    // a proper prefix cannot be string _s itself
        void SetStr(const std::string& s);
    private:
        std::string _s;
        Lps();
        bool IsProperWithSize(const int& sz);    
};


#endif