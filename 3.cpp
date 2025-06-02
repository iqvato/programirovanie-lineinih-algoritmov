#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

int main() {
    // Исходные данные
    const double Re = 2.0e4;       
    const double d = 25.4;         
    const double S1 = 60.0;        
    const std::vector<double> S2_values = {30.0, 50.0, 65.0, 75.0, 80.0}; 

    // Векторы для хранения результатов
    std::vector<double> Nu_results;
    std::vector<double> delta_results;

    // Расчет для каждого значения S2
    for (double S2 : S2_values) {
        // 1. Расчет диагонального шага Sg по формуле (3)
        double Sg = d * sqrt(pow(S1/(2*d), 2) + pow(S2/d, 2));

        // 2. Расчет параметра Delta по формуле (2)
        double Delta = (S1 - d) / (Sg - d);

        // 3. Расчет числа Nu по формуле (1)
        double Nu;
        if (Delta < 0.7) {
            Nu = 0.27 * pow(Re, 0.6) * Delta;
        } else {
            Nu = 0.295 * pow(Re, 0.4) * pow(Delta, 0.25);
        }

        // Сохраняем результаты
        Nu_results.push_back(Nu);
        delta_results.push_back(Delta);
    }

    // Вывод результатов в два столбца
    std::cout << std::fixed << std::setprecision(2);
    
    // Вывод столбца Nu
    for (double val : Nu_results) {
        std::cout << val << "\n";
    }
    
    std::cout << "\n"; // Разделитель между столбцами
    
    // Вывод столбца Delta
    for (double val : delta_results) {
        std::cout << val << "\n";
    }

    return 0;
}