#include<iostream> 

bool check1(int a, int b, int c) {
	return (a + b == c);
}

bool check2(int a, int b, int c){
return (a + c == b);
}

bool check3 (int a, int b, int c){
return (b + c == a);
}

int main() {
int n; 
int f[10000], h[10000];

std::cin >> n;
for (int i = 0; i < n; ++i) std::cin >> f[i] >> h[i];
for (int i = 0; i < n; ++i) for (int j = i + 1; j < n; ++j) for (int k = j + 1; k < n; ++k) if ((check1(f[i], f[j], f[k]) and check1(h[i], h[j], h[k])) or (check2 (f[i], f[j], f[k])and check2(h[i], h[j], h[k]) ) or (check3(f[i], f[j], f[k]) and check3(h[i], h[j], h[k]))) {
	std::cout << "YES"; 
	return 0;
	}
std::cout << "NO";
return 0; 
}
