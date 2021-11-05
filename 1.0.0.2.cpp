#include <iostream>

auto main (int argc, char** argv) -> int{
    auto a = std::stoi(argv[1]);
    auto b = std::stoi(argv[2]);
    std::cout<<a+b<<"\n";
    return 0;
}
