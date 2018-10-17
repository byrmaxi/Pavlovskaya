#include <iostream>

using namespace std;

int main()
{
    struct STUDENT
     {
         char FIO[30];
         int nGrup;
         int otmetka[5];
     };
     
     int n=10;
     STUDENT mas[n];
     
     for (int i=0; i<n; i++)
       {
           cout << "Имя студента: ";
           cin >> mas[i].FIO;
           
           cout << "Группа: ";
           cin >> mas[i].nGrup;
           
           cout << "Оценки : ";
            for (int j=0; j<5; j++)
              {
                   cin >> mas[i].otmetka[j];
              }
           cout << endl;      
       }
       
      STUDENT temp;
      for (int i = 0; i < 10 - 1; i++) 
       {
        for (int j = 0; j < 10 - i - 1; j++) 
          {
            if (mas[j].FIO[0] > mas[j + 1].FIO[0]) 
              {
                temp = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = temp;
              }
           }
        }  
        
        int dvoika=0;
        cout << "Студенты у которых есть оценки: ";    
       for (int i=0; i<10; i++)
         {
             for (int j=0; j<5; j++)
               {
                   if (mas[i].otmetka[j]==2) 
                    {
                        cout << mas[i].FIO << " из группы " << mas[i].nGrup;
                        dvoika++;
                        break;
                    }
               }
         }
        
        if (dvoika==0) cout << "Двоичников нет."  ;  
   

    return 0;
}


