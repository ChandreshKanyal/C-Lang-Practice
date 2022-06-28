#include <stdio.h>

 int main()
 {
     int choice, choice1,choice2,age,lr,lr1,p;
     float v1,v2,cc1,cc2,cc3,cc4,cc5,c21;

     printf("Choose the operator you would like to see in use today\n");
     printf(" 1. Basic calculator\n 2. Eligibility checker\n 3. Bitwise operator\n ");

     scanf("%d", &choice);
     printf("Your choice is: %d\n", choice);

     if (choice ==1) {


         printf("Kindly input two variables between which you want to perform operation\n");

         scanf("%f\n", &v1);
         scanf("%f", &v2);

         printf("Welcome to a basic calculator\n");
         printf("What kind of operation would you like to perform today\n");
         printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
         scanf("%d", &choice1);

         if (choice1==1) {
             cc1= v1+v2;
             printf("Your addition is: %f", cc1);
         }

         else if (choice1==2) {
             cc2= v2-v1;
             printf("Your subrtraction is: %f", cc2);
         }

         else if (choice1==3) {
             cc3= v1*v2;
             printf("Your multiplication is: %f", cc3);
         }

         else if (choice1==4) {
             cc4= v1/v2;
             printf("Your division is : %f", cc4);
         }

         else {
             printf("Kindly input a value between 1 and 5");
         }


     }

     else if (choice==2) {
         printf("Welcome to eligibility checker\n");
         printf("Please enter your age in years\n");
         scanf("%d", &age);

         if (age<18 && age==16) {
             printf("You are a minor and are not eligible for the following:\n 1. Driver's license\n 2. Voter ID\n 3. Independent bank account\n 4. No entry into clubs\n But you can apply for a learners' license and drive electric 2 wheelers\n");
         }

         else if (age<18) {
             printf("You are a minor and are not eligible for the following:\n 1. Driver's license\n 2. Learner's license\n 3. Voter ID\n 4. Independent bank account\n 5. No entry to clubs\n");
         }

         else if (age>=18 && age <21 || age!=21) {
             printf("Copngratulation! You are an adult and may apply for any documents, but are not old enough to get an entry in a club\n");
         }

         else if (age>=21) {
             printf("Copngratulation! You are an adult!!\n");
         }

         else {
             printf("Please enter a valid input (age in intger)\n");
         }

     }

     else if (choice==3) {
         printf("Welcome to Binary Left and Right shift operator program\n");

         printf("Kindly enter the number you want to perform the operation on\n");
         scanf("%d", &lr);

         printf("Kindly enter by how much units you want to shift the number\n");
         scanf("%d", &lr1);

         printf("Kindly enter which side you want to shift your number\n 1. Right\n 2. Left\n");
         scanf("%d", &choice2);

         if(choice2==1) {
             p=lr>>lr1;
             printf("%d", p);
         }

         else if (choice2==2) {
             p=lr<<lr1;
             printf("%d", p);
         }

         else {
             printf("Kindly choose from left and right");
         }



     }
     else {
         printf("Kindly input a proper character.");
     }  


 return 0;
     }