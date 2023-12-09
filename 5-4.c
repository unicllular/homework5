#include <stdio.h>
#include <stdlib.h>

int main()
{
int num1, num2;
printf("Enter two numbers to compare incorrectly: ");
scanf("%d\n%d", &num1, &num2);
if(num1 > num2){
    printf("%d < %d", num1, num2);
}else if(num2 > num1){
    printf("%d < %d", num2, num1);
}else{
    printf("%d = %d", num1, num2);
}

}
