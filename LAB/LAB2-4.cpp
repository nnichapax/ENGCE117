#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter[], char str2[][10], int *count ) ;

int main() {
	char out[ 20 ][ 10 ] ;
	int num = 0 ;
	int i ;
	char ggg[100] ;
	char splitter[100] ;

	printf( "str1 = " ) ;
	fgets( ggg, sizeof( ggg ), stdin ) ;
	ggg[ strcspn( ggg, "\n" ) ] = '\0' ;
	printf( "splitters = " ) ;	
	fgets( splitter, sizeof( splitter ), stdin ) ;
	splitter[ strcspn( splitter, "\n" ) ] = '\0' ;
    explode( ggg , splitter, out, &num ) ;
	
	for( i = 0 ; i < num ; i++ ) {
		printf( "str2[%d] = \"%s\"\n", i, out[ i ] ) ;
	}
	if( num != 0 ) {
		printf( "count = %d", num ) ;
	} else {
		printf( "count = 0" ) ;
	}
    return 0 ;
}//end function

void explode( char str1[], char splitter[], char str2[][10], int *count ) {
	char *token = strtok( str1, splitter ) ;
	while( token != NULL ) {
		strcpy( str2[ *count ], token ) ;
		( *count ) ++ ;
        token = strtok( NULL, splitter ) ;
	}
}