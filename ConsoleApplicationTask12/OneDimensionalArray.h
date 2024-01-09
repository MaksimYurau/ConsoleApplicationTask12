#pragma once

#ifndef ONEDIMENSIONALARRAY_H
#define ONEDIMENSIONALARRAY_H

class OneDimensionalArray {
private:
    int* data;
    int size;

public:
    OneDimensionalArray();
    OneDimensionalArray(int* arr, int arrSize);
    OneDimensionalArray operator-(int scalar) const;
    bool operator>(int element) const;
    bool operator!=(const OneDimensionalArray& other) const;
    OneDimensionalArray operator+(const OneDimensionalArray& other) const;
    void removeVowels();
    void removeFirstFiveElements();
    void printArray() const;
    ~OneDimensionalArray();

private:
    bool isVowel(char c) const;
};

#endif