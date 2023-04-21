#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    int i,j,m,n,check;
    char key[100];
    printf("Nhap chuoi ki tu:");
    fgets(s,100,stdin);
    printf("\nNhap tu muon tim trong chuoi ki tu:");
    fgets(key,100,stdin);    
    
   
	n = strlen(s);	
	m = strlen(key);	

	
	if (m > n)
		printf("Do dai cua chu phai ngan hon chuoi ki tu");

	while (i < n) 
    {

		j = 0;
		while (i < n && j < m && s[i] == key[j]) 
        {
			++i;
			++j;
		}

		
		if (( i == n || s[i] == ' ') && j == m)
			check=1;

		
		while (i < n && s[i] != ' ') 
        {
			++i;
		}
		++i;
    }
    check=0;
	if (check==1)
	{
		printf("Chu co xuat hien trong chuoi ki tu");
	}
	else
	{
		printf("Chu khong co xuat hien trong chuoi ki tu");
	}
}
