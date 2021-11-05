#include <iostream>

auto main (int argc, char** argv) -> int{
    auto a = std::stoi(argv[1]);
    auto b = std::stoi(argv[2]);
    auto c = std::stoi(argv[3]);
    if (a>b && a>c)
        std::cout<<a<<"\n";
    else if (b>a && b>c)
        std::cout<<b<<"\n";
    else
        std::cout<<c<<"\n";
    return 0;
}