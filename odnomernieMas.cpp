#include <iostream>

using namespace std;

int main()
{
    cout << "Введите количесвто элементов в массиве \n";
    int n;
    cin >> n;
    int *mas = new int[n];
    
    cout << "Заполните массив \n";
    for (int i=0; i<n; i++)
     {
         cin >> mas[i];
     }
    
    int proizv=1;
    for (int i=0; i<n; i++)
     {
         if (i%2==0) proizv=proizv*mas[i];
     }
    cout << "Произведение элементов массива, стоящих под четными номерами = " << proizv << endl;
    
    int nomer[2] = {-1, -1} ;
     int j=0;
    for (int i=0;i<n and j<2; i++)
      {
         if (mas[i]==0) {nomer[j]=i; j++;}
      }
    
    int sum=0;
    if (nomer[0]!=-1 and nomer[1]!=-1)  
      {
        for (int i=nomer[0]; i<nomer[1]; i++)
         {
                sum=sum+mas[i];
         }
        cout << "Сумма между двумя первыми нулевыми элементами = " << sum << endl;     
      }
       else { cout << "Нет двух элементов равных нулю \n";}
    
    j=0; 
    int temp;
    for (int i=0; i<n; i++)
      {
        if  (mas[i]<0)
          {
              temp=mas[j];
              mas[j]=mas[i];
              mas[i]=temp;
              j++;
          }
      }
      
    cout << "Отсортированный массив(вначале отрицательные элементы) : \n" ; 
    for (int i=0; i<n; i++) cout << mas[i] << "  ";  
       
    return 0;
}  
