#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], mergeArray[100* 2];
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;
    int i;
     
    printf("Nhap so phan tu thu nhat: ");
    scanf("%d", &size1);

    printf("Nhap cac gia tri phan tu thu nhat: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("\nNhap so phan tu thu hai: ");
    scanf("%d", &size2);

    printf("Nhap cac gia tri phan tu thu hai: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }


    mergeSize = size1 + size2;

    index1 = 0;
    index2 = 0;
    for(mergeIndex=0; mergeIndex < mergeSize; mergeIndex++)
    {

        if(index1 >= size1 || index2 >= size2)
        {
            break;
        }


        if(arr1[index1] < arr2[index2])
        {
            mergeArray[mergeIndex] = arr1[index1];
            index1++;
        }
        else
        {
            mergeArray[mergeIndex] = arr2[index2];
            index2++;
        }
    }

    while(index1 < size1)
    {
        mergeArray[mergeIndex] = arr1[index1];
        mergeIndex++;
        index1++;
    }
    while(index2 < size2)
    {
        mergeArray[mergeIndex] = arr2[index2];
        mergeIndex++;
        index2++;
    }

    printf("\n Phan tu moi la: ");
    for(i=0; i<mergeSize; i++)
    {
        printf("%d\t", mergeArray[i]);
    }

    return 0;
}
