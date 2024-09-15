#include <iostream>
#include <iomanip>

const int MAX_HARMONIC = 100;

int main() {
    int n;
    
    // Ввод числа n от пользователя
    std::cout << "Введите количество слагаемых для гармонического ряда: ";
    std::cin >> n;
    
    // Проверка, что n не превышает максимальное значение
    if (n > MAX_HARMONIC) {
        std::cerr << "Слишком большое значение. Максимально допустимо: " << MAX_HARMONIC << std::endl;
        return 1;
    }
    
    // Генерация и вывод слагаемых гармонического ряда
    std::cout << "Гармонический ряд:" << std::endl;
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        double term = 1.0 / i;
        std::cout << std::fixed << std::setprecision(6) 
                  << i << ": " << term << std::endl;
        sum += term;
    }
    
    // Вывод суммы ряда
    std::cout << "\nСумма ряда: " << std::fixed << std::setprecision(6) << sum << std::endl;
    
    return 0;
}