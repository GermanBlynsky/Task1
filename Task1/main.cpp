#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>


using namespace std;
int main() {

    std::string filename = "name.txt";

    std::string symbols = "HelloWorld!";

    ofstream outputFile(filename); 

    if (outputFile.is_open()) {
        ostream_iterator<char> output_iterator(outputFile, " ");
        copy(symbols.begin(), symbols.end(), output_iterator);
        outputFile.close();
        cerr << "The character set was successfully recorded" << endl;
    }
    else {
        cerr << "Couldn't open the file for writing" << endl;
        return 1;
    }
}