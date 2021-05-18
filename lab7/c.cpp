#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int n, x;
    double dx, mx = 0, mx2 = 0;
    std::cin >> x;
    for (n = 0; x != 0; ++n) {
        mx += x;
        mx2 += (x * x);
        std::cin >> x;
    }
    mx /= n;
    mx2 /= n;
    std::cout << std::fixed << std::setprecision(3) << mx << " " <<  mx2 - mx * mx;
    return 0;
}
