#include<stdio.h>
#include<stdlib.h>
int main()
{
      
    char name[100]={0};
    int age;
    
    printf("Name:");
    scanf("%[^\n]s",name);
     
    printf("Age:",age);
    scanf("%d",&age);
    
    if(age>=18)
    
 {
    printf("\nYour age is Eligible for voting \n",age);
 
 } else
 {
    printf("\nYou are not Eligible for voting \n",age);
 }
    return 0;
}