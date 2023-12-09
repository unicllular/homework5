#include <stdio.h>
#include <stdlib.h>

int main()
{
int number, i, answer=1;
printf("Enter a positive integer: ");
scanf("%d", &number);
for(i=1; i<=number; i++){
    answer *= i;
}printf("The factorial of %d is %d", number, answer);

}
