#include <iostream>

int main()
{
	int n;
	int res = 1;
	std::cin >> n;
	for(int i = 0; i < n; ++i){
		res += res * i;
	}
	std::cout << res;
	return 0;
}