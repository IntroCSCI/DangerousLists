#include <iostream>

using namespace std;

const int SIZE = 5;

int main()
{
  int myArray[SIZE] = {1,10,100,1000,10000};

  for(int index=0; index < SIZE; index++)
  {
   cout<<"Array location "<<index<<" is "<<myArray[index]<<endl;
  }

  //DANGER ZONE
  cout<<"Array location 5 is "<<myArray[5]<<endl;

  myArray[-1] = 0;


  return 0;
}
