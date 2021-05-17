#include <iostream>
#include <cmath>

int main(){
    int x;
    bool f = 1;
    std::cin >> x;
    for (int i = 2; i <= sqrt(x); ++i) if (x % i == 0) f = 0;
    std::cout << f << std::endl;
    return 0;
}
