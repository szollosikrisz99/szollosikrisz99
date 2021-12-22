#include <iostream>
#include <stdexcept>


int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(int ai[], int x)
{
    int la[10] = { };
    for (int i = 0; i < x; ++i) la[i] = ai[i];

    std::cout << "3/c\n";
    for (const auto& a : la)
        std::cout << a << ' ';
    std::cout << '\n';

    int* p = new int[x];
    for (int i = 0; i < x; ++i) p[i] = ai[i];
    
    std::cout << "3/e\n";
    for (int i = 0; i < x; ++i)
        std::cout << p[i] << ' ';
    std::cout << '\n';

    delete[] p;
}

int fac(int n) { return n > 1 ? n*fac(n-1) : 1; }

int main(){

    std::cout << "4/a\n";
    f(ga, 10);

    int aa[10] = {};
    for (int i = 0; i < 10; ++i)
        aa[i] = fac(i+1);

    std::cout << "Faktorialis\n";
    f(aa, 10);
}


