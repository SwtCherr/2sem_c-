#include <iostream>
#include <vector>

int main() {
    int k, n_x, n_y, x, y;
    std::cin >> n_y >> n_x >> k;
    std::vector<std::vector<char> > map(n_x, std::vector <char> (n_y) );
    for (unsigned int i = 0; i < n_y; i++) for (int j = 0; j < n_x; j++) map[i][j] = '*';
    for (unsigned int i = 0; i < k; ++i) {
        std::cin >> x >> y;
        map[x][y] = 'T';
    }

    for (int i = 0; i < n_y; i++) {
        for (int j = 0; j < n_x; j++) std::cout << map[j][i];
        std::cout << std::endl;
    }
 
return 0;
}
