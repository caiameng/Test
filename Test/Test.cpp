// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"




 #include "stdafx.h" 
 #include <iostream> 
 
 
 using namespace std; 
 
 
 
 
 class Preson 
{ 
 	private:string name; 
	private:int age; 
	public: string  getName(); 
 public: 
 	Preson() 
 	{ 
 		age = 0; 
 	} 
	~Preson()  	{ 
 	 
 	} 
 	int GetAge(); 
 }; 

 
 
 
 int _tmain(int argc, _TCHAR* argv[]) 
 { 
 	string str = "abcd"; 
 	printf("hello Github¡£"); 
 	cout<<"123"<<endl; 
 	getchar(); 
 	return 0; 
 } 
 //»ñÈ¡¶ÔÏóµÄÃû×Ö 
 string Preson :: getName() 
{ 
	string str; 
 	str = this->name; 
 	return str;  } 
int Preson::GetAge()  {  	int age = this->age; 
	return age; 
} 
