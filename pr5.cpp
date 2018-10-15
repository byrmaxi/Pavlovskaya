#include <iostream>

using namespace std;

int main( ) 
{
    int m,n,stolb0;
    cout << "Введите размерность матрицы \n";
    cout << "строк - ";
    cin >> m ;
    cout << "столбцов - ";
    cin >> n;
    int matr[m][n];    // как бы массив динамический, но всё работает 
    
    cout << "Заполните матрицу \n" ;
    for (int i=0; i<m; i++)
      {
      	for (int j=0; j<n; j++) 
      	  {
      	  	cout << " matr[" << i << ";" << j << "] = ";
      	  	cin >> matr[i][j];
      	  }  
      }
    
    stolb0=0;
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
     cout << stolb0 << " - количество столбцов, где есть хотя бы один нулевой элемент" << endl; 
     
     int max_odinakov=0,odinakov,iodinakov;
     for (int i=0; i<m; i++)
       {
       	for (int j=0; j<(n-1); j++)
       	  {
       	  	odinakov=0;
       	  	if (matr[i][j]==matr[i][j+1]) odinakov++;
       	  }
       	if  (odinakov>max_odinakov)
       	  {
       	  	max_odinakov=odinakov;
       	  	iodinakov=i;
       	  }
       }
     cout <<  " В строке под номером " << iodinakov << " самая большая серия из одинаковых элементов";  
    
	return 0;
}
