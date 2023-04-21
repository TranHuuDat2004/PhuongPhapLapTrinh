#include <stdio.h>

int main()
{
    int arr[100];
    int size;          
    int i, j, k;       

    printf("Nhap so phan tu : ");
    scanf("%d", &size);

    printf("Nhap gia tri phan tu: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k=j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                size--;

                j--;
            }
        }
    }

    printf("\n So phan tu sau khi xoa phan tu bi trung lap: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
