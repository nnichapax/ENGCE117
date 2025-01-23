#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void upgrade( struct student child ) ;

int main() {
    struct student user ;
    user.sex = 'F' ;
    user.gpa = 3.90 ;
    upgrade( user ) ;
    return 0 ;
}//end function

void upgrade( struct student child ) {
    if( child.gpa == 0 ) {
        printf( "sex = '%c', gpa = %.2f", child.sex, child.gpa ) ;
    } else if( child.gpa == 4 ) {
        printf( "sex = '%c', gpa = %.2f", child.sex, child.gpa ) ;
    } else {
        if( child.sex == 'M' ) {
            child.gpa = ( child.gpa * 0.1 ) + child.gpa ;
        } else if( child.sex == 'F' ) {
            child.gpa = ( child.gpa * 0.2 ) + child.gpa ;
        } else {

        }
        printf( "sex = '%c', gpa = %.2f", child.sex, child.gpa ) ;
    }
}