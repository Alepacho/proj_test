#include <iostream>
#include <vector>
#include <string>

#include "library.hpp"

int main(int argc, char* argv[]) {
    std::vector<std::string> args(argv, argv + argc);
    if (args.size() > 1) {
        for (auto& a : args) std::cout << a << std::endl;
    }

    Library lib;
    lib.print();
    
    return 0;
}