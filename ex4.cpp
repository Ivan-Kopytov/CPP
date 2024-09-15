#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int count = 1;
    
    // Открываем файл для записи
    ofstream outputFile("natural_numbers.txt");
    
    if (!outputFile.is_open()) {
        cerr << "Ошибка при открытии файла!" << endl;
        return 1;
    }
    
    while (count <= 30) {
        outputFile << count << " ";
        count++;
    }
    
    outputFile << endl;
    
    outputFile.close();
    
    cout << "Числа успешно записаны в файл natural_numbers.txt" << endl;
    
    return 0;
}