#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size, pos;
    printf("Nhap so luong phan tu : ");
    scanf("%d", &size);
    printf("Nhap gia tri phan tu : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Vui long nhap phan tu muon xoa (tu 1 den %d) : ", size);
    scanf("%d", &pos);

    if(pos < 0 || pos > size)
    {
        printf("Gia tri khong hop le! Chuong trinh se tu dong tat :))");
    }
    else {
        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        size--;

        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
