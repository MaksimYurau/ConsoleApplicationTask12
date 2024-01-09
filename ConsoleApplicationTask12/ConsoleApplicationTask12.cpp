// ConsoleApplicationTask12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "OneDimensionalArray.h"

int main() {
    setlocale(0, "ru");

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    OneDimensionalArray array1(arr, 10);

    std::cout << "Исходный одномерный массив: " << std::endl;
    array1.printArray();

    std::cout << "Одномерный массив без первых пяти элементов: " << std::endl;

    array1.removeFirstFiveElements();
    array1.printArray();

    std::cout << std::endl;

    system("pause");

    return 0;
}
