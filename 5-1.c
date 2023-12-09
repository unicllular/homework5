#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, a, b;
printf("Enter first integer: ");
scanf("%d", &a);
printf("Enter second integer: ");
scanf("%d", &b);
for(i=a+1; i<b; i++){
    if(i%2!=0){
        printf("%d ", i);
    }
}
}
