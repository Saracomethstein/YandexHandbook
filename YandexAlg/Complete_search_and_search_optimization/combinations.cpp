#include <iostream>

int calculate(int res, int num);

int main(){
    int n, k, result;
    int num = 1;
    std::cin >> n >> k;
    result = calculate(num, n) / (calculate(num, k) * calculate(num, n - k));
    std::cout << result;

    return 0;
}

int calculate(int res, int num){
    for(int i = 0; i < num; ++i) {
        res += res * i;
    }

    return res;
}