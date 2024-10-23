#include <stdio.h>
#define table_limit 10
int funtable(){
    int condition, number;
    printf("Enter a number ");  // n = Number which is user provide.
    scanf ("%d",&number);   // d is a double or integer data type 
    for (int condition = number; condition <=table_limit*number; condition=condition+number)
    {
        printf("%d\n",condition);
    }
    
return 0;
}

#include <stdio.h>

int main(){
    funtable();
return 0;
}