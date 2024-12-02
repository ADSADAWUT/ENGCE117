/*
    ผู้ใช้กรอกตัวเลข 3 จำนวน และให้คุณระบุอันดับของแต่ละหมายเลข พร้อมกับระบุจำนวนที่มากที่สุด

    Test case:
        12 25 52

    Output:
        1st Number = 12
        2nd Number = 25
        3rd Number = 52
        The 3rd Number is the greatest among three

    Test case:
        89 54 72

    Output:
        1st Number = 89
        2nd Number = 54
        3rd Number = 72
        The 1rd Number is the greatest among three

*/
#include <stdio.h>

int main() {
    int num1 , num2 , num3 , max , maxindex ;

    printf( "Enter three numbers: " ) ;
    scanf( "%d %d %d" , &num1 , &num2 , &num3 ) ;

    printf( "1st Number = %d\n" , num1 ) ;
    printf( "2nd Number = %d\n" , num2 ) ;
    printf( "3rd Number = %d\n" , num3 ) ;

    max = num1 ;
    maxindex = 1 ;

    if ( num2 > max ) {
        max = num2 ;
        maxindex = 2 ;
    }
    if ( num3 > max ) {
        max = num3 ;
        maxindex = 3 ;
    }

    printf( "The %d%s Number is the greatest among three\n" , maxindex , ( maxindex == 1 ) ? "st" : ( maxindex == 2 ) ? "nd" : "rd" ) ;

    return 0 ;
}
