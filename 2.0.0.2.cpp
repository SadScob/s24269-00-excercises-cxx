#include <iostream>

auto main (int argc, char** argv) -> int {
    auto a = std::stoi(argv[1]);
    auto b = std::stoi(argv[2]);
    auto c = std::stoi(argv[3]);
    for (int i = a; i < b; i++){
        if (c==0){
            std::cout<<"error\n";
            break;}
       else if (i%c==0)
            std::cout<<i<<"\n";
    }
    return 0;
}

