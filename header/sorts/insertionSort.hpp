#ifndef INSERTION_SORT_HPP
#define INSERTION_SORT_HPP

template <typename T>
void insertionSort(T* arr, std::size_t size)
{
    std::size_t i, j, key;

    for (i = 1; i < size; ++i)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {    
            arr[j + 1] = arr[j];
            --j;
        }
        
        arr[j + 1] = key;
    }
}

#endif