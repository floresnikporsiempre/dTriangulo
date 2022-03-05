#include <iostream>
#include <math.h>
using namespace std;
double PI = 3.141592654;

int main(){
    char dat;
    float x, y, z, ang1, ang2, ang3, A, m1, m2, m3;
    cout<<"\nUNIVERSIDAD MAYOR DE SAN ANDRES "<<endl;
    cout<<"FACULTAD DE INGENIERIA "<<endl;
    cout<<"LABORATORIO DE PROGRAMACION"<<endl;
    cout<<"EST. FLORES QUISPE NILO"<<endl;
    cout<<"\n\ningrese los datos del triangulo ingresar :";
    cout<<"\n\ta) tres lados ";
    cout<<"\n\tb) tres angulos ";
    cout<<"\n\tc) dos lados un angulo ";
    cout<<"\n\td) dos angulos un lado\n";
    cin>>dat;
    switch (dat)
    {
    case 'a':
    cout<<"\tlado uno x = ";
    cin>>x;
    cout<<"\tlado dos y = ";
    cin>>y;
    cout<<"\tlado tres z = ";
    cin>>z;
    ang1= acos((y*y+z*z-x*x)/(2*y*z))*180/PI;
    ang2= acos((x*x+z*z-y*y)/(2*x*z))*180/PI;
    ang3= acos((x*x+y*y-z*z)/(2*x*y))*180/PI;
    A = 0.5*(y*x*sin(ang3*PI/180));
    m1 = 0.5*sqrt(2*(y*y+z*z)-x*x);
    m2 = 0.5*sqrt(2*(x*x+z*z)-y*y);
    m3 = 0.5*sqrt(2*(x*x+y*y)-z*z);
    cout<<"\nangulo entre y, z es = "<<ang1;
    cout<<"\nangulo entre x, z es = "<<ang2;
    cout<<"\nangulo entre x, y es = "<<ang3;
    cout<<"\nel area es = "<<A;
    cout<<"\n m1 = "<<m1;
    cout<<"\n m2 = "<<m2;
    cout<<"\n m3 = "<<m3;
        break;
    case 'b':
    cout<<"\tangulo uno ang1 = ";
    cin>>ang1;
    cout<<"\tangulo dos ang2 = ";
    cin>>ang2;
    cout<<"\tangulo tres ang3 = ";
    cin>>ang3;
    cout<<"\t NO SOLUCIONADO ";
        break;
    case 'c':
    int i;
    cout<<"\n1) angulo que no comparten los dos lados ";
    cout<<"\n2) angulo que si comparten los dos lados ";
    cin>>i;
    switch (i)
    {
    case 1:
    cout<<"\tlado opuesto al angulo ang1 x = ";
    cin>>x;
    cout<<"\tlado dos y = ";
    cin>>y;
    cout<<"\tangulo ang1= ";
    cin>>ang1;
    ang2 = asin((y*sin(ang1*PI/180)/x))*180/PI;
    ang3 = 180-ang1-ang2;
    z = y*(sin(ang3*PI/180)/sin(ang2*PI/180));
    A = 0.5*y*x*sin(ang3*PI/180);
    m1 = 0.5*sqrt(2*(y*y+z*z)-x*x);
    m2 = 0.5*sqrt(2*(x*x+z*z)-y*y);
    m3 = 0.5*sqrt(2*(x*x+y*y)-z*z);
    cout<<"\nangulo ang2 = "<<ang2;
    cout<<"\nangulo ang3 = "<<ang3;
    cout<<"\nlado z = "<<z;
    cout<<"\nel area es = "<<A;
    cout<<"\n m1 = "<<m1;
    cout<<"\n m2 = "<<m2;
    cout<<"\n m3 = "<<m3;
        break;
    case 2:
    cout<<"\tlado uno x = ";
    cin>>x;
    cout<<"\tlado dos y = ";
    cin>>y;
    cout<<"\tangulo ang1= ";
    cin>>ang1;
    z=sqrt(x*x+y*y-2*x*y*cos(ang1*PI/180));
    ang2= acos((z*z+x*x-y*y)/(2*x*z))*180/PI;
    ang3= acos((z*z+y*y-x*x)/(2*y*z))*180/PI;
    A =0.5*y*x*sin(ang1*PI/180);
    m1 = 0.5*sqrt(2*(y*y+z*z)-x*x);
    m2 = 0.5*sqrt(2*(x*x+z*z)-y*y);
    m3 = 0.5*sqrt(2*(x*x+y*y)-z*z);
    cout<<"\nangulo ang2 = "<<ang2;
    cout<<"\nangulo ang3 = "<<ang3;
    cout<<"\nlado z = "<<z;
    cout<<"\nel area es = "<<A;
    cout<<"\n m1 = "<<m1;
    cout<<"\n m2 = "<<m2;
    cout<<"\n m3 = "<<m3;
        break;
    
    default:
    cout<<"\n VALOR INDEFINIDO";
        break;
    }
        break;
    case 'd':
    cout<<"\tangulo uno ang1 =  ";
    cin>>ang1;
    cout<<"\tangulo dos ang2 = ";
    cin>>ang2;
    cout<<"\tlado y = ";
    cin>>y;
    x = y*(sin(ang1*PI/180)/sin(ang2*PI/180));
    ang3 = 180-ang1-ang2;
    z = y*(sin(ang3*PI/180)/sin(ang2*PI/180));
    A = 0.5*y*x*sin(ang3*PI/180);
    m1 = 0.5*sqrt(2*(y*y+z*z)-x*x);
    m2 = 0.5*sqrt(2*(x*x+z*z)-y*y);
    m3 = 0.5*sqrt(2*(x*x+y*y)-z*z);
    cout<<"\n lado x = "<<x;
    cout<<"\n lado z = "<<z;
    cout<<"\nangulo ang3 = "<<ang3;
    cout<<"\nel area es = "<<A;
    cout<<"\n m1 = "<<m1;
    cout<<"\n m2 = "<<m2;
    cout<<"\n m3 = "<<m3;
        break;            
    
    default:
    cout<<"\n VALOR INDEFINIDO";
        break;
    }
  return 0;  
}