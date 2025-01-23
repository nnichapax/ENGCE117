#include <stdio.h>
#include <stdlib.h>

void go( int ***p, int **z ) ;

int main() {
    int *b = new int ; *b = 10; // กำหนดค่าให้ b
    int *c = new int ; *c = 20; // กำหนดค่าให้ c
    int **a;  // ตัวชี้สองระดับใน main
	
    go( &a, &b ) ;
    printf( "%d %p %p %p \n", **a, *a, a, &a ) ;
    go( &a, &c ) ;
    printf( "%d %p %p %p \n", **a, *a, a, &a ) ;
    return 0 ;
}//end function

void go( int ***p, int **z ) {
	*p = z ;
    // printf( "%d %p %p %p \n", ***p, **p, *p, p ) ;
}