#include <stdio.h>
#include <stdlib.h>

void GetMatrix( int value[], int *m, int *n ) ;

int main() {
    int *data, m, n ;
    data = ( int * )malloc( ( m ) * ( n ) * sizeof(int) ) ;
    GetMatrix( data, &m, &n ) ;
    return 0 ;
}//end function

void GetMatrix( int value[], int *m, int *n ) {
    char space ;

    printf( "Enter the number of rows: " ) ;
    scanf( "%d", m ) ;

    printf( "Enter the number of columns: " ) ;
    scanf( "%d", n ) ;    

    if( *m == 0 && *n == 0 ) {
        printf( "Matrix:\n(empty)" ) ;
    } else if( *m == 0 && *n != 0 || *n == 0 && *m != 0 ) {
        printf( "Error: Invalid matrix dimensions." ) ;
    } else {
        printf( "Enter Enter the matrix elements: " ) ; //input
         for( int i = 0 ; i < *m ; i++ ) {
            for( int j = 0 ; j < *n ; j++ ) {
                scanf("%d" , &value [ i * ( *n ) + j ] ) ;
                space = getchar() ; //เอาไว้เก็บ /n
                if ( space == '\n' && j != *n - 1 ) {
                    printf( "Error: Incorrect number of elements." ) ;
                    exit( 1 ) ;
                }//end if เช็คว่ากรอกครบหรือยัง
            }//end for columns
        }//end for rows

        printf( "Matrix ( %d x %d )\n" , *m , *n ) ; //output
        for( int i = 0 ; i < *m ; i++ ) {
            for( int j = 0 ; j < *n ; j++ ) {
                printf( "%d " , value [ i * *n + j ] ) ;
            }//end for columns
            printf( "\n" ) ;
        }//end for rows
    }//end else    
}