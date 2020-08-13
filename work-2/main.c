#include<stdio.h>
void circle(float b);
void square(float a);
float a, b, i, j;
float area1, area2, area3;
void square(float a) {


    area1 = a * a;
    printf(" your square area is :%.2f \n", area1);
    return;

}
void circle(float b) {
    float pi[2] = { 3.14,22 / 7 };

    area2 = pi[0] * b * b;
    printf("your circle area is %.2f\n", area2);
    return;
}



int main() {
    scanf_s("%f", &a);
    square(a);
    scanf_s("%f", &b);
    circle(b);

    area3 = 0.5 * area1 * area2;
    printf("your triangle area is %.2f\n", area3);
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            if (j <= i)
                printf("%f", area3);
            else
                printf(" ");

        }
        printf("\n");
    }



}
