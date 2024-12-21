#include <stdio.h>
#include <string.h>

char* reverse( char str1[]) ;
int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
	printf( "" ) ;
	fgets( text, sizeof( text ), stdin ) ;
	text[ strcspn( text, "\n" ) ] = '\0' ;
    out = reverse( text ) ;
}//end function

char* reverse( char str1[] ) {
	char reverse [ 50 ] ;
	int length = strlen( str1 ) ;
	int i ;
	for( i = 0 ; i < length ; i++ ) {
		reverse[ i ] = str1[ length - 1 - i ] ;
	}
	printf( "" ) ;
	for( i = 0 ; i < length ; i++ ) {
		printf( "%c", reverse[ i ] ) ;
	}
	return 0 ;
}