#include <iostream>
#include <limits>
 
int safe_add(int a, int b) {
    if ((b>0 and a>std::numeric_limits<int>::max()-b) || (b<0 and a<std::numeric_limits<int>::min()-b))
        return false;
    return a + b;
}
 
int main() {
    int x,y;
    std::cout << "Enter the first integer (x): ";
    std::cin >> x;
    std::cout << "Enter the second integer (y): ";
    std::cin >> y;
    int result = safe_add(x, y);  
    std::cout << "Result: " << result << std::endl;
    return 0;
}
 
