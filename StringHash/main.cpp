#include <sys/types.h>
#include <iostream>
#include <algorithm>
using namespace std;

size_t hashIndex(string str)
{
    size_t h = 0;
    sort(str.begin(), str.end());
    for(size_t i=1; i<=str.length(); i++)
    {
        h += i * hash<char>{} (str[i-1]);
    }

    return h;
}


int main()
{
    cout << hashIndex("duh") << endl;
    cout << hashIndex("ill") << endl;

    cout << hashIndex("pro") << endl;
    cout << hashIndex("pit") << endl;
    return 0;
}

