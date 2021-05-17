#include <iostream>

int main(){
    int x, m, i;
    x = 1, m = 0, i = 1;
    while (x != 0){
        std::cin >> x;
        if (x == m) ++i;
        if (x > m){
            i = 1;
            m = x;
        }
    }
    std::cout << i << std::endl;
    return 0;
}
