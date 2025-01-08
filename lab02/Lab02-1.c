/*
เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน reverse() ตามโปรโตไทป์ต่อไปนี้ เพื่อนำข้อความจาก str1 มากลับอักขระหน้าไปหลัง และเก็บไว้ใน str2
ตัวอย่างเช่น str1 = "I love you"
จะได้ str2 = "uoy evol I"
*/

#include <stdio.h>
#include <string.h>

void reverse( char str1[] , char str2[] ) {
    int textreal = strlen( str1 ) ; // หาความยาว

    for ( int i = 0 ; i < textreal ; i++ ) {
        str2[ i ] = str1[ textreal - 1 - i ] ;
    }
    str2[ textreal ] = '\0' ;
}

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;

    fgets( text , sizeof(text) , stdin ) ;
    text[ strcspn( text , "\n" ) ] = '\0' ;

    reverse( text , out ) ;
    printf( "Output: %s\n" , out ) ;

    return 0 ;
}//end function