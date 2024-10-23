#include <stdio.h>
#define table_L_limit 1
#define table_M_limit 10
int funtable_list(){
    int condition, number;
    printf("Enter a number : ");  // n = Number which is user provide.
    scanf ("%d",&number);   // d is a double or integer data type 
    for (int condition =table_L_limit; condition <=table_M_limit; condition++)
        printf("%d * %d =  %d\n",number, condition, number*condition);
return 0;
}
#include <stdio.h>
int main(){
    funtable_list();
return 0;
}