#include <stdio.h>

int main(){

    int num ;
    int i ;

    printf( "pls enter number : " ) ;
    scanf( "%d", &num ) ;

    for( i = 1 ; i <= num ; i++ )
        printf( "[%d] Hello World\n", i ) ;

    return 0 ;
}//end function