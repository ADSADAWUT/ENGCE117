#include <stdio.h>

int main () {
    int number = 0 ;
    printf( "EnterNumber : " ) ;
    scanf( "%d", &number ) ;
    for ( int i = 0 ; i < number ; i++ ) {
        printf( "[%d] Hello world\n" , i + 1 ) ;
    }
    return 0 ;
}//end function