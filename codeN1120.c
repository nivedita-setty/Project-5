// Use C-Lang Static Analyzer to analyze and fix the bugs
// Also review the output generated to find any bugs that the static analyzer misses.
// Hint this code has 2-3 bugs that can be identified using static analyzer, 2 Tasks will have to be completed
//1.. add null pointer check condition for ptr1 in the reverse method for reversing logic.
//2.. Complete reversing Logic using given pointer.

//MACROS
#include<stdio.h>

// custom method to reverse a number (without using third variable/pointer) passed to it as arguments from main()
void reverse_number(int *ptr1, char* ptr2){
    int reverse = 0; //will be used as reversing variable.
    printf("Original First Number is : %d \n ", (*ptr1));
    printf("Choice is : %c \n ", (*ptr2));

    // ----------------------- Secure Coding Task -------------------------------////
    // Task 1: Implement a NULL pointer check condition (use if statment) (most important secure coding practice)

    // ------  add null pointer check condition for ptr1 Here-------
if(ptr1 != NULL && ptr2 !=NULL)
{
 printf("\n Pointers are valid");
}
else
{
printf("NULL pointer detected");
}
    if(*ptr2 == 'Y' && ptr2 != NULL)
    {
        //Task 2 : complete logic for reversing a number (Hint: required statements 2)
        //----- add logic here ------
        while(*ptr1 > 0)
        {
          reverse = *ptr1%10 + reverse*10;
	  *ptr1 = *ptr1/10;  //add reversing logic here using ptr1 (which points to the first_number defined in main)
        }
        *ptr1=reverse;
        //print statements
        printf("\nReversed First Number is : %d \n", (*ptr1));
//        printf("Confirmed choice is : %c \n", (*ptr2));
    }
    else{
        printf("Sorry Not allowed\n");
    }

}

int main(){
    // variable initializations
    int first_number = 2811;
    char choice = 'Y';

    //Note for developers(students): use variables in method using defined pointers (not directly)

    int* ptr_to_first_number = NULL;
    char *ptr_to_char = NULL;
    // Hint:: add and assign the references to the pointers here:

    ptr_to_first_number = &first_number;
    ptr_to_char = &choice;
    //function call statements
    reverse_number(ptr_to_first_number, ptr_to_char);

    return 0;

}
