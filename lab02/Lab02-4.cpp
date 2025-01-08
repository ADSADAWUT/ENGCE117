#include <stdio.h>
#include <string.h>

void explode( char str1[] , char splitter[] , char str2[][10] , int *count ) {
    char *token = strtok( str1 , splitter ) ; 
    while ( token ) { 
        strcpy( str2[ (*count)++ ] , token ) ; 
        token = strtok( NULL , splitter ) ; 
    }
}

int main() {
    char input[100] , output[100][10] , splitter[100] ;
    int num = 0 ;

    printf( "Enter text: " ) ;
    fgets( input , sizeof(input) , stdin ) ; 
    printf( "Enter splitter: " ) ;
    fgets( splitter , sizeof( splitter ) , stdin ) ;
    int[ strcspn( input , "\n" ) ] = '\0' ; // ลบตัวอักษร (\n) ที่ fgets
    splitter[ strcspn( splitter , "\n" ) ] = '\0' ;

    explode( input , splitter , output , &num ) ;  // เรียกใช้ฟังก์ชัน explode

    for ( int i = 0; i < num; i++ ) {
        printf( "str2[%d] = \"%s\"\n" , i , output[ i ] ) ;
        printf( "count = %d\n", num ) ;
    }
    return 0 ;
}
