#include <iostream>
#include <vector>

int main(){
	int n, k;
	std::cin >> n >> k;
	if (k >= n) k = k % n;
	std::vector<int> mass0(n, 0);
	std::vector<int> mass(n, 0);
	for (int i = 0; i < n; i++){
		std::cin >> mass0[i];
	}
	for (int i = 0; i < n; i++){
		if (i - k >= 0){
			mass[i - k] = mass0[i];
		} else {
			mass[n + (i - k)] = mass0[i];
		}
	}
	for (int i = 0; i < n - 1; i++){
		std::cout << mass[i] << " ";
	}
	std::cout << mass[n - 1];
return 0;
}
