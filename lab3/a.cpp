#include <iostream>
#include <cmath>

int main() {
    int n, counter = 0;
    double av = 0;
    int A[1000];
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        std::cin >> A[i];
        av = av + A[i];
    }
    av = av / n;
    for (int i = 1; i <= n; ++i) if (A[i] > av) counter += A[i];
    std::cout << counter;
    return 0;
}
