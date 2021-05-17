#include <iostream>
#include <vector>

int main(){
    int n, m, k, x, y;
    std::cin >> n >> m >> k;
    std::vector<std::vector<int>> a(n, std::vector<int>(m, 0));
    for(int i = 0; i < k; ++i){
        std::cin >> x >> y;
        a[x-1][y-1] = -1;
    }

    for(int i = 0; i < n; ++i) for(int j = 0; j < m; ++j) if(a[i][j] == 0) for(int r=i-1; r<=i+1; r++)for(int t = j - 1; t <= j + 1; ++t) if(r >= 0 and r < n and t >= 0 and t < m) if(a[r][t]==-1) ++a[i][j];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j) std::cout << a[i][j]<<' ';
        std::cout << std::endl;
    }
    return 0;
}
