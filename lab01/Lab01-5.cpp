#include <stdio.h>

int main() {
    int data[ 100 ][ 100 ] ; // ใช้หน่วยความจำสำหรับเมทริกซ์ขนาดใหญ่
    int m , n ;
    GetMatrix( data , &m , &n ) ;

    return 0 ;
}

void GetMatrix( int value[ 100 ][ 100 ] , int *row , int *col ) {
    printf( "Enter the number of rows: " ) ;
    scanf( "%d" , row ) ;

    printf( "Enter the number of columns: " ) ;
    scanf( "%d" , col ) ;

    // ตรวจสอบเงื่อนไขความถูกต้อง
    if ( *row < 0 || *col < 0 || ( *row == 0 && *col > 0 ) || ( *col == 0 && *row > 0 ) ) {
        printf( "Error: Invalid matrix dimensions.\n" ) ;
        return ;
    }

    if ( *row == 0 && *col == 0 ) {
        printf( "Matrix:\n(empty)\n" ) ;
        return;
    }

    // รับค่าของสมาชิกในเมทริกซ์
    printf( "Enter the matrix elements: " ) ;
    for ( int i = 0 ; i < *row ; i++ ) {
        for ( int j = 0; j < *col; j++ ) {
            scanf( "%d" , &value[ i ][ j ] ) ;
        }
    }

    // แสดงผลเมทริกซ์
    printf("Matrix (%dx%d):\n" , *row , *col ) ;
    for (int i = 0 ; i < *row ; i++ ) {
        for ( int j = 0 ; j < *col ; j++ ) {
            printf( "%d " , value[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }
}
