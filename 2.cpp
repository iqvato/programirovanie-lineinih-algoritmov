#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    
    //необходимые переменные
    const double body_mass = 75.0;      
    const double drag_coefficient = 8.0;    
    const double gravity = 9.81; 
    
    //время, относительно которого считаем скорость
    double time_points[] = {0, 0.25, 0.5, 0.75, 1, 2, 3, 4, 5}; 
    int index = 0;


    // Предусловие
    cout << "Это работает по предусловию\n" ;
    cout << "Время (с)\tСкорость (м/с)\n";
    cout << "----------------------------\n";
    while(index < 9) {
        double current_time = time_points[index];
        double velocity = sqrt(gravity * body_mass / drag_coefficient) * tanh(current_time * sqrt(gravity * drag_coefficient / body_mass));
                         
        cout << fixed << setprecision(3);
        cout << current_time << "           " << velocity << endl;
        index++;
    }

    index = 0;
    
    //постусловие
    cout << "А теперь с постусловием\n";
    cout << "Время (с)\tСкорость (м/с)\n";
    cout << "----------------------------\n";
    do {
        double current_time = time_points[index];
        double velocity = sqrt(gravity * body_mass / drag_coefficient)
                        * tanh(current_time * sqrt(gravity * drag_coefficient / body_mass));
        
        cout << fixed << setprecision(3);
        cout << current_time << "           " << velocity << endl;
        index++;
    } while(index < 9);

    return 0;
}
