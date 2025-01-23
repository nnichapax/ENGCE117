#include <stdio.h>

int GetSet( int *Array[] ) ;

int main() {
    int *data[888], num ;
    num = GetSet( data ) ;
    return 0 ;
}//end function

int GetSet( int *Array[] ) {

    int num ;

    printf( "Enter the number of elements: " ) ;
    scanf( "%d", &num ) ;

    printf( "Enter the elements : " ) ;
    for ( int i = 0 ; i < num ; i++ ) {
        scanf( "%d" , &Array[ i ] ) ;
    }

    printf( "Number of elements: %d\n", num ) ;
    for ( int i = 0 ; i < num ; i++ ) {
        printf( "%d " , Array[ i ] ) ;
    }//end for แสดงค่า

    return 0 ;
}//end GetSet