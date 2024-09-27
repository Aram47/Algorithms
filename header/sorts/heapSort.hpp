#ifndef HEAP_SORT_HPP
#define HEAP_SORT_HPP

template <typename T>
void heapify(T* arr, int size, int index)
{
    int largest = index;
    int l = 2 * index + 1;
    int r = 2 * index + 2;

    if (l < size && arr[l] > arr[largest])
        largest = l;

    if (r < size && arr[r] > arr[largest])
        largest = r;

    if (largest != index) 
    {
        std::swap(arr[index], arr[largest]);
        heapify<T>(arr, size, largest);
    }
}

template <typename T>
void heapSort(T* arr, int size)
{
    for (int i = size / 2 - 1; i >= 0; --i)
        heapify<T>(arr, size, i);

    for (int i = size - 1; i > 0; --i) 
    {
        std::swap(arr[0], arr[i]);
        heapify<T>(arr, i, 0);
    }
}

#endif