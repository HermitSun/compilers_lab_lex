#ifndef lex_analyzer

#include <string>
using std::string;

/**
 * 读取指定路径的文件进行词法分析，并保存到指定的输出文件中
 * @param in_path 输入文件路径
 * @param out_path 输出文件路径
 */
void analyze_lex(const string &in_path, const string &out_path);

#endif