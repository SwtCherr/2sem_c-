#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int **a = new int* [n];
    for (int i = 0; i < n; ++i) {
        a[i] = new int[n];
        for (int j = 0; j < n; ++j) std::cin>>a[i][j];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = n - 1; j >= 0; --j) std::cout << a[j][i] << " ";
        std::cout << std::endl;
    }
    return 0;
}
