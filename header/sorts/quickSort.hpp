#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP

template <typename T>
std::size_t get_pivot(T* arr, std::size_t size)
{
    std::size_t i = 0, j = 0;

    while (i < size - 1)
        if (arr[i] <= arr[size - 1])
            std::swap(arr[i++],arr[j++]);
        else
            ++i;

    std::swap(arr[j], arr[size - 1]);

    return j;
}

template <typename T>
void quickSort(T* arr, std::size_t start, std::size_t end)
{
    if (start >= end)
        return;

    std::size_t pivot = get_pivot(arr, end);
    quickSort<T>(arr, start , pivot);
    quickSort<T>(arr, pivot + 1, end);
}

#endif