#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "string_utils.h"

int main() {
    std::ofstream out("output.txt");
    out << "开始测试split函数" << std::endl;

    std::string input = "hello,world,this,is,a,test";
    out << "输入字符串: " << input << std::endl;

    std::vector<std::string> parts = split(input, ',');
    out << "分割完成，得到 " << parts.size() << " 个部分" << std::endl;

    out << "分割结果:" << std::endl;

    for (size_t i = 0; i < parts.size(); ++i) {
        out << "  部分 " << i << ": '" << parts[i] << "'" << std::endl;
    }

    out << "测试结束" << std::endl;
    out.close();

    return 0;
}








