#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b=temp;

}

auto main(int argc, char** argv) -> int {
    int a = 42, b = 64;
    cout<< a << " " << b<<endl;
    swap(a, b);
    cout<< a << " " << b <<endl;
    return 0;
}
