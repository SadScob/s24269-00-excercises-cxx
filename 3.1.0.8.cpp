#include <iostream>
using namespace std;


auto sort_asc(int a[], int n) -> void {
    int i = 0;
    int o = 0;
    int sor;
    for (i = 0; i < n; i++) {
        for (o = 0; o < n - i - 1; o++) {
            if (a[o] < a[o + 1]) {
                sor = a[o];
                a[o] = a[o + 1];
                a[o + 1] = sor;
            }
        }
    }
}

auto main(int argc, char **argv) -> int {
    int tab[100];
    int n = 10;
    int a[] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    sort_asc(a,n);
    for (int i:a) {
        cout << i<<"\n";
    }

    return 0;
}
