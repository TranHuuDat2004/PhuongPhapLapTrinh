#include <stdio.h>

void main()
{
    char s[100];
    int i,j,check=0;
    char key;
    printf("Nhap chuoi ki tu:");
    fgets(s,100,stdin);
    printf("Nhap ki tu muon tim trong chuoi ki tu:");
    scanf("%c",&key);
    
    for (i=0; s[i]!='\0';i++)
    {
        if (s[i]==key)
        {
            printf("Vi tri xuat hien dau tien la : %d",i+1);
            check=1;
            break;
        }
    }
    if (check ==0)
    {
        printf("Ki tu do khong co xuat hien");
    }
}
