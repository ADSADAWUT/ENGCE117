#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
} ;

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    GetStudent( children, &group ) ;
    return 0 ;
}//end function

void GetStudent( struct student child[][ 10 ], int *room ) {
    scanf("%d", room); // รับจำนวนห้องเรียน
    for (int i = 0 ; i < *room ; i++ ) { // ลูปตามจำนวนห้องเรียน
        printf("Room %d:\n", i + 1 ) ;
        for (int j = 0 ; j < 10 ; j++ ) { // ห้องละ 10 คน
            printf( "Student %d: " , j + 1 ) ;
            scanf( "%s" , child[i][j].name ) ; // รับชื่อ
            printf( "Age: " ) ;
            scanf( "%d" , &child[i][j].age ) ; // รับอายุ
        }
        printf( "Room %d: 10 students entered.\n", i + 1 );
    }
}