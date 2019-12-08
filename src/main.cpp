#include <iostream>
#include <string>
#include "includes/lex_analyzer.h"
using std::cout;
using std::endl;
using std::string;

int main()
{
    const string in_path = "../Test.sw";
    const string out_path = "../Test_out_lex.txt";
    analyze_lex(in_path, out_path);
    cout << "Finished. Tokens file path: " + out_path << endl;
}