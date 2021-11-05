#include <iostream>

auto main (int argc, char** argv) -> int{
    auto a = std::stoi(argv[1]);

    if (a<0)
        std::cout<<"-1\n";
    else if (a>0)
        std::cout<<"1\n";
    else
        std::cout<<"0\n";
    return 0;
}