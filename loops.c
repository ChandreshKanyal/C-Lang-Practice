/* here are 3 types of loop in C programming.
1. for loop
2. while loop
3. do while loop
Although, all types of loop do basically the same thing and any function
can be made through any kind of loop, the one difference they have
is the difference in their syntax */

/*Syntax for 'for loop':
for(initialisation;condition;updation) {
do something
}
*/

//CODE FOR PRINTING 100 TO 0//

/*# include <stdio.h>
int main(){

    for(int i=100;i>=0;i=i-1) {
        printf("%d\n",i);
    }
return 0;    
}*/
// 'i' is called iterator or counter variable//

//CODE FOR PRINTING 0 TO 10 USING FOR LOOP//

/*
#include <stdio.h>

int main() {
    for(int i=0;i<=10;i++){
        printf("%d\n", i);
    }
return 0;
  
}
*/

/* Syntax for while loop

while(condition){
    do something  
}

CODE FOR PRINTING NUMBERS FROM 1 TO 100
*/
/*
#include<stdio.h>
int i=1;
int main() {
    while(i<=100){
    printf("%d\n", i);
    i++;}
return 0;    
}
*/

//PRINT THE NUMBERS FROM 0 TO N, IF N IS GIVEN BY THE USER//
/*
#include<stdio.h>
int main() {
    int i,n;
    i=0;
    printf("Please enter the number\n");
    scanf("%d", &n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/

//SYNTAX FOR DO WHILE LOOP//
/*
do{
    do something
} while(condition);
*/

//PRINT THE SUM OF N NATURAL NUMBERS//

#include<stdio.h>
int main() {
    int i=0;
    int n;
    int sum=0;
    printf("Please enter the number\n");
    scanf("%d", &n);
    do{
        i++;
        sum= sum+i;
        
    } while(i<n);
printf("%d\n",sum);

    do{
        i--;
        printf("%d\n",i);
    } while(i>0);

return 0;
}