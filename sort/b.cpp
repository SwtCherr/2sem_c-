#include <iostream>
#include <vector>

int main(){
	int n;
	std::cin >> n;
	std::vector<int> vecc(n, 0);
	for (int i = 0; i < n; i++) std::cin >> vecc[i];
	for (int i = n - 1; i >= 0; --i) std::cout << vecc[i] << " ";
return 0;
}
