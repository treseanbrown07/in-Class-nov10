#include <iostream>

#include "stringWrap.h"
#include "inClassNov5.cpp"
using namespace std;

// /*int main() {
//  *
//  *
//  *
// }
// */

    string filename = "";
// int SCALING_FACTOR = 2;

/* you can generate a sort of bar graph by converting the number of
 * occurences into something visual
 *
 */
/* void stringWrap:: printHistogram(const map<char,int> &lettersToFreq) {
    //printing histogram
    for (const auto& currentPair : letterFreqDistro) {

        int scaledNumofOccurences = currentPair.second/SCALING_FACTOR;
    // std::string(count, character) creates a string repeating that character

        cout << currentPair.first << ":" << " appears:" << std::string(scaledNumofOccurences, '*') << std::endl;
    }
}*/

map<char, int> stringWrap::getLetterFreq() const
{

}