#include <iostream>
 
#define PI 3.14159
#define MAX(a, b) ((a) > (b) ? (a) : (b))
 
int main() {
    double area = PI * 5 * 5;
    int maxNumber = MAX(10, 20);
 
    std::cout << "Área del círculo: " << area << std::endl;
    std::cout << "Número máximo: " << maxNumber << std::endl;
 
    return 0;
}