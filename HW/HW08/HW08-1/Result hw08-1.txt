#include <stdio.h>

int main () {
    int n , num ;
    int i = 1 ;
    int sum = 0 ;

    printf( "Enter value n : " ) ;
    scanf( "%d" , &n ) ;
    do {
        printf( "Enter number %d :\n" , i ) ;
        scanf( "%d" , &num ) ;
        sum += num ;  
        i++ ;         
    } while ( i <= n ) ; 

    float Avg = sum / n ;

    printf( "Sum = %d\n" , sum ) ;
    printf( "Avg = %.2f" , Avg ) ;

    return 0 ;
}