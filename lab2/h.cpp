#include <iostream>

int main() {
    int n, d = 2;
    std::cin >> n;
    while (n > 1) {
        while(n % d == 0) {
            n = n / d;
            std::cout << d << std::endl;
        }
        ++d;
    }
    return 0;
}
