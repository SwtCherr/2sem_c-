#include <iomanip>
#include <iostream>
#include <cmath>

int main() {
    double k, h_0, m;
    std::cin >> k >> h_0 >> m;
    double ans = h_0 * sqrt(2 * k / m);
    std::cout << std::fixed << std::setprecision(1) << ans;
    return 0;
}

