#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double rate;
};
void menu();
int main(){

struct Student student1;
strcpy(student1.name,"jhon");
strcpy(student1.major,"Computer science");
student1.age = 23;
student1.rate = 8.0;
struct Student student2;
strcpy(student2.name,"Ana");
strcpy(student2.major,"Arts");
student2.age = 20;
student2.rate = 10.0;





return 0;
}
void menu(Student){
    int opc = 0;
printf("Enter the number of the student you want: ");
scanf("%d",&opc);


if(opc==1){
    printf("Enter the information abou the student: \n");
    printf("1 - Name \n");
    printf("2 - Major \n");
    printf("3 - age \n");
    printf("4 - grades \n");

    scanf("%d",&opc);

    switch (opc)
    {
     case 1:
        printf("THe name of the student is: %s",student1.name);
        break;
     
     case 2:
         printf("The major of the student is: %s",student1.major);
        break;    
     case 3:
        printf("The name of the student is: %d",student1.age);
        break;
     case 4:
         printf("THe grade of the student is: %f",student1.rate);
        break;    
    default:
        printf("Opção inválida!");
        break;
    }

}else if(opc==2){
    printf("Enter the information abou the student: \n");
    printf("1 - Name \n");
    printf("2 - Major \n");
    printf("3 - age \n");
    printf("4 - grades \n");

    scanf("%d",&opc);

    switch (opc)
    {
     case 1:
        printf("The name of the student is: %s",student2.name);
        break;
     
     case 2:
        printf("The major of the student is: %s",student2.major);
        break;    
     case 3:
        printf("The name of the student is: %d",student2.age);
        break;
     case 4:
        printf("THe grade of the student is: %f",student2.rate);
        break;    
    default:
        printf("Opção inválida!");
        break;
    }
    }
}