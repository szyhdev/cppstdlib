#include <string>    // for strings
#include <iostream>  // for I/O
#include <fstream>   // for file I/O
#include <iomanip>   // for setw()
#include <cstdlib>   // for exit()
using namespace std;

const char *file_name = "charset.out";

// forward declarations
void writeCharsetToFile(const string &filename);
void outputFile(const string &filename);

int main()
{
    writeCharsetToFile(file_name);
    outputFile(file_name);
}

void writeCharsetToFile(const string &filename)
{
    // open output file
    ofstream file(filename.c_str());

    // file opened?
    if (!file) {
        // NO, abort program
        cerr << "can't open output file \"" << filename << "\"" << endl;
        exit(EXIT_FAILURE);
    }

    // write character set
    for (int i = 32; i < 256; ++i) {
        file << "value: " << setw(3) << i << "   "
            << "char:  " << static_cast<char>(i) << endl;
    }

}  // closes file automatically

void outputFile(const string &filename)
{
    // open input file
    ifstream file(filename.c_str());

    // file opened?
    if (!file) {
        // NO, abort program
        cerr << "can't open input file \"" << filename << "\"" << endl;
        exit(EXIT_FAILURE);
    }

    // copy file contents to cout
    char c;
    while (file.get(c)) {
        cout.put(c);
    }

}  // closes file automatically
