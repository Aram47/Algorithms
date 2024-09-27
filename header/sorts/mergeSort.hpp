#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP

template <typename T>
void merge(T* arr, std::size_t left, std::size_t mid, std::size_t right)
{
    std::size_t subArrayOne = mid - left + 1;
    std::size_t subArrayTwo = right - mid;

    T* leftArray = new T[subArrayOne];
    T* rightArray = new T[subArrayTwo];

    for (std::size_t i = 0; i < subArrayOne; ++i)
        leftArray[i] = arr[left + i];

    for (std::size_t j = 0; j < subArrayTwo; ++j)
        rightArray[j] = arr[mid + 1 + j];

    std::size_t indexOfSubArrayOne = 0;
    std::size_t indexOfSubArrayTwo = 0;
    std::size_t indexOfMergeArray = left;
    
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo)
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo])
            arr[indexOfMergeArray++] = leftArray[indexOfSubArrayOne++];
        else
            arr[indexOfMergeArray++] = rightArray[indexOfSubArrayTwo++];

    while (indexOfSubArrayOne < subArrayOne)
        arr[indexOfMergeArray++] = leftArray[indexOfSubArrayOne++];

    while (indexOfSubArrayTwo < subArrayTwo)
        arr[indexOfMergeArray++] = rightArray[indexOfSubArrayTwo++];

    delete [] leftArray;
    delete [] rightArray;
}

template <typename T>
void mergeSort(T* arr, std::size_t begin, std::size_t end)
{
    if (begin >= end)
        return;

    std::size_t mid = begin + (end - begin) / 2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid + 1, end);
    merge<T>(arr, begin, mid, end);
}

#endif