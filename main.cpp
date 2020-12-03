/*
	Name: ronak prajapti
	Copyright: 
	Author: 
	Date: 30-07-20 16.01
	Description: scientific calculator
*/

#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;



int simple(); //function 1
int complex(); //function 2


main()
{
	int option;
	// main menu
	
	cout<<"\n******* SCIENTIFIC CALCULATOR *******\n";
	cout<<"\n1 : simple calculation:";
	cout<<"\n2 : complex claculation";
	cout<<"\n3 : exit";
	cout<<"\n**************************************\n";
	
	cout<<"\nchoose the option:";
	cin>>option;
	

	while(1)
	{
	
		switch(option)
		{
			case 1: 
					simple(); //function 1 calling
					break;
					
				
			case 2:
					complex(); //function 2 calling
			    	break;
			
			case 3:
				    exit(1); //exit the program
					return 0;
					break;
				
			default:
					cout<<"\n\nwrong option!!! choose the write option\n";
					cout<<"\nchoose the option:";
					cin>>option;
					break;
			
       	}
      
       
	

   }
   return 0;
   return 0;
  
}
int simple()
{
	// simple calculation menu
	

	float a,b,add,sub,mul,div;
	int sim;

    cout<<"\n\n---------- SIMPLE ------------\n";
    cout<<"\n 0 : main menu";
	cout<<"\n 1 : addition";
	cout<<"\n 2 : substraction";
	cout<<"\n 3 : multiplication";
	cout<<"\n 4 : division";
	cout<<"\n 5 : complex";
	cout<<"\n 6 : exit";

	
	
	cout<<"\n-------------------------------\n";
	
	cout<<"\n\nchoose the option:";
	cin>>sim;
	
	switch(sim)
	
	{
		case 0:
			return main();
			return 0;
		
	    case 1:
	  		cout<<"\nenter the value of a:";
			cin>>a;
			cout<<"\nenter the value of b:";
			cin>>b;
			add=a+b;
			cout<<"\n\n"<<a<<" + "<<b<<" = "<<add;
			
			break;
		case 2:
			cout<<"\nenter the value of a:";
			cin>>a;
			cout<<"\nenter the value of b:";
			cin>>b;
			sub=a-b;
			cout<<"\n\n"<<a<<" - "<<b<<" = "<<sub;
			break;
		case 3:cout<<"\nenter the value of a:";
			cin>>a;
			cout<<"\nenter the value of b:";
			cin>>b;
			mul=a*b;
			cout<<"\n\n"<<a<<" * "<<b<<" = "<<mul;
			break;
		case 4:
			cout<<"\nenter the value of a:";
			cin>>a;
			cout<<"\nenter the value of b:";
			cin>>b;
			div=a/b;
			cout<<"\n\n"<<a<<" / "<<b<<" = "<<div;
			break;
		case 5:
			return complex(); //back to the complex menu
			break;
			case 6:
				exit(1);
				return 0;
				break;
				
	
			
			
		
		     
		default:
			cout<<"\n\nwrong option !!! choose the write option";
			
			break;
	}
	
}
int complex()
{
	// complex calculation menu
	
	float a,b,red,deg,ans,fact=1,i;
	int com;
	const float PI=3.14159;

	
	cout<<"\n\n---------- COMPLEX ------------\n";
	cout<<"\n 0  : main menu";
	cout<<"\n 1  : sin";
	cout<<"\n 2  : cos";
	cout<<"\n 3  : tan";
	cout<<"\n 4  : cosec";
	cout<<"\n 5  : sec";
	cout<<"\n 6  : cot";
	cout<<"\n 7  : power";
	cout<<"\n 8  : root";
	cout<<"\n 9  : log2";
	cout<<"\n 10 : log10";
	cout<<"\n 11 : factorial";
	cout<<"\n 12 : sqare";
	cout<<"\n 13 : cube";
	cout<<"\n 14 : simple";
	cout<<"\n 15 : exit";
	
	cout<<"\n\nchose the option:";
	cin>>com;
	switch(com)
	{
		case 0:
			return main();
			 return 0;
			 break;
		case 1:
			cout<<"\nenter the value of deg:";
			cin>>deg;
			red=deg*PI/180;
			ans=sin(red);
			cout<<"sin "<<(deg)<<" = "<<ans;
			break;
		case 2:
			cout<<"\nenter the value of deg:";
			cin>>deg;
			red=deg*PI/180;
			ans=cos(red);
			cout<<"cos "<<(deg)<<" = "<<ans;
			break;
		case 3:
			cout<<"\nenter the value of deg:";
			cin>>deg;
			red=deg*PI/180;
			ans=tan(red);
			cout<<"\ntan "<<(deg)<<" = "<<ans;
			break;
		case 4:
			cout<<"\nenter the value of deg:";
			cin>>deg;
			red=deg*PI/180;
			ans=1/sin(red);
			cout<<"\ncosec "<<(deg)<<" = "<<ans;
			break;
		case 5:
			cout<<"\nenter the value of deg:";
			cin>>deg;
			red=deg*PI/180;
			ans=1/cos(red);
			cout<<"\nsec"<<(deg)<<"="<<ans;
			break;
		case 6:
			cout<<"\nenter the value of deg:";
			cin>>deg;
			red=deg*PI/180;
			ans=1/tan(red);
			cout<<"\ncot "<<(deg)<<" = "<<ans;
			break;
		case 7:
			cout<<"\nenter the value of a:";
			cin>>a;
			cout<<"\nenter the value ofr b:";
			cin>>b;
			ans=pow(a,b);
			cout<<"\n"<<(a)<<" power "<<(b)<<" = "<<ans;
			break;
		case 8:
			cout<<"\nenter the value of a:";
			cin>>a;
			ans=sqrt(a);
			cout<<"\nroot of "<<(a)<<" = "<<ans;
			break;
		case 9:
			cout<<"\nenter the value of a:";
			cin>>a;
			ans=log(a);
			cout<<"log2 "<<(a)<<" = "<<ans;
			break;
		case 10:
			cout<<"\nenter the value of a:";
			cin>>a;
			ans=log10(a);
			cout<<"\nlog10 "<<(a)<<" = "<<ans;
			break;
		case 11:
			cout<<"\nenter the number of a :";
			cin>>a;
			for(i=a;i>=1;i--)
			{
				fact=fact*i;
			}
			cout<<"\nfactorial "<<(a)<<" = "<<fact;
	        break;
	    case 12:
	        cout<<"\nenter the number of a :";
			cin>>a;
			ans=a*a;
			cout<<"\nsqure of "<<(a)<<"*"<<(a)<<" = "<<ans;
			break;
		case 13:
			cout<<"\nenter the number of a :";
			cin>>a;
			ans=a*a*a;
			cout<<"\nsqure of "<<(a)<<"*"<<a<<"*"<<a<<" = "<<ans;
			break;
			case 14:
				return simple(); //back to the simple mennu
				break;
				case 15:
					exit(1);
					return 0;
					break;
		default:
			cout<<"\n\nwrong option !!!! choose the right option \n";
			
			break;
			
	}
	
	"\n---------------------------------------n";

}

