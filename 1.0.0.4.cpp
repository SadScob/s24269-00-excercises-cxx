#include <iostream>

auto main (int argc, char** argv) -> int{
    auto a = std::stoi(argv[1]);
    auto b = std::stoi(argv[2]);
if (a>b)
   std::cout<<a<<"\n";
else if (a<b)
   std::cout<<b<<"\n";
 else
    std::cout<<a<<"="<<b<<"\n";
    return 0;
}