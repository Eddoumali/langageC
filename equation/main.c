#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,x,x1,x2,delta;
    x= a*pow(b,2)+b*x+c;
    printf("veuillez entrer la valeur de a et b et c:");
    scanf("%f %f %f",&a,&b,&c);
    delta= pow(-b,2)-(4*a*c);
    printf("delta=%f",delta);
    if (delta<0){
      printf("aucune solution");}
     else if (delta==0)
       {
           x = -b/(2*a);
        printf("X=%f",x);}
    else  {
            x1= (-b-sqrt(delta))/(2*a);
            x2= (-b+sqrt(delta))/(2*a);
            printf(" X1=%f",x1 );
            printf(" X2=%f",x2);
            }
    return 0;
}
