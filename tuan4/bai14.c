#include <stdio.h>

int main()
{
    int arr[100];
    int size, i, toSearch, found;

    printf("Nhap so phan tu: ");
    scanf("%d", &size);

    printf("Nhap cac gia tri phan tu: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nNhap phan tu can tim kiem: ");
    scanf("%d", &toSearch);

    found = 0; 
    
    for(i=0; i<size; i++){
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("\nSo %d duoc tim thay tai phan tu thu %d", toSearch, i + 1);
    }
    else
    {
        printf("\nSo %d khong duoc tim thay trong phan tu", toSearch);
    }

    return 0;
}
