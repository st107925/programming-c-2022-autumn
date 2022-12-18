#include <iostream>

int main(int argc, char* argv[]) {
    int n = 0; int m = 0;int i = 0; int j = 0; int sumn = 0; int summ = 0;
    int** a = new int* [n];
    std::cin >> n >> m;
    //создаем массив
    for (i = 0; i < n; i++) {
        a[i] = new int[m];
    }
    //вводим данные в массив
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    //сам код
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            sumn += a[i][j];
        }
        std::cout << sumn << " ";
        sumn = 0;
    }
    std::cout << std::endl;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            summ += a[j][i];
        }
        std::cout << summ << " ";
        summ = 0;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
    //удаляем данные из массива     
    for (i = 0; i < n; i++) {
        delete a[i];
    }
    delete a;
    return EXIT_SUCCESS;
}