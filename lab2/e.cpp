#include <iostream>

int main(){
    int x, m;
    x = 1; m = 0;
    while (x != 0){
        std::cin >> x;
        if (x % 2 == 0) if (x > m) m = x;
    }
    std::cout << m << std::endl;
    return 0;
}
