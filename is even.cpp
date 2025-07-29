#include <iostream>
using namespace std;

  bool iseven(int a)
  {
    if(a%2==0)
    {
      return 1;
    }
    else 
    {
      return 0;
    }
  }

int main() 
{
   int num;
   cin>>num;
   if(iseven(num))
   {
     cout<<"number is even";
   }
   else{
     
      cout<<"number is odd";
   }
  
}