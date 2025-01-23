#include <stdio.h>
#include <string.h>

void explode( const char str1[], const char splitter[], char str2[][10], int *count ) ;

int main() {
	char out[ 20 ][ 10 ] ;
	int num = 0 ;
	int i ;

    explode( "Hello World from me", " ", out, &num ) ;
	
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

void explode( const char str1[], const char splitter[], char str2[][10], int *count ) {
	char data[ 50 ] ;
	strcpy( data, str1 ) ;
	char *token = strtok( data, splitter ) ;
	while ( token != NULL ) {
		strcpy( str2[ *count ], token ) ;
		( *count ) ++ ;
		token = strtok( NULL, splitter ) ;
	}
}