#include <iostream>
#include <cstdlib>
#include "../header/sort.h"
#include "../header/search.h"

void initialise(int*, std::size_t);

int main() 
{
    std::size_t size = 0;
    std::cin >> size;
    int* arr = new int[size];
    initialise(arr, size);
                                                  //\\
    // mergeSort<int>(arr, 0, size - 1);         // +\\
    // bubbleSort<int>(arr, size);              // +++\\
    // insertionSort<int>(arr, size);          // +++++\\
    // selectionSort<int>(arr, size);         // +++++++\\
    // quickSort<int>(arr, 0 ,size);         // +++++++++\\
    // arr = countingSort<int>(arr, size);  // +++++++++++\\
    // heapSort<int>(arr, size);           // +++++++++++++\\
                                    //     \\ +++++++++++++//
                                    //      \\ +++++++++++//
                                    //       \\++++++++++//
                                    //        \\++++++++//
                                    //         \\++++++//
                                    //          \\++++//
                                     //          \\++//
                                     //            \\
                                     
    print(arr, size);
    delete [] arr;

    return 0;
}

void initialise(int* arr, std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
        arr[i] = rand() % 100;
}