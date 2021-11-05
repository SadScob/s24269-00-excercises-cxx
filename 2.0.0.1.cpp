#include <iostream>

auto main (int argc, char** argv) -> int{
    auto a = std::stoi(argv[1]);
    auto b = std::stoi(argv[2]);
    int i;
   for (i=a; i<b; i++){
std::cout<<i<<"\n";}
return 0;
}