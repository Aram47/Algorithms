#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

template <typename T>
void bubbleSort(T* arr, std::size_t size)
{
    std::size_t i, j;
    bool swapped;

    for (i = 0; i < size - 1; ++i)
    {
        swapped = false;
        for (j = 0; j < size; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

#endif