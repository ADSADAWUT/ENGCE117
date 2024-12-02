#include <stdio.h>

int main() {
    float celsius , fahrenheit ;

    printf( "User input : " ) ;
    scanf( "%f" , &celsius ) ;

    fahrenheit = ( celsius * 1.8 ) + 32 ;
    printf( "%.0f degree Celsius = %.1f degree Fahrenheit\n" , celsius , fahrenheit ) ;

    return 0 ;
}
