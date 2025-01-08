/*เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน reverse() ตามโปรโตไทป์ต่อไปนี้ เพื่อนำข้อความจาก str1 มากลับอักขระหน้าไปหลัง และเก็บไว้ใน str2
ตัวอย่างเช่น str1 = "I love you"
จะได้ str2 = "uoy evol I"
*/

#include <stdio.h>

int main() {
    char out[ 20 ][ 10 ] ;
    int num ;

    explode( "I/Love/You" , '/' , out , &num ) ;
    for ( int i = 0 ; i < num; i++ ) {
        printf( "str2[%d] = \"%s\"\n" , i , out[ i ] ) ;
    }
    printf( "count = %d\n" , num ) ;

    return 0 ;

}//end function

void explode( char str1[] , char splitter , char str2[][ 10 ] , int *count ) {
     int i = 0 , j = 0 , k = 0 ;
    *count = 0 ;

    while ( str1[i] != '\0' ) {
        if ( str1[i] == splitter ) { // ถ้าพบตัวแบ่ง
            if ( j > 0 ) { // ถ้าคำปัจจุบันไม่ว่าง
                str2[ k ][ j ] = '\0' ;
                k++ ;
                j = 0 ;
            }
        } else {
            if (j < 9) {
                str2[ k ][ j++ ] = str1[ i ] ;
            }
        }
        i++ ;
    }
    if ( j > 0 ) {
        str2[ k ][ j ] = '\0' ;
        k++ ;
    }
    *count = k ;
}