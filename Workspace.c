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
int abswap(void){
    int a=5,b=7;
    printf("a=%d b=%d\n", a, b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a=%d b=%d\n", a, b);
//    çarpma bölme ve toplama çıkarma ile yer değişimi böyle
    a=a*b;
    b=a/b;
    a=a/b;
    printf("a=%d b=%d\n", a, b);
    return EXIT_SUCCESS;
}
int binary(void){
    int a;
    int q,w,e,r;
    printf("Enter A:");
    scanf("%d",&a);
    q=a%2;
    w=(a/2)%2;
    e=(a/2/2)%2;
    r=(a/2/2/2)%2;
    printf("Binary of A is: %d%d%d%d\n",r,e,w,q);
    return EXIT_SUCCESS;
}
int xor(void){
    int a=5,b=7;
    printf("a=%d b=%d\n",a,b);
    a=a^b;
    b=b^a;
    a=b^a;
    printf("a=%d b=%d\n",a,b);
//    xor 0^0=0 1^1=0 1^0=1 0^1=1 ram kullanmaz sadece cpu o yüzden hızlı
    return EXIT_SUCCESS;
}
int main(void){
//    not();
//    num();
//    evenodd();
//    negtopos();
//    big();
//    abswap();
    binary();
//    xor();
    return EXIT_SUCCESS;
}



