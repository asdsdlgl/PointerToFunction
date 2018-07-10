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
        x = strtod(argv[1],NULL);//�ഫdouble
        n = atoi(argv[2]);
        m = atoi(argv[3]);
        F cmp;
        cmp = power;
        powerpower(cmp,x,n,m);	//�ǤJpowerpower
        cmp = multiply;
        powerpower(cmp,x,n,m);
        cmp = divide;
        powerpower(cmp,x,n,m);
}
double power(double base,int pow){
        int i;
        double temp = 1.0;		//�p��power
        for(i=0;i<pow;i++)temp = temp*base;
        return temp;
}
double multiply(double x,int n){
        double temp;		//�ۭ�
        temp = x*n;
        return temp;
}
double divide(double x,int n){
        double temp;		//�۰�
        temp = x/n;
        return temp;
}
double powerpower(F cmp,double x,int n,int m){
        int i;			//�Q�Τ��P��function�p��powerpower
        double base,temp = 1.0;
        base = cmp(x,n);
        for(i=0;i<m;i++)temp = temp*base;
        printf("%lf\n",temp);//double�L�X
        return temp;
}

