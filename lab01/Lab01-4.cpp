#include <stdio.h>

int GetSet( int [] ) ;

int main() {
    int *data, num ;
    num = GetSet( &*data ) ;
    return 0 ;
}//end function

int GetSet( int [] ) {
    int num [ 100 ] , data[ 100 ] ;

    printf( "Enter the number of elements: " ) ;
    scanf( "%d" , num ) ;
    printf( "Enter the elements: " ) ;
    for ( int i = 0 ; i < *num ; i++ ) {
        scanf( "%d", &data[ i ] ) ;
    }

    printf( "Number of elements: %d\n" , *num ) ;
    
    for ( int i = 0 ; i < *num; i++ ) {
        printf( "%d " , data[ i ] ) ;
    }
    printf( "\n" ) ;
}
