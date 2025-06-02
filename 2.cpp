#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

int main() {
    const double g = 9.81;   
    const double m = 75;  
    const double k = 8;    
    
    // Моменты времени 
    const std::vector<double> time_points = {0, 0.25, 0.5, 0.75, 1, 2, 3, 4, 5};

    // Вычисление и вывод скорости для каждого t
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Время (с)\tСкорость (м/с)\n";
    std::cout << "----------------------------\n";

    for (double t : time_points) {
        double v = sqrt(g * m / k) * tanh( t * sqrt(g * k / m));  
        
        std::cout << t << "\t\t" << v << "\n";
    }

    return 0;
}