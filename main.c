/* This program was made for the purpose of asking the user for the amount of numbers he wants in an array and then the numbers they want.
 * The program will then ask the user whether they want to know the sum, average, minimum or maximum value of the numbers they entered.
 *
 * Author: Angel Olvera
 * October 13, 2018
 * Mail: angelolvera00@gmail.com
 */
#include <stdio.h>

//Equation for the sum is declared
double sum(const double array[], int n){
    double sum=0;
    for(int i=0; i<n; i++){
        sum += array[i];
    }
    return sum;
}
//Equation for getting the average is declared
double average(double array[], int n){
    return sum(array, n)/n;
}
//Here, the program will get the minimum value out of all the values the user entered
double minimum(const double array[], int n){
    double minimum = array[0];

    for(int i=0; i < n; i++){
        if(minimum>array[i]){
            minimum=array[i];
        }
    }
    return minimum;
}
//Here, the program will get the maximum value out of all the values the user entered
double maximum(const double array[], int n){
    double maximum= array[0];

    for(int i=0;i<n;i++){
        if(maximum<array[i]){
            maximum=array[i];
        }
    }
    return maximum;
}
//The Menu where the options are shown
void MainMenu(){
    printf(" 1. Sum.\n 2. Average.\n 3. Minimum.\n 4. Maximum\n 5. Exit program.\n");
    printf("Select an option:" );
}
int main()
{
    //Declaration of variables
    int n;
    int selection;

    //Askinf the user for the amount of numbers they want. If a number is not entered, the program will crash
    printf("Enter size of array: ");// I aks the user for the amount of numbers he wants to input, if he enters anything other than numbers, the program will run, but nothing will be shown.
    scanf("%d", &n);

    double array[n];
    //Asking the user for the numbers. if a number is not entered, the program will crash
    printf("Enter %d elements in the array : ", n);//The user is asked to enter the numbers that they want.
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &array[i]);
    }
    //Loop for all the processes that the program will be doing until you tell it to stop
    do {
        MainMenu();
        scanf("%d", &selection);

        switch(selection){
            case 1:
                //Gives the sum of the array
                printf("The sum of the array is %lf\n", sum(array, n));
                break;
            case 2:
                //Gives the average of the array
                printf("The average of the array is %lf\n", average(array, n));
                break;
            case 3:
                //Gives the user the minimum value of the array
                printf("The minimum value is %lf\n", minimum(array, n));
                break;
            case 4:
                //Gives the user the maximum value of the array
                printf("The maximum value is %lf\n", maximum(array,n));
                break;
            case 5:
                //Ends the program
                printf("Shutting Down...");
                break;
            default:
                //If the user entered something other than one of the options, the user receives an error
                printf("Invalid\n");
                break;
        }
        //When the user enters a 5, the program will end.
    }while (selection != 5);

    return 0;
    }