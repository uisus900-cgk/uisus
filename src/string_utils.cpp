#include "string_utils.h"
#include <vector>
#include <string>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> result;

    if (str.empty()) {
        return result;
    }

    size_t start = 0;
    size_t end = 0;

    while ((end = str.find(delimiter, start)) != std::string::npos) {
        result.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    result.push_back(str.substr(start));

    return result;
}