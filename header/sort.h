#ifndef SORT_H
#define SORT_H

#include "./sorts/bubbleSort.hpp"
#include "./sorts/insertionSort.hpp"
#include "./sorts/mergeSort.hpp"
#include "./sorts/selectionSort.hpp"
#include "./sorts/quickSort.hpp"
#include "./sorts/countingSort.hpp"
#include "./sorts/heapSort.hpp"

template <typename T>
void print(T* arr, std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

#endif