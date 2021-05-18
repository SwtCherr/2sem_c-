#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

struct User{
	std::string name;
	int num;
	int sum;
};

bool comp(User a, User b) {
    if (a.sum != b.sum) return a.sum > b.sum;
    else {
        if (a.name != b.name) return a.name < b.name;
        else return a.num < b.num;
    }
}

int main(){
	int n;
	std::cin >> n;
    std::vector<User> list(n);    
	for (int i = 0; i < n; ++i) std::cin >> list[i].name >> list[i].num >> list[i].sum;
	sort(list.begin(), list.end(), comp);
	for (int i = 0; i < std::min(n, 10); ++i) std::cout << list[i].name << " " << list[i].num << " " <<  list[i].sum << std::endl;
	return 0;
} 
