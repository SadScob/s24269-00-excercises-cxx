#include <iostream>

auto main (int argc, char** argv) -> int {
    auto a =std::stoi(argv[1]);
    int b = 0;
    for (int i=2; i<a; ++i)
    {
        if (a%i == 0)
            b++;
    }
    if (b==0)
        std::cout << "Jest liczba pierwsza\n";
    else
    std::cout << "Nie jest liczba pierwsza\n";
    return 0;
}