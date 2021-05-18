#include<iostream>

int main()
{
    int a1 = 0;
    int a2 = 1;
    int c;
    int n;
    std:: cin >> n;
    if (n == 0 or n == 1)
    {
        std::cout << n;
        return 0;
    }
    for (int i = 0; i <= n; ++i)
    {
        c = a1;
        a1 = a2;
        a2 = c + a1;
    }
    std::cout << c << /endl;
}
