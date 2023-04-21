#include <stdio.h>

int main()
{
    int arr[100];
    int size;
    int i, j, temp;

    printf("Nhap so phan tu: ");
    scanf("%d", &size);

    printf("Nhap cac gia tri cua phan tu: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {

        for(j=i+1; j<size; j++)
        {

            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nGia tri phan tu tang dan la: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
