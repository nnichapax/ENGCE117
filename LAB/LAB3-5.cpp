#include <stdio.h>

struct student (*GetStudent( int *room ) )[ 10 ] ;
int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    return 0 ;
}//end function#include <stdio.h>

struct student {
    char name[20];
    int age;
};

// ฟังก์ชัน GetStudent ที่รับจำนวนห้องเรียนและข้อมูลนักเรียน
struct student (*GetStudent(int *room))[10];

int main() {
    struct student (*children)[10];  // ตัวแปร children เก็บข้อมูลนักเรียนในแต่ละห้อง
    int group;
    
    // เรียกฟังก์ชัน GetStudent เพื่อรับข้อมูลนักเรียน
    children = GetStudent(&group);
    
    return 0;
}

// ฟังก์ชัน GetStudent รับจำนวนห้องเรียนและข้อมูลนักเรียน
struct student (*GetStudent(int *room))[10] {
    static struct student children[20][10];  // กำหนดห้องเรียนสูงสุด 20 ห้อง และแต่ละห้องมีนักเรียน 10 คน
    int i, j;
    
    // รับจำนวนห้องเรียน
    printf("Enter number of rooms: ");
    scanf("%d", room);
    
    // รับข้อมูลนักเรียนในแต่ละห้อง
    for (i = 0; i < *room; i++) {
        printf("Room %d:\n", i + 1);
        for (j = 0; j < 10; j++) {
            printf("Student %d: ", j + 1);
            printf("Enter name: ");
            scanf("%s", children[i][j].name);  // รับชื่อนักเรียน
            printf("Enter age: ");
            scanf("%d", &children[i][j].age);  // รับอายุ
        }
        printf("Room %d: 10 students entered.\n", i + 1);
    }
    
    return children;  // ส่งคืนข้อมูลของนักเรียนในห้องเรียน
}