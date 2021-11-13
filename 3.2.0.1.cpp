#include <iostream>

using namespace std;

auto print(string a) -> void{
    cout << &a << " = " << a << endl;
}

auto main (int argc, char** argv) -> int {
    string a = "Hello, World!";
    print(a);
    return 0;
}
