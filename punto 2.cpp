#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>

using namespace std;
float datos[100];

float calculadora(void)
{ float media=0, calculo=0,resta,sumatoria=0;
  for(int i=0; i<100; i++)
  {
    media=media+datos[i];
  }
  media=media/100;
  for (int j=0;j<100;j++)
  {
      resta=datos[j]-media;
      resta=resta*resta;
      sumatoria=sumatoria+resta;
  }
  calculo= sqrt(sumatoria/100);
return calculo;
}





int main()
{

    float desviacion;
    //initialize random seed:
srand(static_cast<unsigned>( time(nullptr) ) );
    //generate a number between 1 and 10
    for(int i=0; i<100; i++)
    {
        
        datos[i] = rand() % 10 + 1;
        datos[i] = datos[i]/10;
        if(i%2==0)
        {
          datos[i]=datos[i]*(-1);
        }
        cout <<datos[i]<<" ";
        if(i%10==0 && i!=0)
        {
            cout<<endl;
        }


    }
    cout<< endl;
    desviacion = calculadora();
    cout << "La desviacion es: "<< desviacion<<endl;

   
    return 0;
}
