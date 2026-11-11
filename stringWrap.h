#include <iostream>
#include <map>
using namespace std;


class stringWrap {

public:
    stringWrap();
    int SCALING_FACTOR = 2;

    stringWrap(const string& filename);
    string encrypt();
    map<char,int> getLetterFreq() const;

};