#include <iostream>

int main(){
    int intervalCount;
    std::cin >> intervalCount;
    
    int *intervalL = new int[intervalCount];
    int *intervalr = new int[intervalCount];
    for(int i = 0; i < intervalCount; ++i){
        std::cin >> intervalL[i] >> intervalr[i];
    }

    
    // for(int i = 0; i < intervalCount; ++i){
    //     std::cout << intervalL[i] << " " << intervalr[i] << "\n";
    // }
    return 0;
}