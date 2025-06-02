#include <iostream>
#include <cmath> 

int main() {
    // три массива
    int X[] = {5, -2, -1, -6, 4};
    int Y[] = {-3, 70, 2, -1};    
    int Z[] = {-10, 14, -9};       

    // суммы модулей для каждого массива
    int sumX = 0;
    for(int num : X) {
        sumX += abs(num);
    }

    int sumY = 0;
    for(int num : Y) {
        sumY += abs(num);
    }

    int sumZ = 0;
    for(int num : Z) {
        sumZ += abs(num);
    }

    // результаты
    std::cout << "Сумма модулей массива X: " << sumX << std::endl;
    std::cout << "Сумма модулей массива Y: " << sumY << std::endl;
    std::cout << "Сумма модулей массива Z: " << sumZ << std::endl;

    return 0;
}