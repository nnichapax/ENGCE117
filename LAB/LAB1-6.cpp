#include <stdio.h>
#include <stdlib.h>

int *GetMatrix( int *m, int *n ) ;

int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;
    return 0 ;
}//end function

int *GetMatrix( int *m, int *n ) {
    int *data ;
    data = ( int * )malloc( ( *m ) * ( *n ) * sizeof(int) ) ;
    char space ;

    printf( "" ) ;
    scanf( "%d %d", m, n ) ;

    printf( "" ) ;
    for( int i = 0 ; i < *m ; i++ ) {
        for( int j = 0 ; j < *n ; j++ ) {
            scanf( "%d" , &data[ i * *n + j ] ) ;
            space = getchar() ; //เอาไว้เก็บ /n
            if ( space == '\n' && j != *n - 1 ) {
                printf( "Error: Invalid matrix input" ) ;
                exit( 1 ) ;
            }//end if เช็คว่ากรอกครบหรือยัง
        }//end for columns
    }//end for rows

    if( *m != 0 && *n != 0 ) {
        printf( "Enter number of rows and columns: %d %d\n" , *m , *n ) ;
        printf( "Enter matrix elements: \n" ) ;
        for( int i = 0 ; i < *m ; i++ ) {
            for( int j = 0 ; j < *n ; j++ ) {
                printf("%d " , data [ i * *n + j ] ) ;
            }
            printf( "\n" ) ;
        } 
    } else{
        printf( "Enter number of rows and columns: %d %d\n" , *m , *n ) ;
        }
    return 0 ;
}