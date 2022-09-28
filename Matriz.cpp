#include <iostream>

int main(){
  int f, c;
  
  do{
    std::cout<<"Humano ingresa el número de Filas de tu Matriz: ";
    std::cin>>f;
  } while(f<1 || f>10);
  
  do{
    std::cout<<"Humano ingresa el número de Columnas de tu Matriz: ";
    std::cin>>c;    
  } while(c<1 || c>10);
  
  int array [f][c];
  
  for(int i = 0; i = f; i++){
    for(int j = 0; j< c; j++){
      std::cout<<"Humano ingresa el valor de la posición"<<(i+1)<<","<<(j+1)<<" : ";
      std::cin>>array[i][j];
    }
  } for(int i = 0; i = f; i++){
      for(int j = 0; j = c; j++){
        std::cout<<array[i][j]<<" ";
      }
      std::cout<<"\n";
  }
  std::cout<<"\n";
  
  system("pause");
  return 0;
}
