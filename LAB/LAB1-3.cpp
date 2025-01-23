#include <stdio.h>

int *GetSet( int *num ) ;

int main() {
    
    int *data, num ;    // ขอรับจำนวนสมาชิกในเซต

    data = GetSet( &num ) ;
    
    return 0 ;
}//end function
int *GetSet( int *num ) {
    int array [ 888 ] ;
    // ขอรับจำนวนสมาชิกในเซต
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", num ) ;

    printf( "Enter the elements: " ) ;
    for ( int i = 0 ; i < *num ; i++ ) {
        scanf( "%d", &array[i] ) ;
    }

    printf( "Number of elements: %d\n", *num ) ;
    for ( int i = 0 ; i < *num ; i++ ) {
        printf( "%d ", array[i] ) ;
    }
    printf( "\n" ) ;

    return 0 ;
}