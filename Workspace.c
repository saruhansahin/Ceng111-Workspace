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
    if (a>b && a>c){
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
int bigV2(void){
    int a;
    int b;
    int c;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter a number:");
    scanf("%d", &b);
    printf("Enter a number:");
    scanf("%d", &c);
    if (a>b){
        if(a>c){
            printf("Bigger one is: %d\n", a);
        }else{
            printf("Bigger one is: %d\n", c);
        }
    } else {
        if(b>c){
            printf("Bigger one is: %d\n", b);
        }else{
            printf("Bigger one is: %d\n", c);
        }
    }
    return EXIT_SUCCESS;
}
int bigV3(void){
    int a;
    int b;
    int c;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter a number:");
    scanf("%d", &b);
    printf("Enter a number:");
    scanf("%d", &c);
    printf("Bigger one is: %d\n",(a>b?a:b)>c?a:c);
    return EXIT_SUCCESS;
}
int vowel(void){
    char a;
    printf("Enter a charachter: ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        printf("Charachter is a vowel.\n");
    }else{
        printf("Charachter is not a vowel.\n");
    }
    return EXIT_SUCCESS;
}
int age(void){
    int a;
    printf("Enter Age:");
    scanf("%d", &a);
    if(a<=12&&a>=0){
        printf("Child\n");
    }else if(a>=13&&a<=19){
        printf("Teenager\n");
    }else if(a>=20&&a<=64){
        printf("Adult\n");
    }else{
        printf("Senior\n");
    }
    return EXIT_SUCCESS;
}
int leapyear(void){
    int a;
    printf("Enter Year:");
    scanf("%d", &a);
    if(a%400==0){
        printf("Leap year\n");
    } else if(a%100==0 && a%4==0){
        printf("Not Leap Year\n");
    } else if(a%100!=0 && a%4==0){
        printf("Leap Year\n");
    }
    return 0;
}
int leapyearV2(void){
    int a;
    printf("Enter Year:");
    scanf("%d", &a);
    if(a%4==0 && (a%400==0 || a%100!=0)){
        printf("Leap Year\n");
    }else{
        printf("Not Leap Year\n");
    }
    return 0;
}
int wh1le(void){
    int i=0;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }
    return 0;
}
int repeat(void){
    int i=1;
    int r;
    printf("Enter repeat time:");
    scanf("%d",&r);
    while(i<=r){
        printf("%d\n",i);
        i++;
    }
    return 0;
}
int countdown(void){
    int i;
    printf("Enter number:");
    scanf("%d",&i);
    while(i>=0){
        printf("%d\n",i);
        i--;
    }
    return 0;
}
int lettergrade(void){
    char lg;
    printf("Enter Your Grade(A-B-C-D-F):");
    scanf("%c",&lg);
    lg = toupper(lg);
    while ((lg>70 || lg<65) || lg==69) {
        printf("Error\n");
        break;
    }
    while((lg<=70 && lg>=65)&& lg!=69){
        if(lg==65){
            printf("4\n");
        }else if(lg==66){
            printf("3\n");
        }else if(lg==67){
            printf("2\n");
        }else if(lg==68){
            printf("1\n");
        }else{
            printf("0\n");
        }
        break;
    }
    return 0;
}
int power(void){
    int p,b,r=1;
    printf("Enter base and power:");
    scanf("%d %d", &b,&p);
    while(p>=1){
        r=r*b;
        p--;
    }
    printf("Result: %d\n",r);
    return 0;
}
int sumofnum(void){
    int a,b,c,d,e,f,g,x;
    printf("Enter X:");
    scanf("%d",&x);
    g=x%10;
    x/=10;
    f=x%10;
    x/=10;
    e=x%10;
    x/=10;
    d=x%10;
    x/=10;
    c=x%10;
    x/=10;
    b=x%10;
    x/=10;
    a=x%10;
    printf("Sum:%d\n",a+b+c+d+e+f+g);
    return 0;
}
int ________(void){
    
    return 0;
}
int f0r(void){
    int i;
    for(i = 0; i<=10; i++){
        printf("%d\n",i);
    }
    return 0;
}
int _________(void){
    
    return 0;
}
int main(void){
//    not();
//    num();
//    evenodd();
//    negtopos();
//    big();
//    abswap();
//    binary();
//    xor();
//    bigV2();
//    bigV3();
//    vowel();
//    age();
//    leapyear();
//    leapyearV2();
//    wh1le();
//    f0r();
//    repeat();
//    countdown();
//    lettergrade();
//    power();
//    sumofnum();
    return EXIT_SUCCESS;
}
