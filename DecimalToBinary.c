#include <stdio.h>
int main(){
int i, num, stack[10];
printf("Enter Number to convert it into Binary\n");
scanf("%d", &num); 
for (int i = 0; num>0; i++)
{
    stack[i] = num % 2;
    num /= 2;
}
for ( i <= num; i >= 0; i--)
{
    printf("%d", stack[i]);
}

}