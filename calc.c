# include <stdio.h>

int main() {
    float a, b;
    char amal;

    printf("birinchi son: ");
    scanf("%f" , &a);
    printf("Amal (+ - * /): ");
    scanf(" %c", &amal);
    printf("ikkinchi son:   ");
    scanf("%f" , &b);
    
    if (amal == '+')
          printf("Javob: %.2f", a+b);

    else if (amal == '-')
          printf("Javob: %2f", a-b);

    else if (amal == '*')
          printf("Javob: %2f", a*b);

    else if (amal == '/')
          printf("Javob: %2f", a/b);

    else
        printf("Xato amal");

    return 0;

}

