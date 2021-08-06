#include<stdio.h>
//POINTERS AS FUNCTION ARGUMENTS
/*
void Increment(int* p){
    *p = *p+1;
    printf("Address of variable a in increment = %d\n", p);
}

 * int main() {
    int a;
    a = 10;
    printf("a = %d\n", a);
    Increment(&a);
    printf("The address of the variable in main is = %d\n", &a);
    printf("a = %d\n", a);
}*/

/*
//POINTERS AND ARRAYS
int main() {
    int A[] = {2,4,5,8,1};
    printf("%d\n", A); //A is the base address, it can be used to access the first element of the array
    printf("%d\n", &A[0]);
    printf("%d\n", A[0]);
    printf("%d\n", *A);

    printf("here comes the loop....hello loop... welcome!\n");

    int i;
    int*p = A;
    //A++ invalid
    //p++ valid
    for (int i = 0; i<5;i++){
        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A+i); //A is the base address, it can be used to access the first element of the array

        printf("Value = %d\n", A[i]);
        printf("Value = %d\n", *(A+i));
    }

}*/

//ARRAYS AS FUNCTION ARGUMENTS

//sum of elements, passing the size of the array as argument
int SumOfElements1(int A[], int size){
    int i, sum=0;

    for (i=0; i< size;i++){
        sum+= A[i];
    }
    return sum;

}
int SumOfElements2(int A[]){
    int i, sum=0;
    int size = sizeof(A)/sizeof(A[0]); //sizeof() gives the size of the array in bytes
    printf("SOE - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    for (i=0; i< size;i++){
        sum+= A[i];
    }
    return sum;
}

void Double(int* A, int size){
    int i, sum=0;
    for (i=0; i<size; i++){
        A[i]  = 2*A[i];
    }
}
int main(){
    int A[]= {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]); //sizeof() gives the size of the array in bytes

    //sum of elements call, passing the size of the array as argument
    int total1 = SumOfElements1(A,size);
    printf("Sum of elements 1 = %d\n", total1);

    int total2 = SumOfElements2(A);
    printf("Sum of elements 2 = %d\n", total2);
    printf("MAIN - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));

    printf("Printing the doubled elements\n");
    Double(A, size); //passing the array to a function allows it t o
    int i;
    for (i = 0; i< size; i++){
        printf("%d ", A[i]);
    }
}