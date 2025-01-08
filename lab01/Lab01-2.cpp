#include <stdio.h>
#include <string.h>

void GetSet( int [] , int * ) ;

int main() {
    int *data , num ;
    GetSet( data , &num ) ;
    return 0 ;
}

void GetSet( int data[] , int *num ) {
    
    scanf( "%d" , num ) ;
    for ( int i = 0 ; i < *num ; i++ ) {
        scanf( "%d", &data[ i ] ) ;
    }
    for ( int i = 0 ; i < *num; i++ ) {
        printf( "%d " , data[ i ] ) ;
    }
    printf( "\n" ) ;
}