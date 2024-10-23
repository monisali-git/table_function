#include <stdio.h>

int main(){
    int i, n;
    printf("Enter a number : ");  // n = Number user provide.
    scanf ("%d",&n);   // d is a integer data type 
    for (int i = n; i <=10*n; i= i+n)
    {
        printf("%d\n",i);
    }
    
return 0;
}