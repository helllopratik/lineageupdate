#include <stdio.h>

int main(){
    FILE *fptr;
    char name[100];
    int age;
    float salary;
    fptr = fopen("note.txt","w");
    if(fptr == NULL){
        printf("File Does not exist\n");
        return 0;
    }
    printf("\nEnter the name: ");
    scanf("%s",name);
    fprintf(fptr,"name = %s\n",name);
    printf("\nEnter age for %S: ",name);
    scanf("%d",&age);
    fprintf(fptr,"age = %d\n",age);
    printf("\nEnter the salary for name:%s -> ",name);
    scanf("%f",&salary);
    fprintf(fptr,"salary = %f\n",salary);
    fclose(fptr);




    return 0;
}