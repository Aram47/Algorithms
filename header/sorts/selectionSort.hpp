#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP

template <typename T>
void selectionSort(T* arr, std::size_t size)
{
    std::size_t i, j, min_idx;

    for (i = 0; i < size -1; ++i)
    {
        min_idx = i;
        for (j = i + 1; j < size; ++j)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        if (min_idx != i)
            std::swap(arr[min_idx], arr[i]);
    }
}

#endif