#include <iostream>
#include <vector>
#include <iomanip>

const int MAX_HARMONIC = 100;

int main() {
    int n;
    
    // Ввод числа n от пользователя
    std::cout << "Введите количество слагаемых для гармонического ряда: ";
    std::cin >> n;
    
    // Проверка, что n не превышает максимального значения
    if (n > MAX_HARMONIC) {
        std::cerr << "Слишком большое значение. Максимально допустимо: " << MAX_HARMONIC << std::endl;
        return 1;
    }
    
    // Создаем вектор для хранения слагаемых гармонического ряда
    std::vector<double> harmonicSeries(n);
    
    // Инициализация первого слагаемого
    harmonicSeries[0] = 1.0 / 1.0;
    
    // Генерация остальных слагаемых гармонического ряда
    for (int i = 1; i < n; ++i) {
        harmonicSeries[i] = 1.0 / (i + 1.0);
    }
    
    // Вывод слагаемых гармонического ряда в научном формате
    std::cout << "Гармонический ряд:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << std::fixed << std::setprecision(6) 
                  << i + 1 << ": " << harmonicSeries[i] << std::endl;
    }
    
    // Вывод суммы ряда
    double sum = 0.0;
    for (double val : harmonicSeries) {
        sum += val;
    }
    std::cout << "\nСумма ряда: " << std::fixed << std::setprecision(6) << sum << std::endl;
    
    return 0;
}