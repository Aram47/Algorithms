#ifndef COUNTING_SORT_HPP
#define COUNTING_SORT_HPP

template <typename T>
T max(T* arr, std::size_t size)
{
    T maxElement = arr[0];

    for (std::size_t i = 1; i < size; ++i)
        if (arr[i] > maxElement)
            maxElement = arr[i];

    return maxElement;
}

template <typename T>
T min(T* arr, std::size_t size)
{
    T minElement = arr[0];

    for (std::size_t i = 1; i < size; ++i)
        if (arr[i] < minElement)
            minElement = arr[i];

    return minElement;
}

template <typename T>
void zerroInit (T* arr, std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
        arr[i] = T{};
}

template <typename T>
T* countingSort(T* arr, std::size_t size)
{
    T maxElement = max<T>(arr, size);
    T minElement = min<T>(arr, size);
    std::size_t countSize = maxElement - minElement + 1;

    T* countArr = new T[countSize];

    zerroInit<T>(countArr, countSize);

    for (std::size_t i = 0; i < size; ++i)
        ++(countArr[arr[i] - minElement]);

    for (std::size_t i = 1; i < countSize; ++i)
        countArr[i] += countArr[i - 1];

    T* outputArr = new T[size];

    for (std::size_t i = size - 1; i > 0; --i) 
    {
        outputArr[countArr[arr[i] - minElement] - 1] = arr[i];
        --(countArr[arr[i] - minElement]);
    }

    delete [] arr;
    delete [] countArr;

    return outputArr;
}

#endif