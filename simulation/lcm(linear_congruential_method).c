#include<stdio.h>

int nextRandomInt(int x, int a, int c, int m)
{
    int xi = (a*x + c) % m;
    return xi;
}
int main()
{
    int n, a, x, c, m, x0;
    printf("Enter value of x (seed value): ");
    scanf("%d", &x);

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of c: ");
    scanf("%d", &c);

    printf("Enter value of m: ");
    scanf("%d", &m);

    printf("Enter total random number to be generated: ");
    scanf("%d", &n);


    int i;
    x0 = x;
    for(i = 0; i < n; i++)
    {
        x = nextRandomInt(x, a, c, m);
        double r = (double)x/(double)m;
        printf("%f\n", r);
        if(x0 == x)
        {
            printf("%d number can't be generated due to have repetation", n);
            break;
        }

    }
    return 0;
}
