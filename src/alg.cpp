// Copyright 2021 NNTU-CS
#include <iostream>
#include "alg.h"
using namespace std;

int gcd(int a, int b) 
    {
    // поместить сюда текст реализации алгоритма (на С++)
    while (true)
    {
        a = a % b;
        if (a == 0)
        {
            return b;
        }
        b = b % a;
        if (b == 0)
        {
            return a;
        }
    }
}

int main() {
    cout << gcd(20, 60) << endl;
    return 0;
}
