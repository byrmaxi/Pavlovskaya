#include <iostream>

using namespace std;

int main( ) 
{
    int const m=3, n=5;
    
    int matr[m][n]=
     {
         {2,2,0,1,3},
         {2,0,0,2,6},
         {4,4,4,5,1},
     };    
     
    int stolb0=0;
    for (int i=0; i<n; i++)
      {
      	for (int j=0; j<m; j++) 
      	  {
      	      if (matr[j][i]==0) 
	        {
		  stolb0++;
		  break;
	        }
      	  }
      }
     cout << stolb0 << " - количесвто столбцов, где есть хотя бы один нулевой элемент" << endl; 
     
     int max_odinakov=0,odinakov=0,iodinakov=0;
     for (int i=0; i<m; i++)
       {
       	for (int j=0; j<(n-1); j++)
       	  {
       	  	if (matr[i][j]==matr[i][j+1]) odinakov++;
       	  }
       	if  (odinakov>max_odinakov)
       	  {
       	  	max_odinakov=odinakov;
       	  	iodinakov=i;
       	  }
       	odinakov=0;
       }
     cout <<  " В строке под номером " << iodinakov+1 << " находится самая длинная серия одинаковых элементов";  
    
	return 0;
}
