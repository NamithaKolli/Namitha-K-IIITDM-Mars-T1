//medium dose Question 5
//CS24B1016 //Namitha Sai Kolli
#include <stdio.h>
#include <math.h>
//function to convert 3D angles to 4 Number system
void convert(double x,double y,double z,double* qw,double* qx,double* qy,double* qz)
{
   double hx,hy,hz;//hx,hy,hz denote the half angles of x,y,z
   double Cx,Cy,Cz,Sx,Sy,Sz;//cosines and sines of half angles of x,y,z
   // Convert degrees to radians
   x = x * (M_PI / 180);
   y = y * (M_PI / 180);
   z = z * (M_PI / 180);
   hx=x/2;
   hy=y/2;
   hz=z/2;
   Cx=cos(hx);
   Sx=sin(hx);
   Cy=cos(hy);
   Sy=sin(hy);
   Cz=cos(hz);
   Sz=sin(hz);
   *qw=Cx*Cy*Cz+Sx*Sy*Sz;
   *qx=Sx*Cy*Cz-Cx*Sy*Sz;
   *qy=Cx*Sy*Cz+Sx*Sy*Sz;
   *qz=Cx*Cy*Sz-Sx*Sy*Cz;
}
int main()
{
  double x,y,z;//x,y,z denote the angles of 3D system
  double qw,qx,qy,qz;//qw,qx,qy,qz denote the quaternion angles in the 4-number system
  printf("Enter the 3d system angles in degrees to be converted and sent to the mars aliens\n");
  printf("x:");
  scanf("%lf",&x);
  printf("y:");
  scanf("%lf",&y);
  printf("z:");
  scanf("%lf",&z);
  convert(x,y,z,&qw,&qx,&qy,&qz);
  printf("The decoded 4-number system for mars aliens is : ");
  printf("(%lf,%lf,%lf,%lf)",qw,qx,qy,qz);
}
