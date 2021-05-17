#include <iostream>

int main(){
	int a, b, c;
	std::cin >> a >> b;
	c = do_some_awesome_work(&a, &b);
	std::cout << c;
return 0;
}
