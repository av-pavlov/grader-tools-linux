#include "testlib.h"
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string rtrim(string s){
    int p;
    for (p = s.size()-1; s.c_str()[p]==' '; p--){}
    return string(s, 0, p+1);
}

int main(int argc, char * argv[])
{
    setName("compare files as sequence of lines");
    registerTestlibCmd(argc, argv);

    std::string strAnswer;

    int n = 0;
    while (!ans.eof()) 
    {
        std::string j = ans.readString();
	j = rtrim(j);

        if (j == "" && ans.eof())
          break;

        strAnswer = j;
        std::string p = ouf.readString();

        n++;

        if (j != p)
            quitf(_wa, "%d%s lines differ - expected: '%s', found: '%s'", n, englishEnding(n).c_str(), compress(j).c_str(), compress(p).c_str());
    }
    
    if (n == 1)
        quitf(_ok, "single line: '%s'", compress(strAnswer).c_str());
    
    quitf(_ok, "%d lines", n);
}
