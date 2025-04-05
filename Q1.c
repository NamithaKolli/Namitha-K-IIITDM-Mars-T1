//Namitha Sai Kolli
//CS24B1016
#include <stdio.h>
#include <math.h>
void new_reference(double x,double y,double z,double* x1,double* y1,double* z1)
{
  //considering Z coordinate to be perpendicular to the plane on which rover is moving and y coordinate is tthe line along which the camera and center of the rover lie
  //using shifting coordinates method
  *x1=x;
  *y1=y-55;
  *z1=z;
}
double distance(double x1,double y1,double z1,double x2,double y2,double z2)
{
  return sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2)) //using squrt function for square root and pow function for power
}
int main()
{
  double x,y,z,x',y',z';//x1,y1,z1 denote the new coordinates
  printf("Enter the coordinates of the marker detected");
  scanf("%lh %lh %lh",&x,&y,&z);
  //so the rover is turning 55 cm behind the actual marker because the camera is located 55 cm ahead of the center and it rotates as soon as the camera detects the marker
  new_reference(x,y,z,&x,&y,&z);//to adjust the position of rover
  printf("the final corrected  coordinates are x:%ls\n y:%ls\n z:%ls\n",x1,y1,z1);
  double initial_dist,final_dist;
  //Considering distance from the origin
  printf("The initial distance of the rover before adjusting its coordinates is %ls\n",distance(0,0,0,x,y,z);
  printf("THe final distance of the rover after adjusting the coordinates is %ls\n",distance(0,0,0,x1,y1,z1);
  
}
