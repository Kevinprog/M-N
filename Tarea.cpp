#include <stdio.h>
#include <math.h>
 
#define RAIZ(x) (x*x*x+4*x*x-10)

float biseccion(float xi, float xu, float xa, float xr, float ea, float e, int it){
	do{
	it++;
	xr = (xi + xu) / 2;
	if(it >= 2) {
		ea = ((xr - xa) / xr);
	}
	ea = fabs(ea); 
	printf("%10d %10f %10f %10f %10f\n", it, xi, xu, xr, fabs(ea));
	xa = xr;
	if(RAIZ(xr) > 0) {
		xi = xr;
	} 
	else{
		xu = xr;
	}

	} while(ea > e || (ea == 0.0 && it== 1));
 
	printf("\nLa raiz es de f(x) = x^3+4x^2-10; es: %f\n", xr);
}
int main() {
	float xi, xu, xr, xa, ea, e;
	int it;
	printf("Digita el limite superior de la raiz: ");
	scanf("%f", &xi);
	printf("Digita el limite inferior de la raiz: ");
	scanf("%f", &xu);
 	printf ("Digita el margen de error limite: ");
 	scanf ("%f",&e);
	it = 0;
	xa = 0.0;
	ea = 0;
	biseccion(xi,xu,xa,xr,ea, e, it);
 
return 0;
}
