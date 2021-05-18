#include<iostream>

int val[100];

int fib(int n){
    if (val[n] == 0) {
        if (n == 1 or n == 2) val[n] = 1;
        else val[n] = fib(n - 1) + fib(n - 2);
    }
    return val[n];
}

int main(){
	int n;
	std::cin >> n;
	std::cout << fib(n);
	return 0;
}
