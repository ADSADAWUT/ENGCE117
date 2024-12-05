#include <stdio.h>

int main() {
    int n, i ;
    int a = 1 , b = 1 , next ;
    int sum = 0 ;

    printf( "Enter number : " ) ;
    scanf( "%d" , &n ) ;

    printf("Series = ") ;
    for ( i = 1 ; i <= n ; i++ ) {
        if ( i == 1 ) {
            printf( "%d" , a ) ;
            sum += a ;
        } else if ( i == 2 ) {
            printf( " + %d" , b ) ;
            sum += b ;
        } else {
            next = a + b ;
            printf(" + %d" , next ) ;
            sum += next ;
            a = b ;
            b = next ;
        }
    }
    printf( "\nSum = %d\n" , sum ) ;

    return 0 ;
}