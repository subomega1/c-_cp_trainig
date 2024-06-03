#include<iostream>

int main(){
    int t, x, y;
    do{
      std::cout << "give t\n";
    std::cin >> t;
    }while (1<t<100);
    
    
    for(int i = 0; i < t; i++) {
        std::cin >> x >> y;
        if (x >= 0 && x <= 9 && y >= 0 && y <= 9) {
            std::cout << std::min(x, y) << " " << std::max(x, y) << std::endl;
        } else {
            std::cout << "x and y should be between 0 and 9" << std::endl;
        }
    }
    return 0;
}
