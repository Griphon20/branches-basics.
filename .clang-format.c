#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15

void FillInc (int [], int, int);
void FillDec (int [], int, int);
void FillRand (int [], int);
void CheckSum (int [], int);
void RunNumber (int [], int);
void PrintMas (int [], int);
 
int main () 
{
    int a[N];
 
    int start;
    printf("start: ");
    scanf("%d", &start);

    FillInc(a, N, start);
    PrintMas(a, N);
 
    FillDec(a, N, start);
    PrintMas(a, N);
 
    FillRand(a, N);
    PrintMas(a, N);
 
    CheckSum(a, N);
    RunNumber(a, N);
    return 0;
}

void FillInc (int a[], int M, int start) 
{
    for (int i = 0; i < M; ++i)
        a[i] = start + i;
}

void FillDec (int a[], int M, int start) 
{
    for (int i = 0; i < M; ++i)
        a[i] = start - i;
}

void FillRand (int a[], int M) 
{
    srand( (unsigned int)time(NULL)/2 );
    for (int i = 0; i < M; ++i)
        a[i] = rand() %100;
}

void CheckSum(int a[], int M) 
{
int Summa = 0;

for(int i = 0; i < M; i++)
 Summa += a[i];
printf("check sum = %d\n", Summa);
}


void PrintMas (int a[], int M) 
{
    for (int i = 0; i < M; ++i)
        printf("%4d", a[i]);
    puts("\n");
}
