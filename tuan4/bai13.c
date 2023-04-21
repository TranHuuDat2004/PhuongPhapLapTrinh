#include <stdio.h>

void printArray(int arr[], int len);



int main()
{
    int arr[100];
    int even[100], odd[100];
    
    int evenCount, oddCount;
    int i, size;
    printf("Nhap so phan tu: ");
    scanf("%d", &size);
    printf("Nhap cac gia tri phan tu: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    evenCount = 0;
    oddCount = 0;

    for(i=0; i<size; i++) {
        if(arr[i] & 1)
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
        else
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
    }

    printf("\nPhan tu so chan: \n");
    printArray(even, evenCount);

    printf("\nPhan tu so le: \n");
    printArray(odd, oddCount);

    return 0;
}

void printArray(int arr[], int len)
{
    int i;
    printf("Gia tri phan tu: ");
    for(i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
