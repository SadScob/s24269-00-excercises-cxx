#include <iostream>

auto main (int argc, char** argv) -> int {
    auto a = std::stoi(argv[1]);
    auto b = std::stoi(argv[2]);
    auto s = std::stoi(argv[3]);
    for (int i = a; i < b; i+=s){
        if (s<=0){
            std::cout<<"error\n";
            break;}
    std::cout<<i<<"\n";
    }
    return 0;
}