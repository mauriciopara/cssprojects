#include<iostream>
#include<conio.h>
using namespace std;

float letra (char a1)
{

if(( a1 >= 65 && a1<= 90) || ( a1 >= 97 && a1 <= 122))
   {
   	if( (a1 == 65 )|| (a1 == 97))
   	   return 1;
   
      if(a1 == 66 || a1 == 98)
         return 2;
           
		   if(a1 == 67 || a1 == 99)
            return 3;
               
			   if(a1 == 68 || a1 == 100)
                 return 4;
              
			       if(a1 == 69 || a1 == 101)
                    return 5; 
                     
                      if(a1 == 70 || a1 == 102)
                    return 6; 
                    
                     if(a1 == 71 || a1 == 103)
                    return 7; 
                    
                     if(a1 == 72 || a1 == 104)
                    return 8; 
        
		              if(a1 == 73 || a1 == 105)
                    return 9; 
                    
                     if(a1 == 74 || a1 == 106)
                    return 10; 
                     
                     if(a1 == 75 || a1 == 107)
                    return 11; 
                    
                     if(a1 == 76 || a1 == 108)
                    return 12; 
                    
                     if(a1 == 77 || a1 == 109)
                    return 13; 
                    
                     if(a1 == 78 || a1 == 110)
                    return 14; 
                    
                     if(a1 == 79 || a1 == 111)
                    return 15; 
                    
                    if(a1 == 80 || a1 == 112)
                    return 16; 
                    
                    if(a1 == 81 || a1 == 113)
                    return 17; 
                    
                    if(a1 == 82 || a1 == 114)
                    return 18; 
                    
                    if(a1 == 83 || a1 == 115)
                    return 19; 
                    
                    if(a1 == 84 || a1 == 116)
                    return 20; 
                    
                    if(a1 == 85 || a1 == 117)
                    return 21; 
                    
                    if(a1 == 86 || a1 == 118)
                    return 22; 
                    
                    if(a1 == 87 || a1 == 119)
                    return 23; 
                    
                    if(a1 == 88 || a1 == 120)
                    return 24; 
                    
                    if(a1 == 89 || a1 == 121)
                    return 25; 
                    
                    if(a1 == 90 || a1 == 122)
                    return 26; 
                    
        
    }
	else return 0;
    
    
   
   
}
   
   main()
   {
   char a; 
   float cachorro;
   	
   	cout<< "Digite uma letra: \n";
   	cin>> a;

   	cachorro = letra (a);
   	
 
    cout<< "A posicoo desta letra corresponde a " <<cachorro<<  ".";
  
   	
   	
   	getch();
   	
   }
