#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'F' ;
    aboy.gpa = 2.58 ;
    upgrade( aboy ) ;
    return 0 ;
}//end function

void upgrade( struct student child ) {
    if( child.sex == 'M' ) {
        child.gpa *= 1.10 ;
    } else if ( child.sex == 'F' ) {
        child.gpa *= 1.20 ;
    }
    if ( child.gpa > 4.00 ) {
        child.gpa = 4.00 ;
    }
    printf( "%.2f", child.gpa ) ;
}
