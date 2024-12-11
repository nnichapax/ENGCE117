#include <stdio.h>
#include <string.h>

void GetSet( int data[], int *num ) ;

int main() {
    int *data, num ;

    int *t ;
    t = new int [ num * *data ] ;
    
    GetSet( data, &num ) ;//for call function
    return 0 ;
}//end function

//function GetSet
void GetSet( int data[], int *num ) {
    scanf( "%d", num ) ; //input the number

    int i ;

    for( i = 0 ; i < *num ; i++ ) { //input each value  
        scanf( "%d", &data[i] ) ;    
    }
}