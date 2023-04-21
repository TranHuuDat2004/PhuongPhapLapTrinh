#include <stdio.h>
#include<math.h>
 int main()
{
		float a, b, c;
    	printf("Nhap 3 so a, b, c: ");
    	scanf("%f%f%f", &a, &b, &c);	
     if (a >= b && a >= c)
     {printf("Max = %f", a);
    }
    else if (b >= a && b >= c)
     {
         printf("Max = %f", b);
     }
     else
     {printf("Max = %f", c);

     }
     return 0;

}
