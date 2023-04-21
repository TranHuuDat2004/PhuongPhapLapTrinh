#include <stdio.h>
#include <math.h>
int main()
{
    char c;
    printf (" Nhap ky tu: ") ;
    scanf("%c",&c);
     
    if((c>='a' && c<='z')  || (c>='A' && c<='Z') ||  (c>='0' && c<='9')  ){
        printf ("la ky tu alphanumeric",c);
    } 
	else {
        printf ("khong phai la ky tu alphanumeric",c);
    }
    return 0;
 
}
