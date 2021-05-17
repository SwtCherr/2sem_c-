#include <iostream>

int main(){
    int a, counter;
    counter = 0;
    std::cin >> a;
    if (a == 0){
        std::cout << 0;
        return 0;
    }
    if (a % 2 == 0) ++counter;
    while (a != 0){
        std::cin >> a;
        if (a % 2 == 0) ++counter;
    }
    std::cout << counter - 1;
    return 0;
}
