#include <iostream>
#include <stack>

int main(){
    std::stack <int> a;
    int b, c;
    std::cin >> b;
    while(b != 0){
        if(b > 0) a.push(b);
        else if(b < 0 && !a.empty()){
            if(-b >= a.top()) a.pop(); 
			else if(-b < a.top()){
                c = a.top();
                a.pop();
                a.push(c + b);
            }
        }
    std::cin >> b;
    }
    a.empty()? b=-1:b=a.top();
    std::cout << a.size() <<" "<< b << std::endl;
    return 0;
}
