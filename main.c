#include <stdio.h>
#include <stdlib.h>

//Task 1-1 ------------------------------

void DecToBin(int c){
    if(c >= 2){
    DecToBin(c/2);
    }
    printf("%d", c%2);
    return;
}
//Task 2-1 -------------------------------

int power (int a, int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return a;
    }
    if(n > 1){
        a = a * power(a, n-1);
        return a;
    }
}

//Task 3-1 -------------------------------

int power_task3 (int b, int d){
    if(d==0){
        return 1;
    }
    if(d==1){
        return b;
    }
    if(d > 1){
        if(d%2 == 0){
           b = power_task3(b*b, d/2);
        }
        if(d%2 !=0){
           b = b * power_task3(b, d-1);
        }
        return b;
    }
}

//Task 1-2 --------------------------------------

int main()
{
    int c;
    printf("Input Decimal Number: ");
    scanf("%d", &c);

    printf("Binary: ");
    DecToBin(c);
    printf("\n");
    printf("\n");

//Task 2-2 --------------------------------------
    int a, n;
    printf("Input number: ");
    scanf("%d", &a);

    printf("Input degree: ");
    scanf("%d", &n);

    printf("%d\n", power(a,n));
    printf("\n");

//Task 3-2 --------------------------------------

    int b, d;
    printf("Input number: ");
    scanf("%d", &b);

    printf("Input degree: ");
    scanf("%d", &d);

    printf("%d\n", power_task3(b,d));

    return 0;
}
