#include <iostream>
#include <cstring>

template <typename T> T maxn(T arr[], int elements);
template <> const char * maxn(const char * arr[], int elements);

int main()
{
    int arr1[6] = {1, 2, 33, 4, 5, 66};
    double arr2[4] = {1.5, 2.5, 3.5, 44.5};
    
    const char * arr3[5] = {
        "Steve Jobs", 
        "Aristotle", 
        "Anne Frank", 
        "Walt Disney", 
        "John Lennon"
    };

    std::cout << "Largest int: " << maxn(arr1, 6) << std::endl;
    std::cout << "Largest double: " << maxn(arr2, 4) << std::endl;
    std::cout << "Largest string: " << maxn(arr3, 5) << std::endl;

    return 0;
}

template <typename T> T maxn(T arr[], int elements)
{
    T largest = arr[0];
    for (int i = 1; i < elements; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    return largest;
}

template <> const char * maxn(const char * arr[], int elements)
{
    const char * longest = arr[0];
    for (int i = 1; i < elements; i++)
        if (strlen(arr[i]) > strlen(longest))
        {
            longest = arr[i];
        }
    return longest;
}
