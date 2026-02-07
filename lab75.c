#include <stdio.h>
long convert(long h, long m, long s); 
int main(){
	long hh,mm,ss;
	scanf("%ld:%ld:%ld",&hh,&mm,&ss);
	convert(hh,mm,ss);
}
long convert(long h, long m, long s){
long num =	((h*3600)+(m*60)+s);
	return printf("%ld",num);
}
