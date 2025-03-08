/***********************************
* File:     use_char.cpp
*
*
*
*
* Sign:     不管几岁，快乐万岁
***********************************/
#include <iostream>
int main() {
    /// "
    char ch = '\"';
    std::cout << ch << std::endl;
    ch = '\\"';
    std::cout << ch << std::endl;
    ch = '\\\"';
    std::cout << ch << std::endl;
    ch = '\\\\"';
    std::cout << ch << std::endl;

    /// '
    ch = '\'';
    std::cout << ch << std::endl;
    ch = '\\\'';
    std::cout << ch << std::endl;
    ch = '\\\\\'';
    std::cout << ch << std::endl;

    /// \

    ch = '\\';
    std::cout << ch << std::endl;
    ch = '\\\\';
    std::cout << ch << std::endl;
    ch = '\\\\\\';
    std::cout << ch << std::endl;

    ch = '\\?';
    std::cout << ch << std::endl;
    return 0;
}