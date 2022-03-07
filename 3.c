#include <conio.h>
#include <stdio.h>

struct complex
{

    float real, imag;
};
typedef struct complex complex;

complex addComplex(complex x, complex y)
{
    complex temp;
    temp.real = x.real + y.real;
    temp.imag = x.imag + y.imag;
    return temp;
}

void main()
{
    struct complex c1, c2,sc;
    // clrscr();
    printf("Enter Real and Imaginary part of 1st complex: ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter Real and Imaginary part of 2st complex: ");
    scanf("%f %f", &c2.real, &c2.imag);
    sc = addComplex(c1,c2);
    printf("Addidtion of two complex number is: %.2f + %.2f",sc.real, sc.imag);
    getch();
}
