// #include <stdio.h>

// // User-defined function
// int add(int a, int b) {
//     return a + b;
// }

// int main() {

//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     int sum = add(num1, num2); // Calling the user-defined function
//     printf("Sum of %d and %d is %d\n", num1, num2, sum);
//     return 0;
// }

// Write a C program that propmts the user to enter a radius and then program displays the area

// # include <stdio.h>
// int main(){
//     float radius, area;
//     printf("Enter the radius: ");
//     scanf("%f", & radius);
//     if (radius > 0){
//         area = 3.142 * radius * radius;
//         printf("The area is %f", area);
//     }
//     else
//     printf("The radius must be greater than (0)");
//     return 0;

// }


// Write a C program to input price, quantity of an item from the user and display payment according to the following conditions.
// If total purchase(price * quantity) is greater than Ksh.1000 then calculate discount 15% otherwise discount 10% of total Ksh.

// # include <stdio.h>
// int main(){
//     float price, quantity, totalpurchase, discount;
//     printf("Enter the price Ksh: ");
//     scanf("%f", &price);
//     printf("Enter the quantity: ");
//     scanf("%f", &quantity);

//     totalpurchase = price * quantity;
//     if (totalpurchase > 1000){
//         discount = 0.15 * totalpurchase;
//     } else {
//         discount = 0.10 * totalpurchase;
//     }
//     printf("The Discount is %f\n", discount);
//     return 0;
// }


# include <stdio.h>
// constants
const float HIGH_DISCOUNT = 0.15; // 15% discount
const float LOW_DISCOUNT = 0.10; // 10% discount
const float THRESHOLD = 1000.0; // Threshold for high discount

// funtion validating the user input
int isValidInput(float *input){
    if (scanf("%f", input) != 1){
        return 0; // Inavlid input
    }
    return 1; // Valid input
}
// Function to calculate the discount
// float calculateDiscount(float totalPurchase){
//     if (totalPurchase > THRESHOLD){
//         return totalPurchase * HIGH_DISCOUNT;
//     } else {
//         return totalPurchase * LOW_DISCOUNT;
//     }
// }
// int main(){
//     // variables
//     float price, quantity, totalPurchase, discount;
//     // Prompt the user to enter the price
//     printf("Enter the price Ksh: ");
//     // Validate the user input
//     if (!isValidInput(&price)){
//         printf("Invalid input. Please enter a number.\n");
//         return 1; // Terminate the program with an error code
//     }
//     // Prompt the user to enter the quantity

//     printf("Please Enter the quantity: ");
//     if (!isValidInput(&quantity)) {
//     printf("Invalid input. Please enter a number.\n");
//     return 1; // Terminate the program with an error code
// }
//     // Calculate the total purchase
//     totalPurchase = price * quantity;
//     // Calculate the discount
//     discount = calculateDiscount(totalPurchase);
//     // Display the discount
//     printf("The discount is Ksh %.2f\n", discount);
//     return 0;
// }

// A program to display first 10 integers and their squares
#include <stdio.h>
int main(){
    printf("Number \t Square");
    printf("\n------ \t -------");
    int i = 10;
    for(i=0; i<=10; i++){
        printf("\n%d \t %d",i,i*i);
    }
    return 0;
}
