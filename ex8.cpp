#include <iostream>
#include <array>

const int MAX_FIBONACCI = 100;

int main() {
    int n;
    
    // Ввод числа n от пользователя
    std::cout << "Введите количество чисел для вывода: ";
    std::cin >> n;
    
    // Проверка, что n не превышает максимальное значение
    if (n > MAX_FIBONACCI) {
        std::cerr << "Слишком большое значение. Максимально допустимо: " << MAX_FIBONACCI << std::endl;
        return 1;
    }
    
    // Создаем массив для хранения последовательности Фибоначчи
    std::array<int, MAX_FIBONACCI> fibSequence;
    
    // Инициализация первого и второго чисел последовательности
    fibSequence[0] = 0;
    fibSequence[1] = 1;
    
    // Генерация последовательности Фибоначчи
    for (int i = 2; i < n; ++i) {
        fibSequence[i] = fibSequence[i-1] + fibSequence[i-2];
    }
    
    // Вывод последовательности на экран
    std::cout << "Последовательность Фибоначчи:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << fibSequence[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}