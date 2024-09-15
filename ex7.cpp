#include <iostream>
#include <fstream>

int main() {
    int n;
    
    // Ввод числа n от пользователя
    std::cout << "Введите количество чисел для вывода: ";
    std::cin >> n;
    
    // Открываем файл для записи
    std::ofstream outputFile("fibonacci_series.txt");
    
    if (!outputFile.is_open()) {
        std::cerr << "Ошибка при открытии файла!" << std::endl;
        return 1;
    }
    
    // Выводим первые n чисел Фибоначчи в файл
    outputFile << "номер: число:" << std::endl;
    int prev = 0, curr = 1;
    outputFile << "1: " << prev << std::endl;
    outputFile << "2: " << curr << std::endl;
    
    for (int i = 3; i <= n; i++) {
        int next = prev + curr;
        outputFile << i << ": " << next << std::endl;
        prev = curr;
        curr = next;
    }
    
    outputFile.close();
    
    std::cout << "Фибоначчивая серия успешно записана в файл fibonacci_series.txt" << std::endl;
    
    return 0;
}