#include <iostream>
int PierwszaLiczba(int start, int end)
{
    int b=0;
    for (int i=start; i<end;i++)
    {
        if (end% i==0)
            b+=1;
    }
    if (b==0)
        return end;
    else
        return 0;
}
auto main (int argc, char** argv) -> int
{
    auto a =std::stoi(argv[1]);
    int c = 0;
    if (PierwszaLiczba(2,a) == a)
    {
        for (int i = 1; i <= a; ++i)
        {
            if (PierwszaLiczba(2,i) == i)
                c+=i;
        }
        std::cout << c <<"\n";
    }
    else
        std::cout << "Nie jest liczba pierwsza" <<"\n";
    return 0;
}