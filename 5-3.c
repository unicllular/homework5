#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=1, result;
while (i != 0){
    printf("Enter an integer: ");
    scanf("%d", &i);
    result += i;
    if(i==0){
    printf("%d", result);
}
}

}
