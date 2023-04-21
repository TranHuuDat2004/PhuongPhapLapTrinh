#include <stdio.h>

void main()
{
    char s[100];
    int i,j,check=0;
    char key;
    printf("Nhap chuoi ki tu:");
    fgets(s,100,stdin);
    printf("Nhap ki tu muon tim trong xau:");
    scanf("%c",&key);
    printf("Vi tri xuat hien la:");
    for (i=0; s[i]!='\0';i++)
    {
        if (s[i]==key)
        {
            printf("%d ",i+1);
            check=1;
        }
    }
    if (check ==0)
    {
        printf("Ki tu do khong co xuat hien");
    }
}
