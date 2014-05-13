// cppProjectCharArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include <typeinfo>
#include <boost/algorithm/string.hpp>

#define MAX_LEN 256


using namespace std;


char * strncpy_convert( char * destination, const char * source, size_t num)
{
	destination[num-1] = '\0';
	return strncpy(destination, source, num-1);
}

void displayArray(char * p){
	while(*p){
		cout << *p;
		p++;
	}
	cout << endl;

}
// the following function will not return the actual size of a 
// char string but 4. 
int testFunc(char p[]){
	displayArray(p);
	return sizeof(p);
}

int stringLength(std::string& s){
	return s.size();
}

int main(){

	string name,name1, name2;
	name1 = "Yaya";
	name2 = "Wawa"; 

	string newLine(20,'*');
	newLine.push_back('\n');

	char obligor_cstr[MAX_LEN];
	char obligor_cstr1[MAX_LEN];

	char* ptrObligor;

	name = "AGeeieke99292,,92921@UI";
	//boost::to_upper(name);
	strcpy(obligor_cstr,name.c_str());
	//cout << typeid(name.c_str()).name << endl;
	//strcpy(ptrObligor,name.c_str());
	strncpy_convert(obligor_cstr1,name.c_str(),MAX_LEN);

	
	cout << newLine;
	cout << name << endl;
	cout << newLine;
	
	//displayArray(ptrObligor);

	cout << newLine;


  char str1[]="Sample string";
  char str2[40];
  char str3[40];
  char* str4 = "char pointer";
  strcpy (str2,name.c_str());
  strcpy (str3,"copy successful");
  strcpy (str1,"name");
    
  //strcpy (str4,"Julian"); /* this will cause serious problem */

  printf ("str1: %s\nstr2: %s\nstr3: %s\nstr4: %s\n",str1,str2,str3,str4);
  cout << newLine;
  displayArray(str2);
  boost::to_upper(obligor_cstr1);
  displayArray(obligor_cstr1);

  cout << newLine;
  cout << "The size of obligor_cstr1 is: " << sizeof(obligor_cstr) << endl;
  cout << "The size of the name string is :" << sizeof(string) << endl;

  cout << newLine;
  cout << "The name is : " << name << endl;
  name = std::string(str1);
  cout << "Now the name is : " << name << endl;

  cout << newLine;
  cout << newLine;
  cout << testFunc(str2) << endl;
  std::string tempS;
  tempS = std::string(str2);
  cout << tempS << endl;
  cout << stringLength(tempS) << endl; // this gives the numbers of characters in the string
  cout << sizeof(str2) << endl; // this just gives the occuputation of char [] in memory. 
  cout << strlen(str2) << endl; 

	return 0;
}
