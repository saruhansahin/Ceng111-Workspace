#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>


int not(void) {
    int note;
    char a = 'y';
    while (a=='y'){
        printf("Enter your note:");
        scanf("%d",&note);
        if(note <=100 && note >= 90){
            printf("You have passed with AA\n");
        } else if (note <90 && note >= 80){
            printf("You have passed with BB\n");
        } else if (note <80 && note >= 70){
            printf("You have passed with CC\n");
        } else if (note <70 && note >= 60){
            printf("You have passed with DD\n");
        } else if (note <60 && note >= 0){
            printf("You have failed with FF\n");
        } else {
            printf("Enter a real grade!!!\n");
        }
        
        printf("Do you want to continiue?(y/n):");
        scanf(" %c",&a);
        a = tolower(a);
    }
    printf("Program is closing!\n");
    return EXIT_SUCCESS;
}


int num(void){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    if(a>0){
        printf("The number is positive.\n");
    } else if (a<0){
        printf("The number is negative.\n");
    } else {
        printf("It's Zero\n");
    }
    return EXIT_SUCCESS;
}
int evenodd(void){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    if (a%2==1){
        printf("The number is odd.\n");
    } else if (a%2==0){
        printf("The number is even.\n");
    } else {
        printf("Enter a valid number.\n");
    }
    return EXIT_SUCCESS;
}
int negtopos(void){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    if (a>=0){
        printf("%d\n",a);
    } else {
        a = a * -1;
        printf("%d\n",a);
    }
    return EXIT_SUCCESS;
}
int big(void){
    int a;
    int b;
    int c;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter a number:");
    scanf("%d", &b);
    printf("Enter a number:");
    scanf("%d", &c);
    if (a> b && a>c){
        printf("Bigger one is: %d\n", a);
    } else if(b>c && b>a){
        printf("Bigger one is: %d\n",b);
    } else {
        printf("Bigger one is: %d\n",c);
    }
    return EXIT_SUCCESS;
}
int main(void){
    not();
    num();
    evenodd();
    negtopos();
    big();
    return EXIT_SUCCESS;
}


