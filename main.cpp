//Author: Juan Aguirre-Ayala
#include <iostream>
using namespace std;

int rearrangeNumbers(int &, int &, int &); // <-- ADD YOUR FUNCTION PROTOTYPE HERE

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  rearrangeNumbers(red, green, blue); // <-- ADD YOUR FUNCTION CALL HERE


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

int rearrangeNumbers(int &r, int &g, int &b) // <-- ADD YOUR FUNCTION DEFINITON HERE
{
  int temp;
  if((b > g && b > r) && (g > r)) // switch b and r
  {
    temp = r;
    r = b;
    b = temp;
  }
  else if((g > b && g > r) && (b > r)) // switch r and g, then g and b
  {
    temp = r;
    r = g;
    g = temp; 
    temp = g;
    g = b;
    b = temp;
  }
  else if((b > g && b > r) && (r > g)) // switch b and r, then g and b
  {
    temp = r;
    r = b;
    b = temp;
    temp = g;
    g = b;
    b = temp;
  }
  else if((g > b && g > r) && (r > b)) // switch r and g
  {
    temp = g;
    g = r;
    r = temp;
  }
  else if((r > g && r > b) && (b > g)) // switch b and g
  {
    temp = g;
    g = b;
    b = temp;
  }
}
