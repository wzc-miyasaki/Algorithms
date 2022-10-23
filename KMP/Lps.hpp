#ifndef _LPS_HPP
#define _LPS_HPP

#include <string>
#include <vector>

/**
 *  Find the longest Proper Prefix that is also a suffix
 *  (Required by KMP algorithm)
*/
class Lps
{
    public:
        Lps(const std::string& s);
        std::vector<int> MaxLength();    // a proper prefix cannot be string _s itself
        void SetStr(const std::string& s);
    private:
        std::string _s;
        Lps();
        int FindMax(const int& sz);    
};


#endif 