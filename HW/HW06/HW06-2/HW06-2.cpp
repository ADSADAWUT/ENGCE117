/*
    ผู้ใช้กรอกตัวเลขเข้ามาในระบบ และให้คุณแปลงตัวเลขดังกล่าวให้เป็นตัวเลขโรมัน
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)

    Test case:
        8
    Output:
        8 = VIII

    Test case:
        4
    Output:
        4 = IV

    Test case:
        514
    Output:
        514 = DXIV

    Test case:
        929
    Output:
        929 = CMXXIX

*/
#include <stdio.h>

void Roman(int number) {
    int   fuckRoman  [] = { 1000 , 900 , 500 , 400 ,  100 ,  90 ,  50 ,   40 ,   10 ,   9 ,   5 ,   4 ,    1  } ;
    char *RomanNumber[] = { "M" , "CM" , "D" , "CD" , "C" , "XC" , "L" , "XL" , "X" , "IX" , "V" , "IV" , "I" } ;

    printf( "%d = " , number ) ;

    for  (int i = 0 ; i < 13 ; i++ ) {
        int repeat = number / fuckRoman[i] ;
        for (int j = 0; j < repeat; j++) { 
            printf("%s", RomanNumber[i]) ;
        }
        number -= repeat * fuckRoman[i] ;
    }
    printf( "\n" ) ;
}

int main() {
    int number ;

    printf( "Enter a number: " ) ;
    scanf( "%d" , &number ) ;
    Roman( number ) ;

    return 0 ;
}
