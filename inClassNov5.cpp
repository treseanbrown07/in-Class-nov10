#include <iostream>
using namespace std;
#include "stringWrap.h"

int main() {

    string name = "name";
    stringWrap wrap(name);

    auto letterToFreq = wrap.getLetterFreq();

    //stringWrap string;
    //stringWrap.encrypt() const
    /*
     *
     * rand() % 26
     * int minRandNum = 1;
     * int maxRandNum = 26;
     *
     * uniform_int_distribution<int> distribution(minRandNum, maxRandNum);
     *
     */

    /*for(int i = 0; i < mString.length(); ++i)
     *
     * mString[i] = mString[i] + randomKey;
     *
     * char encryptedChar = myString[i] + randomKey;
     * encryptedText.push_back()
     */

    //string cipherText = stringWrapper.encrypt();

    /* encryption keys are pieces of data used by algorithms
     * that transform normal text into cipherText
     *
     * could be used for making passwords maybe
     */
}