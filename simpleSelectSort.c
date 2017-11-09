//简单选择排序，时间复杂度为O(n^2)

#include<stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int array[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%-3d", array[i]);
    }
    printf("\n");
}

void simpleSelectSort(int *arr, int len){
    for(int i = 0; i < len - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < len; j++){
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
        printf("第%d趟\n", i+1);
        printArr(arr, len);
        
    }
}

int main() {
    int n;
    int arr[5] = {5,2,6,4,9};
    int len = 5;
    simpleSelectSort(arr, 5);
    return 0;
}