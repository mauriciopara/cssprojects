#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float temperatura (float c)

{
  
 return (1.8  *c + 32);
}

main()

{

float c1,f1;

cout << "Digite uma temperatura em celcius :";
cin>> c1;
f1=temperatura(c1);
cout<< "A temperatura em Fahrenheit e : " <<f1<< ".";
}
getch();

