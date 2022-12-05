#include <string.h>
#include <stdio.h>
void show();
struct student{
    int rollno;
    char name[100];
};

int main(){
    struct student s1;
    struct student s2;
    struct student s3;

    strcpy(s1.name,"abc");

    // 
    printf("Enter Roll no: ");
    scanf("%d",&s1.rollno);


    strcpy(s2.name,"def");
    printf("Enter Roll no: ");
    scanf("%d",&s2.rollno);
    
    strcpy(s3.name,"abc");
    printf("Enter Roll no: ");
    scanf("%d",&s3.rollno);
// 
    printf("%s\t",s1.name);
    printf("%d\n",s1.rollno);
    // 
    printf("%s\t",s2.name);
    printf("%d\n",s2.rollno);

    // 
    printf("%s\t",s3.name);
    printf("%d\n",s3.rollno);

// 
return 0;
}