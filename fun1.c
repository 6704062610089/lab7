#include<stdio.h>
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	//function calling (a-k)
  	
  functionM();// the function is correct//
  a = functionM();// the function is correct//
  b = functionN(a, b);//error the variableis b type don't match//
  r = functionO(r,a,s,b);// the function is correct//
  s = functionP(a,b,c,d,e);// the function is correct//
  u = functionM();// the function is correct//
  c = d + functionN(r,s);// error the variableis  type don't match//
  t = s * functionO(r, a, r, a);// the function is correct//
  a = v + functionP(r, s, t, t);// error the variableis  type don't match//
  functionP(functionN(a, a), s, t, t+r);// error the variableis a type don't match//
  v = functionP(functionN(a, a), s, t, t+r);// error the variableis a type don't match//

    return 0;
}
