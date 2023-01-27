#include <stdio.h>

int main () {

    int a = 2 ;
    int *ptr = &a ;
    int **pptr = &ptr ;

    printf("a = %d\n" , a );

    printf("&a : %d \n" , &a);

    printf("ptr = %d \n" , ptr );

    printf("*ptr = %d\n" , *ptr );

    printf("&ptr : %d \n"  , &ptr);

    printf("pptr : %d \n " , pptr);

    printf("&pptr : %d \n" , &pptr);
    
    printf("**pptr = %d\n" , **pptr );

  

    return 0;
}