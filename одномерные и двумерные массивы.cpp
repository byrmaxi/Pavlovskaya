
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    struct tochka
     {
         int x;
         int y;
     };
     
     tochka plosk1[30];
     tochka plosk2[30];
     
    for (int i=0; i<31; i++)
      {
         plosk1[i].x=rand() % 30;
         plosk1[i].y=rand() % 30;
         plosk2[i].x=rand() % 20;
         plosk2[i].y=rand() % 20;
      }
      
    
    double rastoynie,a,b,c,p,f; 
    double radius=0;
    for (int i=0; i<28; i++)
      {
         for (int j=i+1; j<29; j++) 
           {
              for(int k=i+2; k<30; k++)
                {
                    a=sqrt((pow(abs(plosk2[i].x-plosk2[j].x), 2)) + pow(abs( plosk2[i].y-plosk2[j].y),2));
                    b=sqrt((pow(abs(plosk2[i].x-plosk2[k].x), 2)) + pow(abs( plosk2[i].y-plosk2[k].y),2));
                    c=sqrt((pow(abs(plosk2[j].x-plosk2[k].x), 2)) + pow(abs( plosk2[j].y-plosk2[k].y),2));
                    p=(a+b+c)/2;
                    rastoynie=(a*b*c)/(pow(p*(p-a)*(p-b)*(p-c) ,1/4));
                    if (rastoynie>radius)
                      {
                          radius=rastoynie;
                      }
                }      
           }
      }
     
      
    double R,MinRaznica=10000000;
    int x1,y1,x2,y2,x3,y3;
    for (int i=0; i<27; i++)
      {
         for (int j=i+1; j<29; j++) 
           {
              for(int k=i+2; k<30; k++)
                {
                    a=sqrt((pow(abs(plosk1[i].x-plosk1[j].x), 2)) + pow(abs( plosk1[i].y-plosk1[j].y),2));
                    b=sqrt((pow(abs(plosk1[i].x-plosk1[k].x), 2)) + pow(abs( plosk1[i].y-plosk1[k].y),2));
                    c=sqrt((pow(abs(plosk1[j].x-plosk1[k].x), 2)) + pow(abs( plosk1[j].y-plosk1[k].y),2));
                    p=(a+b+c)/2;
                    f=p*(p-a)*(p-b)*(p-c);
                    R=(a*b*c)/(pow(f ,1/4));
                    if ((R-radius)< MinRaznica && (R-radius>=0))
                      {
                          MinRaznica=R;
                          x1=plosk1[i].x;
                          y1=plosk1[i].y;
                          x2=plosk1[j].x;
                          y2=plosk1[j].y;
                          x3=plosk1[k].x;
                          y3=plosk1[k].y;
                      }
                }
                
           }
      }   
  
    return 0;
}







