/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ของการหาค่า Factorial โดยมีสูตรในการหาค่า n! = n x (n-1)!
    (! = factorial)
    (จงเขียนโปรแกรมในข้อนี้โดยห้ามใช้ For Loop)
    
    Test case:
        5
    Output:
        5! = 5 x 4 x 3 x 2 x 1
        5! = 120

    Test case:
        8
    Output:
        8! = 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1
        8! = 120

*/
#include <stdio.h>

int main() {
    int num , result = 1 , temp ;

    printf("Enter number: ") ;
    scanf( "%d" , &num ) ;
    printf( "%d! = " , num ) ;

    temp = num ;
    while ( temp > 1 ) {
        printf( "%d x " , temp) ;
        result *= temp ; // คูณสะสมค่า
        temp-- ;
    }
    printf( "1\n" ) ; // แสดงตัวสุดท้าย

    printf( "%d! = %d\n" , num , result ) ; 

    return 0 ;
}
