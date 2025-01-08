#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[ 20 ] ;
    int age ;
} ;

struct student (*GetStudent( int *room ) )[ 10 ] ;

int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    return 0 ;
}//end function

struct student (*GetStudent( int *room ) )[ 10 ] {
    scanf( "%d" , room ) ; // รับจำนวนห้องเรียน
    struct student (*students)[10] = malloc(*room * sizeof(*students));
    for (int i = 0 ; i < *room ; i++ ) { // ลูปตามจำนวนห้องเรียน
        printf("Room %d:\n", i + 1 ) ;
        for (int j = 0 ; j < 10 ; j++ ) { // ห้องละ 10 คน
            printf( "Student %d: " , j + 1 ) ;
            scanf( "%s" , students[i][j].name ) ; // รับชื่อ
            printf( "Age: " ) ;
            scanf( "%d" , &students[i][j].age ) ; // รับอายุ
        }
        printf( "Room %d: 10 students entered.\n", i + 1 ) ;
    }
}