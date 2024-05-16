#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

double calHipotenusa(double cat1, double cat2)
{
    double h;
    h = sqrt(pow(cat1,2)+pow(cat2,2));
    return h;
}

void exiInfoTri(double cat1, double cat2, double hip)
{
    printf("o tri tem um cat = %lf\n",cat1);
    printf("o tri tem outro cat = %lf\n",cat2);
    printf("o tri tem uma hip = %lf\n",hip);
}

int main()
{
    //Declarando variáveis
    double a, b, h;
        printf("Digite os dois catetos separados por vírgula:");
        scanf("%lf,%lf",&a,&b);
        h = calHipotenusa(a,b);
        exiInfoTri(a,b,h);
        //A ideia é usar esse conceito para criar
        //uma Função que calcule o perímetro de uma circunferência.
        double per = 2*PI*10;

    return 0;
}
