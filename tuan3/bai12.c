#include<stdio.h>
int songuyento(int);
int main()
{
    int n1,so;
    do {
		printf(" Vui long nhap so duong :");
		scanf("%d", &n1);		
	}
	while ( n1 <=0 );
    so = songuyento(n1);
   	if(so==1)
        printf(" So %d la so nguyen to\n",n1);
   	else
      printf(" So %d khong phai so nguyen to\n",n1);
   	return 0;
}
int songuyento(int n1)
{
    int i=2;
    while(i<=n1/2)
    {
         if(n1%i==0)
             return 0;
         else
             i++;
    }
    return 1;
}
