#include <stdio.h>
#define table_limit 10

int main(){
    int pmtr, number;
    printf("Enter a number : ");  // number = Number which is user provide.
    scanf ("%d",&number);   // %d is a integer data type. Which is formate specifier.
    for (int pmtr = number; pmtr <=table_limit*number; pmtr= pmtr+number)
    {
        printf("%d\n",pmtr);
    }
    
return 0;
}