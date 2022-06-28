//Addition of elements of array

/*#include<stdio.h>

int main() {
    int n, sum=0;
    
    printf("Enter the number of elements you want in your array\n");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d\n", i);
        scanf("%d", &arr[i]);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
       printf("The element %d is: %d\n", i, arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
       sum = sum + arr[i];
    }

    printf("The sum of the elements of the array is:%d\n", sum);

    return 0;

}*/

//How to find the largest element in an array?

/*#include<stdio.h>


int main(){
    int n;
    
    printf("Enter the number of elements you want in your array:\n");
    scanf("%d", &n );
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d:", i);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    
    

    int largest_num = arr[0];

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > largest_num)
        {
            largest_num = arr[i];
        }
        else{};
    }

    printf("The largest element in the array is: %d", largest_num);
    printf("\nThank you!");

    return 0;
}*/