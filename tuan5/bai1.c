#include <stdio.h>
#define SIZE 100
int getLength(const char*);
int main()
{
char str[SIZE]; 
printf("Enter your name: ");
fgets(str, SIZE, stdin);
printf("String: %s\n", str);
printf("String's length: %d", getLength(str));
return 0;
}
int getLength(const char* str)
{
if(str[0] == '\0') return 0;
int length = 0;
while(str[length] != '\0')
{
length = length + 1;
}
return length - 1; 
}
