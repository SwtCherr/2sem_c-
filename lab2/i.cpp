#include <iostream>
#include <cmath>
#include <string>

int main() {
    int v, z = 0, t;
    std::string s, a, b, c;
    while (1 == 1) {
    std::cin >> v >> s;
        if (s == "A999AA") {
            std::cout << z << std::endl;
            return 0;
        }
        if (v > 60) {
            a = s[1];
            b = s[2];
            c = s[3];
            if ((a == b) and (b == c)) z = z + 1000;
            else {
                if ((a == b) or (a == c) or (b == c)) z = z + 500;
                else z = z + 100;
                }
        }
    }
    std::cout << z << std::endl;
    return 0;
}
