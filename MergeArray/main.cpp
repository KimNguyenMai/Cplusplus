/*Suppose A, B, C are arrays of integers of size M, N, and M + N respectively. Each array will get populated by random generator ranging from 0 to 1000. The numbers in array A appear in ascending order (if not in order, use a built-in qsort) while the numbers in array B appear in descending order. Write a user defined function in C++ to produce third array C by merging arrays A and B in ascending order. Use A, B and C as arguments in the function.*/

#include <iostream>
using namespace std;

int A[5];
int B[3];
int C[8];


//func produce third array C by merging arrays A and B in ascending order
void newarray (int first[], int second[], int third[]){
    
    for (int i = 0; i < 5; i++){  
        third[i] = first[i];
    }

    for (int i = 0; i < 3; i ++){  
        third[5 + i] = second[i];
    }

}

//ascending order
int compare (const void * a, const void * b){
    return (*(int*)a - *(int*)b);
}

//descending order
int compare1 (const void * a, const void * b){
    return (*(int*)b - *(int*)a);
}


int main(){
    // Array A gets populated by random generator ranging from 0 to 1000
    cout << "Original array A: ";
    for (int i = 0; i < 5; i++ ){
        A[i] = rand()%1000;
        cout << A[i] << " "; 
    }
    cout << endl;


    // Array B gets populated by random generator ranging from 0 to 1000
    cout << "Original array B: "; 
    for (int x = 0; x < 3; x++ ){
        B[x] = rand()%1000;
        cout << B[x] << " ";
    }
    cout << endl;


    // qsort Array A in ascending order
    cout << "Sorted array A: ";
    qsort (A, 5, sizeof(int), compare);
    for (int sorted = 0; sorted < 5; sorted++){
        cout << A[sorted] << " ";
    }
    cout << endl;


    // qsort Array B in descending order
    cout << "Sorted array B: ";
    qsort (B, 3, sizeof(int), compare1);
    for (int sortedB = 0; sortedB < 3; sortedB++){
        cout << B[sortedB] << " ";
    }
    cout << endl;

    
    //Array C in ascending order:
    newarray(A, B, C);
    cout << "Sorted array C: ";
    qsort (C, 8, sizeof(int), compare);
    for (int sortedC = 0; sortedC < 8; sortedC++){
        cout << C[sortedC] << " ";
    }

}



