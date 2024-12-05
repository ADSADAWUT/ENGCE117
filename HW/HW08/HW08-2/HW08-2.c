#include <stdio.h>

int main() {

    int input ;
    printf( "enter score : " ) ;
    scanf( "%d" , &input ) ;
        for ( ; input >= 80 ; ) {
            printf( "A !" ) ;
            break ;
        } for ( ; input >= 75 && input < 80 ; ) {
            printf( "B+ !" ) ;
            break ;
        } for ( ; input >= 70 && input < 75 ; ) {
            printf( "B !" ) ;
            break ;
        } for ( ; input >= 65 && input < 70 ; ) {
            printf( "C+ !" ) ;
            break ;
        } for ( ; input >= 60 && input < 65 ; ) {
            printf( "C !" ) ;
            break ;
        } for ( ; input >= 55 && input < 60 ; ) {
            printf( "D+ !" ) ;
            break;
        } for ( ; input >= 50 && input < 55 ; ) {
            printf( "D !" ) ;
            break ;
        } for ( ; input < 50 ; ) {
            printf( "F !" ) ;
            break ;
        }
    return 0 ;
}
