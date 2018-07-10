#include<stdio.h>
#include<stdlib.h>
typedef double (*F)(double,int);//typedef ptf
double power(double,int);
double multiply(double,int);	//function prototype
double divide(double,int);
double powerpower(F,double,int,int);
int main(int argc,char *argv[]){
        int n,m;
        double x;
        x = strtod(argv[1],NULL);//轉換double
        n = atoi(argv[2]);
        m = atoi(argv[3]);
        F cmp;
        cmp = power;
        powerpower(cmp,x,n,m);	//傳入powerpower
        cmp = multiply;
        powerpower(cmp,x,n,m);
        cmp = divide;
        powerpower(cmp,x,n,m);
}
double power(double base,int pow){
        int i;
        double temp = 1.0;		//計算power
        for(i=0;i<pow;i++)temp = temp*base;
        return temp;
}
double multiply(double x,int n){
        double temp;		//相乘
        temp = x*n;
        return temp;
}
double divide(double x,int n){
        double temp;		//相除
        temp = x/n;
        return temp;
}
double powerpower(F cmp,double x,int n,int m){
        int i;			//利用不同的function計算powerpower
        double base,temp = 1.0;
        base = cmp(x,n);
        for(i=0;i<m;i++)temp = temp*base;
        printf("%lf\n",temp);//double印出
        return temp;
}

