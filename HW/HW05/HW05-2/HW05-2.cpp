/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>

int main() {
    int a , b , c ;

    scanf( "Input[1] : %d" , &a ) ;
    scanf( "Input[2] : %d" , &b ) ;
    scanf( "Input[3] : %d" , &c ) ;

    if ( a >= b && a >= c ) {

        if ( b >= c ) {
            printf( "%d %d %d" , a , b , c ) ;
        } else {
            printf( "%d %d %d" , a , c , b ) ;
        }
    } else if ( b >= a && b >= c ) {
        if ( a >= c ) {
            printf( "%d %d %d" , b , a , c ) ;
        } else {
            printf( "%d %d %d" , b , c , a ) ;
        }
    } else {
        if ( a >= b ) {
            printf( "%d %d %d" , c , a , b ) ;
        } else {
            printf( "%d %d %d" , c , b , a ) ;
        }
    }

    return 0 ;
}
