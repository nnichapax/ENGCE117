#include <stdio.h>
#include <string.h>

struct student {
    char name [ 50 ] ;
    int age ;
} ;

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;

    GetStudent( children, &group ) ;

    for( int i = 0 ; i < group ; i++ ) {
        printf( "Room %d: 10 students entered.\n", i + 1) ;
    }
    return 0 ;
}//end function

void GetStudent( struct student child[][ 10 ], int *room )  {
    printf( "" ) ;
    scanf( "%d", room ) ;

    for( int i = 0 ; i < *room ; i++ ) {
        printf( "Room %d\n", i + 1 ) ;
        for( int j = 0 ; j < 10 ; j++ ) {
            printf( "Student %d: ", j + 1 ) ;
            scanf( " %[^,], Age: %d", child[i][j].name, &child[i][j].age ) ;//%[^,] เพื่ออ่านค่า , ก่อน
        }
    }
}