#include <iostream>
#include <fstream>

int main() {
    int n;
    
    // Ввод числа n от пользователя
    std::cout << "Введите количество чисел для вывода: ";
    std::cin >> n;
    
    // Открываем файл для записи
    std::ofstream outputFile("ex5.txt");
    
    if (!outputFile.is_open()) {
        std::cerr << "Ошибка при открытии файла!" << std::endl;
        return 1;
    }
    
    // Выводим первые n натуральных чисел в файл
    for (int i = 1; i <= n; i++) {
        outputFile << i << " ";
    }
    
    outputFile << std::endl;
    
    outputFile.close();
    
    std::cout << "Числа успешно записаны в файл natural_numbers.txt" << std::endl;
    
    return 0;
}