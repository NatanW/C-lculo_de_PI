#include <stdio.h>
#include <math.h>
 
double pi(void);
 
int main() 
{
	double pi();
	printf("Valor de PI : %lf\n", pi());
 
}
 
double pi() 
{
	int valor = 9, x=0, y=6;
        double z=1, valor_pi =0.0;
 
        while (x <= valor)
        {
        	valor_pi = (y*z)/2;
                z = sqrt(2-sqrt(4 - z * z));
                y = y*2;
                x+=1;
        }
 
        return valor_pi;
 
}
