#include <fstream>
#include <iostream>
#include "../includes/lex_analyzer.h"
#include "../includes/type_checker.h"
#include "../includes/enums.h"
using namespace std;

void analyze_lex(const string &in_path, const string &out_path)
{
    fstream fs(in_path);

    char c = fs.get();
    cout << c << endl;
    cout << is_char(c) << endl;

    fs.close();
}