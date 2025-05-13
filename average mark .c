#include <stdio.h>

int main()
{
    float average;
    char grade;
   printf("Enter average marks:");
   scanf("%f",& average);
   if(average>=90){
       grade='A';
   } else
   if(average>=80){
       grade='B';
   }else
   if(average>=70){
       grade='c';
   }else
   if(average>=60){
       grade='D';
   }else{
       grade='f';
       }
       printf("grade:%c\n",grade);
    return 0;
}
