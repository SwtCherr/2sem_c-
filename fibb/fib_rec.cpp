#include<iostream>

int fib(int m)
{
    if (m == 0 or m == 1) return m;
    return fib(m - 1) + fib(m - 2);
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << fib(n);
    return 0;
}

