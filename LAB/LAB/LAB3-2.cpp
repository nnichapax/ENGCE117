#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void upgrade( struct student *child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 4.00 ;
    upgrade( &aboy ) ;
    printf( "%.2f", aboy.gpa ) ;
    return 0 ;
}//end function

void upgrade( struct student *child ) {
    if( child->gpa == 0 ) {

    }else if( child->gpa >= 4.00 ) {
        return ;
    }
    if( child->sex == 'M' ) {
        child->gpa *= 1.10 ;// เพิ่ม GPA 10% สำหรับเพศชาย
    }
    else if( child->sex == 'F' ) {
        child->gpa *= 1.20 ;// เพิ่ม GPA 20% สำหรับเพศหญิง
    }
    else{
        
    }
}