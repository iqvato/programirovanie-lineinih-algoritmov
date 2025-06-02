#include <iostream>
#include <cmath>
#include <iomanip>

const double g = 9.81;
const double pi = 3.141592653589793238462643383279502884;

int main() {
    double l = 0.994;
    double alpha_degrees = 50.0;
    //Перевод в радианы по формуле радианы=градусы×π/180
    double alpha_radians = alpha_degrees * pi / 180.0;

    // Формула 1
    double t1 = 2 * pi * sqrt(l / g);

    // Формула 2 
    double t2 = 2 * pi * sqrt((l / g) * (1 + pow(alpha_radians, 2) / 16));

    // Формула 3
    double sin_half_alpha = sin(alpha_radians / 2);
    double t3 = 2 * pi * sqrt((l / g) * (1 + 0.25 * pow(sin_half_alpha, 2) 
                              + (9.0/64) * pow(sin_half_alpha, 4)));


    std::cout << std::fixed << std::setprecision(6);    
    std::cout << "t1: " << t1 << std::endl; 
    std::cout << "t2: " << t2 << std::endl; 
    std::cout << "t3: " << t3 << std::endl;  

    return 0;
}