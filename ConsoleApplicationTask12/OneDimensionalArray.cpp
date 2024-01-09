#include "OneDimensionalArray.h"
#include <iostream>

OneDimensionalArray::OneDimensionalArray() : data(nullptr), size(0) {}

OneDimensionalArray::OneDimensionalArray(int* arr, int arrSize) : size(arrSize) {
    data = new int[size];
    for (int i = 0; i < size; i++) {
        data[i] = arr[i];
    }
}

OneDimensionalArray OneDimensionalArray::operator-(int scalar) const {
    OneDimensionalArray result(data, size);
    for (int i = 0; i < size; i++) {
        result.data[i] -= scalar;
    }
    return result;
}

bool OneDimensionalArray::operator>(int element) const {
    for (int i = 0; i < size; i++) {
        if (data[i] == element) {
            return true;
        }
    }
    return false;
}

bool OneDimensionalArray::operator!=(const OneDimensionalArray& other) const {
    if (size != other.size) {
        return true;
    }
    for (int i = 0; i < size; i++) {
        if (data[i] != other.data[i]) {
            return true;
        }
    }
    return false;
}

OneDimensionalArray OneDimensionalArray::operator+(const OneDimensionalArray& other) const {
    int newSize = size + other.size;
    int* newData = new int[newSize];
    for (int i = 0; i < size; i++) {
        newData[i] = data[i];
    }
    for (int i = 0; i < other.size; i++) {
        newData[size + i] = other.data[i];
    }
    OneDimensionalArray result(newData, newSize);
    return result;
}

void OneDimensionalArray::removeVowels() {
    int vowelsCount = 0;
    for (int i = 0; i < size; i++) {
        char c = static_cast<char>(data[i]);
        if (isVowel(c)) {
            vowelsCount++;
        }
    }

    int* newData = new int[size - vowelsCount];
    int j = 0;
    for (int i = 0; i < size; i++) {
        char c = static_cast<char>(data[i]);
        if (!isVowel(c)) {
            newData[j++] = data[i];
        }
    }

    delete[] data;
    data = newData;
    size -= vowelsCount;
}

void OneDimensionalArray::removeFirstFiveElements() {
    if (size <= 5) {
        delete[] data;
        data = nullptr;
        size = 0;
    }
    else {
        int* newData = new int[size - 5];
        for (int i = 5; i < size; i++) {
            newData[i - 5] = data[i];
        }
        delete[] data;
        data = newData;
        size -= 5;
    }
}

void OneDimensionalArray::printArray() const {
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

OneDimensionalArray::~OneDimensionalArray() {
    delete[] data;
}

bool OneDimensionalArray::isVowel(char c) const {
    switch (c) {
    case 'a':
        return 'à';
    case 'e':
        return 'å';
    case 'i':
        return 'è';
    case 'o':
        return 'î';
    case 'u':
        return 'ó';
    case 'A':
        return 'À';
    case 'E':
        return 'Å';
    case 'I':
        return 'È';
    case 'O':
        return 'Î';
    case 'U':
        return 'Ó';
    default:
        return false;
    }
}
