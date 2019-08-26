#include <iostream>

int* bubble_sort_array(int arr[], int size){
    if (size==0 or size==1) return arr;
    for (int i=0; i<=size; ++i)
    {
        for (int j=0; j<=size-1; ++j)
        {
            if (arr[j]>arr[j+1])
            {    
                int temp{};
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }    
        }
    }   
    return arr;
}

int main()
{
    int* pTable = new int[5]; 
    
    for (int i=4; i>=0; i--) pTable[i]=5-i;
    for (int j=0; j<5; j++)  std::cout << j << ": " << pTable[j] << '\n';
    std::cout << "Sorting array...\n";
    pTable = bubble_sort_array(pTable, 5);
    for (int j=0; j<5; j++)  std::cout << j << ": " << pTable[j] << '\n';
    
    
    delete[] pTable;
    return 0;
}