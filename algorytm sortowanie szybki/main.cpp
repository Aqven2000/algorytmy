#include <iostream>
using namespace std;

#define dlugosc 10
 
int partition(int tab[], int start, int end)
{
 
    int pivot = tab[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (tab[i] <= pivot)
            count++;
    }
 
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(tab[pivotIndex], tab[start]);
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (tab[i] <= pivot) {
            i++;
        }
 
        while (tab[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(tab[i++], tab[j--]);
        }
    }
 
    return pivotIndex;
}
 
void quickSort(int tab[], int start, int end)
{
 
    // base case
    if (start >= end)
        return;
 
    // partitioning the tabay
    int p = partition(tab, start, end);
 
    // Sorting the left part
    quickSort(tab, start, p - 1);
 
    // Sorting the right part
    quickSort(tab, p + 1, end);
}
 
int main()
{
    int tab[] = {3,5,1,7,8,4,10,9,2,6};
 
    quickSort(tab, 0, dlugosc - 1);
 
    for (auto i : tab)
    {
        cout<<i<<" ";
    }
    
    
    return 0;
}