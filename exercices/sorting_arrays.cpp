#include <iostream>

void sort(int array[], int size);

int main()
{

    int array[] = {5,4,2,10,7,9,8,1,3};
    int array_size = sizeof(array)/sizeof(array[0]);

    for(int element : array)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";

    sort(array, array_size);

    return 0;
}

void sort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                int storage = array[j];
                array[j] =  array[j+1];
                array[j+1] = storage;
            }
            else
            {
                continue;
            }
        }
        
    }
    std::cout << "The sorted array is:\n";
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i];
        if (i < size - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "\n";
}