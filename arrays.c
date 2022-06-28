//ARRAYS//
/* Arryas is a collection of similar data types stored at 
contiguous (continuous) memory locations*/

//Store values of three students//

/*#include<stdio.h>

int main(){
    int marks[3];
    printf("Enter physics");
    scanf("%d",&marks[0]);

    printf("enter chemistry");
    scanf("%d", &marks[1]);

    printf("Enter Mathematics");
    scanf("%d", &marks[2]);

    printf("phy=%d, chem=%d, mathematics=%d", marks[0],marks[1],marks[2]);

    return 0;

}*/

//WRITE A PROGRAM TO ENTER PRICE OF 3 ITEMS AND PRINT THEIR FINAL COST WITH GST//

/*#include<stdio.h>

int main() {
    float price[3];
    printf("Enter 3 prices\n");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Total price 1:%.2f\n", price[0]+(0.18*price[0]));
    printf("Total price 2:%.2f\n", price[1]+(0.18*price[1]));
    printf("Total price 3:%.2f\n", price[2]+(0.18*price[2]));
    return 0;

}*/

//POINTER ARITHMETIC//

/*Pointer can be incremented and decremented,
increment or decerement in pointer will increase or decrease 
by the data type. For eg, there is an  integer variable x=10 which is stored in 
a memory location 2000, since the datatype is am integer and we know that the 
space occuipied by an integer is 4 bytes, hence, when we point the location
of variable x, or, increase the pointer value by 1, it will be increased by
4, that is, its memory location will be changed from 2000 to 2000+4=2004.
Similarly, the decrement functioon works the same. Now, suppose the datatype is 
a char(character) and we increase of decrease the value by 1, there will be an 
increase of decrease by 1 as the space occupied by a char datatype is 1.

1. We can also subtract one pointer from another
2. We can also comapre 2 pointers
*/

#include<stdio.h>

int main() {
    int age = 22;
    int age1 = 29;

    int*ptr= &age;
    int * ptr1 = &age1;
    

    printf("The differene is:%u",ptr-ptr1);
    return 0;
}