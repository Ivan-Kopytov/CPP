#include <iostream>
#include <vector>
#include <fstream>

const int MAX_HARMONIC = 100;

struct HarmonicTerm {
    int index;
    double value;
};

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
    std::vector<HarmonicTerm> harmonicSeries(n);
    
    // Инициализация и генерация слагаемых гармонического ряда
    for (int i = 0; i < n; ++i) {
        harmonicSeries[i].index = i + 1;
        harmonicSeries[i].value = 1.0 / (i + 1.0);
    }
    
    // Открываем файл для записи в бинарном режиме
    std::ofstream outFile("harmonic_series.bin", std::ios::binary);
    
    if (!outFile.is_open()) {
        std::cerr << "Ошибка при открытии файла для записи." << std::endl;
        return 1;
    }
    
    // Записываем данные в файл
    outFile.write(reinterpret_cast<char*>(harmonicSeries.data()), 
                 static_cast<std::streamsize>(harmonicSeries.size() * sizeof(HarmonicTerm)));
    
    outFile.close();
    
    std::cout << "Гармонический ряд успешно записан в файл 'harmonic_series.bin'." << std::endl;
    
    return 0;
}