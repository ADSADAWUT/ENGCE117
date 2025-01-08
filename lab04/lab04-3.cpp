#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

void saveNode( struct studentNode *child, char n[], int a, char s, float g ) ;
void GoNext1( struct studentNode *walk ) ;

int main() {
    struct studentNode *start, *now1, **now2 ;
    start = (struct studentNode * )malloc( sizeof( struct studentNode ) ) ;
    saveNode( start, "one", 6, 'M', 3.11 ) ;
    
    start->next = (struct studentNode * )malloc( sizeof( struct studentNode ) ) ;
    saveNode( start->next, "two", 8, 'F', 3.22 ) ;
    
    start->next->next = (struct studentNode * )malloc( sizeof( struct studentNode ) ) ;
    saveNode( start->next->next, "three", 10, 'M', 3.33 ) ;

    start->next->next->next = (struct studentNode * )malloc( sizeof( struct studentNode ) ) ;
    saveNode( start->next->next->next, "four", 12, 'F', 3.44 ) ;

    now1 = start ;
    now2 = &start ;

    GoNext1( now1 ) ;

    return 0 ;
}//end function

void saveNode( struct studentNode *child, char n[], int a, char s, float g ) {
    strcpy( child->name, n ) ;
    child->age = a ;
    child->sex = s ;
    child->gpa = g ;
}//end function

void GoNext1( struct studentNode *walk ) {
    if( walk != NULL ) {
        walk->next ;
        printf( "%s %d %c %.2f" , walk->name , walk->age , walk->sex , walk->gpa ) ;
    }
}

//walk->next
//walk->next->next
//walk->next->next->next