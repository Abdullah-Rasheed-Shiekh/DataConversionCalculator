#include <stdio.h>
#include <math.h>
#include <string.h>
#define SIZE 20

// Functions Prototypes

int bin_to_dec(long long bin);
void dec_to_bin(int dec);
int dec_to_octal(int dec);
int octal_to_dec(int octal);
void dec_to_hex(int dec);
long long hex_to_dec(char hex[]);
int bin_to_octal(long long bin);
void octal_to_bin(int octal);
long long hex_to_dec(char hex[]);
void hex_to_bin(char hex[]);
void bin_to_hex(long long bin);
void octal_to_hex(int octal);
int hex_to_octal(char hex[]);

// Input Checkers Prototypes

int check_hex(char hex[]);
int check_binary(long long *num);
int check_octal(int *octal);

// Line Functions

void line(void);
void line2(void);
void line3(void);
int main()
{
    int mode, num = 0;
    long long bin, dec;
    char hex[SIZE];
    printf("\t\t\t\t***\t Programming Fundamentals\t ***\n\n");
    printf("\t\t\t\t***\t      Final Project\t\t ***\n\n");
    printf("\t\t\t\t***\t         Group 9\t\t ***\n\n");
    printf("\n%s\n%s", "Group Members:", "**************");
    printf("\n%4s%31s\n%s", "Name", "Reg No", "*****************************************");
    printf("\n%4s%21s\n", "Muhammad Hassan Khan", "FA22-BSE-170");
    printf("%4s%25s\n", "Abdullah Rasheed", "FA22-BSE-030");
    printf("%4s%26s\n", "Shahzaib Shahid", "FA22-BSE-058");
    printf("%4s%29s\n", "Muhammad Ali", "FA22-BSE-102");
    printf("\n%s\n%s", "Project Name:", "*************");
    printf("\n\t\t\t Data Conversion Calculator\n");
    printf("\n%s\n%s", "Project Description:", "*******************");
    printf("\n\t\t\t Performs different number systems conversion on data like converting a number in one \nnumber system to another.It performs following conversions\n\n");
    printf("1. Binary To Decimal\n");
    printf("2. Binary To Hexadecimal\n");
    printf("3. Binary To Octal\n");
    printf("4. Decimal To Binary\n");
    printf("5. Decimal To Hexadecimal\n");
    printf("6. Decimal To Octal\n");
    printf("7. Octal To Decimal\n");
    printf("8. Octal To Binary\n");
    printf("9. Octal To Hexadecimal\n");
    printf("10.Hexadecimal To Binary\n");
    printf("11.Hexadecimal To Decimal\n");
    printf("12.Hexadecimal To Octal\n");
    line();
    printf("\t\t\t\t      *WELCOME TO DATA TYPE CONVERTER*");
    line();
    printf("\t\t\t\t\t*Available Functionalities*");
    line();
    printf("\t\t\tEnter 1 to convert Binary Number to Decimal Number\n\t\t\tEnter 2 to convert Binary Number to Hexadecimal Number\n\t\t\tEnter 3 to convert Binary Number to octal Number \n\t\t\tEnter 4 to convert Decimal Number to Binary Number \n\t\t\tEnter 5 to convert Decimal Number to Hexadecimal Number \n\t\t\tEnter 6 to convert Decimal Number to Octal Number\n");
    printf("\t\t\tEnter 7 to convert Octal Number to Decimal Number\n\t\t\tEnter 8 to convert Octal Number to Binary Number\n\t\t\tEnter 9 to convert Octal Number to Hexadecimal Number\n\t\t\tEnter 10 to convert Hexadecimal Number to Binary Number \n\t\t\tEnter 11 to convert Hexadecimal Number to Decimal Number \n\t\t\tEnter 12 to convert Hexadecimal Number to Octal Number\n");
    printf("\t\t\tEnter -1 to end the program\n\n");
    line2();
    printf("\n\n*Please Select Mode (-1 To End):");
    scanf("%d", &mode);
    printf("\n");
    for (; mode != -1;)
    {
        switch (mode)
        {
        case (1):
            check_binary(&bin);
            line3();
            printf("(%lld) in Binary = (%d) in Decimal\n", bin, bin_to_dec(bin));
            line3();
            break;
        case (2):
            check_binary(&bin);
            line3();
            printf("(%lld) in Binary= (", bin);
            bin_to_hex(bin);
            printf(") in Hexadecimal\n");
            line3();
            break;
        case (3):
            check_binary(&bin);
            line3();
            printf("(%lld) in Binary = (%d) in Octal\n", bin, bin_to_octal(bin));
            line3();
            break;
        case (4):
            printf("Enter Decimal number:");
            scanf("%d", &num);
            line3();
            printf("(%d) in Decimal number = (", num);
            dec_to_bin(num);
            printf(") in Binary\n");
            line3();
            break;
        case (5):
            printf("Enter Decimal number:");
            scanf("%d", &num);
            line3();
            printf("(%d) in Decimal = (", num);
            dec_to_hex(num);
            printf(") in Hexadecimal\n");
            line3();
            break;
        case (6):
            printf("Enter Decimal number:");
            scanf("%d", &num);
            line3();
            printf("(%d) in Decimal = (%d) in Octal\n", num, dec_to_octal(num));
            line3();
            break;
        case (7):
            check_octal(&num);
            line3();
            printf("(%d) in Octal = (%d) in Decimal\n", num, octal_to_dec(num));
            line3();
            break;
        case (8):
            check_octal(&num);
            line3();
            printf("(%d) in Octal = (", num);
            octal_to_bin(num);
            printf(") in Binary\n");
            line3();
            break;
        case (9):
            check_octal(&num);
            line3();
            printf("(%d) in Octal= (", num);
            octal_to_hex(num);
            printf(") in Hexadecimal\n");
            line3();
            break;
        case (10):
            check_hex(hex);
            line3();
            printf("(%s) in Hexadecimal= (", hex);
            hex_to_bin(hex);
            printf(") in Binary\n");
            line3();
            break;
        case (11):
            check_hex(hex);
            line3();
            printf("(%s) in Hexadecimal= (%d) in Decimal\n", hex, hex_to_dec(hex));
            line3();
            break;
        case (12):
            check_hex(hex);
            line3();
            printf("(%s) in Hexadecimal= (%d) in Octal\n", hex, hex_to_octal(hex));
            line3();
            break;
        default:
            printf("Invalid choice of conversion\n\nPlease Try Again!");
        }
        printf("\n\n*Select Mode (-1 To End):");
        scanf("%d", &mode);
        printf("\n");
    }
    return 0;
}
// Function Definitions
int bin_to_dec(long long bin) // function definition of Conversion Binary to Decimal.
{
    int rem, dec = 0, i = 0;
    while (bin != 0)
    {
        rem = bin % 10;
        bin /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
int bin_to_octal(long long bin) // function definition of Conversion Binary to Octal.
{
    int dec, oct;
    dec = bin_to_dec(bin);
    oct = dec_to_octal(dec);
    return oct;
}
void dec_to_bin(int dec) // function definition of Conversion Decimal to Binary.
{
    int i, a[100];
    for (i = 0; dec > 0; i++)
    {
        a[i] = dec % 2;
        dec = dec / 2;
    }
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}
int octal_to_dec(int octal) // function definition of Conversion Octal to Decimal.
{
    int rem = 0, i = 0, dec = 0;
    while (octal)
    {
        rem = octal % 10;
        dec += rem * pow(8, i);
        octal = octal / 10;
        i++;
    }
    return dec;
}
void octal_to_bin(int octal) // function definition of Conversion Octal to Binary.
{
    int rem = 0, i = 0, dec = 0, a[100];

    while (octal)
    {
        rem = octal % 10;
        dec += rem * pow(8, i);
        octal = octal / 10;
        i++;
    }
    return dec_to_bin(dec);
}
int dec_to_octal(int dec) // function definition of Conversion Decimal to Octal.
{
    int rem = 0, i = 1, octal = 0;

    while (dec != 0)
    {
        rem = dec % 8;
        octal += rem * i;
        dec = dec / 8;
        i *= 10;
    }
    return octal;
}
void dec_to_hex(int dec) // function definition of Conversion Decimal to Hexadecimal.
{
    int hex = 0, rem, i = 1, j;
    char a[100];
    while (dec != 0)
    {
        rem = dec % 16;
        if (rem < 10)
            rem = rem + 48;
        else
            rem = rem + 55;
        a[i++] = rem;
        dec /= 16;
    }
    for (j = i - 1; j > 0; j--)
        printf("%c", a[j]);
}
long long hex_to_dec(char hex[]) // function definition of Conversion Hexadecimal to Decimal.
{
    long long dec = 0;
    int i, len, val;
    len = strlen(hex);
    len--;
    for (i = 0; hex[i] != '\0'; i++)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            val = hex[i] - 48;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f')
        {
            val = hex[i] - 97 + 10;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            val = hex[i] - 65 + 10;
        }
        dec += val * pow(16, len);
        len--;
    }
    return dec;
}
void hex_to_bin(char hex[]) // function definition of Conversion Hexadecimal to Binary.
{
    int dec;
    dec = hex_to_dec(hex);
    dec_to_bin(dec);
}
void bin_to_hex(long long bin) // function definition of Conversion Binary to Hexadecimal.
{
    int dec;
    dec = bin_to_dec(bin);
    dec_to_hex(dec);
}
void octal_to_hex(int octal) // function definition of Conversion Octal to Hexadecimal.
{
    int dec;
    dec = octal_to_dec(octal);
    dec_to_hex(dec);
}
int hex_to_octal(char hex[]) // function definition of Conversion Hexadecimal to Octal.
{
    int dec, oct;
    dec = hex_to_dec(hex);
    oct = dec_to_octal(dec);
    return oct;
}
int check_binary(long long *num)
{
    long long copy, temp = 0;
    printf("Input a binary number: ");
    scanf("%lld", num);
    copy = *num;

    while (copy != 0)
    {
        temp = copy % 10;

        if ((temp == 0) || (temp == 1))
        {
            copy = copy / 10;
            if (copy == 0)
            {
                return 1;
                break;
            }
        }
        else
        {
            line3();
            printf("\n'Not a valid binary number.Please Try again!'\n\n");
            line3();
            check_binary(num);
            break;
        }
    }
}
int check_hex(char hex[])
{
    int i = 0;
    printf("Input a Hexadecimal number: ");
    scanf("%s", hex);
    for (i = strlen(hex) - 1; i >= 0; i--)
    {
        if ((hex[i] < '0' || hex[i] > '9') && (hex[i] < 'a' || hex[i] > 'f') && (hex[i] < 'A' || hex[i] > 'F'))
        {
            line3();
            printf("\n'Not a valid Hexa-Decimal Number.Please Try again!'\n\n");
            line3();
            check_hex(hex);
        }
        else
            return 1;
    }
}
int check_octal(int *octal)
{
    int num, check;
    printf("Input an Octal number:");
    scanf("%d", octal);
    check = *octal;

    while (check != 0)
    {
        num = check % 10;
        if (num > 7)
        {
            line3();
            printf("\n'Not a valid Octal number.Please Try again!'\n\n");
            line3();
            check_octal(octal);
            return 0;
        }
        else
        {
            check = check / 10;
        }
    }
    return 1;
}

void line(void)
{
    int a;
    printf("\n\n\t\t\t");
    for (a = 60; a != 0; a--)
    {
        printf("*");
    }
    printf("\n\n");
}
void line2(void)
{
    int a;
    printf("\t\t\t");
    for (a = 60; a != 0; a--)
    {
        printf("*");
    }
    printf("\n");
}
void line3(void)
{
    int a;
    for (a = 45; a != 0; a--)
    {
        printf("*");
    }
    printf("\n");
}
