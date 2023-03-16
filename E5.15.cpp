/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E5.15

I wrote a function that swaps its three arguments to arrange them in sorted order

*/

#include <iostream>
using namespace std;
void sort3(int& a, int& b, int& c)

{
int temp;
if(a > c)

{
temp = a;
a = c;
c = temp;
}

if(a > b)
{
temp = a;
a = b;
b = temp;
}

if(b > c)
{
temp = b;
b = c;
c = temp;
}
}

int main() 
{
int v = 3;
int w = 4;
int x = 1;

sort3(v, w, x);
cout<<"v = "<<v<<endl;
cout<<"w = "<<w<<endl;
cout<<"x = "<<x<<endl;

return 0;

}
