#include<iostream>
# define N 10

void printTable() ;

int main()
{ 
  printTable() ;
  return 0;
}

void printTable()
{
  int num ;
  std::cout<<"Enter the number you want the multiplication table of: ";
  std::cin>>num;
  for(int i=1; i<= N; i++)
  {
    std::cout << num << " x " << i << " = " << num*i << std::endl ;
  }
}
