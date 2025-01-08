#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    aboy = upgrade( aboy ) ;
    return 0 ;
}//end function

struct student upgrade( struct student child ) {
    if( child.sex == 'M' ) {
        child.gpa *= 1.10 ;
    } else if ( child.sex == 'F' ) {
        child.gpa *= 1.20 ;
    }
    if ( child.gpa > 4.00 ) {
         child.gpa = 4.00 ;
    }
}