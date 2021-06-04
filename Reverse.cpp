/*Have the function FirstReverse(str) take the str parameter being passed and return the string in reversed order. For example: if the input string is "Hello World and Coders" then your program should return the string sredoC dna dlroW olleH.

Use the Parameter Testing feature in the box below to test your code with different arguments.*/

#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str) {
  
 string rvs;
 int l = str.length();
 char a;
 for(int i=l-1; i>=0;i--) 
 {
   a = str[i];
   rvs = rvs + a;
 }
  return rvs ;

}

int main(void) { 
   
  // keep this function call here
  cout << FirstReverse(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}