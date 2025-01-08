/*เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน reverse() ตามโปรโตไทป์ต่อไปนี้ เพื่อนำข้อความจาก str1 มากลับอักขระหน้าไปหลัง และเก็บไว้ใน str2
ตัวอย่างเช่น str1 = "I love you"
จะได้ str2 = "uoy evol I"
*/

#include <stdio.h>

int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;

    fgets( text , sizeof(text) , stdin ) ;
    text[ strcspn( text , "\n" ) ] = '\0' ;

    out = reverse( text ) ;
    printf( "Output: %s\n" , out ) ;
}//end function

char* reverse( char str1[] ) {
    static char reverse [ 50 ] ;
    int textreal = strlen( str1 ) ;

    for ( int i = 0 ; i < textreal ; i++ ) {
        reverse[ i ] = str1[ textreal - 1 - i ] ; 
    }
    return reverse ;
}