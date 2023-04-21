#include <stdio.h>


int main()
{
    int arr[100];
    int i, j, size, count = 0;
    printf("Nhap so phan tu : ");
    scanf("%d", &size);
    printf("Nhap gia tri phan tu: ");
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTong so phan tu bi trung la = %d", count);

    return 0;
}
