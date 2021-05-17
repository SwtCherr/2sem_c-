#include <iostream>

int min (int a, int b){
    if (a <= b) return a;
    else return b;
}

int max (int a, int b){
    if (a <= b) return b;
    else return a;
}

int main(){
    int a1, a2, c;
    std::cin >> a1 >> a2;
    while (a1 != a2){
        c = min(a1, a2);
        a1 = max(a1, a2) - c;
        a2 = c;
    }
    std::cout << a1;
    return 0;
}
