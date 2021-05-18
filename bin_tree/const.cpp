#include <iostream>

class Foo {
public:
	

	void foo() {
		std::cout << x;
		++x;


	}


	int x;
	 

}

int main () {
	const Foo foo;

	foo.foo();
return 0;

} 
