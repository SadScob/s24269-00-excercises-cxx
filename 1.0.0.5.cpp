#include <iostream>
#include "math.h"
auto main (int argc, char** argv) -> int{
    auto a = std::stoi(argv[1]);

    std::cout << abs(a)<<"\n";
    return 0;
}
