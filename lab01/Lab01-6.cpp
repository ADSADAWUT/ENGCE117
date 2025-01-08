#include <stdio.h>

int main() {
    int *data , m , n ;
    data = GetMatrix( &m , &n ) ;
    return 0 ;
}

int *GetMatrix(int *row, int *col) {
    static int matrix[ 100 ][ 100 ] ; // ใช้ static array สำหรับเก็บข้อมูลเมทริกซ์

    scanf( "%d %d" , row , col ) ;

    if ( *row <= 0 || *col <= 0 ) {
        printf( "Error: Invalid matrix dimensions.\n" ) ;
        return NULL ;
    }

    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            scanf( "%d" , &matrix[ i ][ j ] ) ; // รับค่าของสมาชิกในเมทริกซ์
        }
    }

    // แสดงผลเมทริกซ์
    printf( "Enter number of rows and columns: %d %d\n" , *row , *col ) ;
    printf( "Enter matrix elements: \n" ) ;
    for ( int i = 0; i < *row; i++ ) {
        for ( int j = 0; j < *col; j++ ) {
            printf( "%d " , matrix[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }

    return &matrix[ 0 ][ 0 ] ; // คืนค่าพอยน์เตอร์ไปยังเมทริกซ์
}
