// ConsoleApplicationTask12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "OneDimensionalArray.h"

int main() {
    setlocale(0, "ru");

    int arr1[] = { 1, 2, 3, 4, 5 };
    int arr2[] = { 6, 7, 8, 9, 10 };

    OneDimensionalArray array1(arr1, 5);
    OneDimensionalArray array2(arr2, 5);

    OneDimensionalArray array3 = array1 + array2;
    std::cout << "Исходный одномерный массив: " << std::endl;
    array3.printArray();

    array1.removeVowels();

    std::cout << "Одномерный массив без первых пяти элементов: " << std::endl;

    array1.printArray();

    array2.removeFirstFiveElements();
    array2.printArray();

    std::cout << std::endl;

    system("pause");

    return 0;
}
