// THIS PROGRAM ABOUT CALCULATE THE CIRCUMFERENCE AND AREA OF CIRCLE
/* for notes the program is dinamic program
*/

#include <iostream>

using namespace std;
int main(){
  float phi = 3.14 ;
  float radius ;
  cout <<"Radius: " << flush ;
  cin >> radius ;

  float Circumference = phi*radius*radius ;
  float Area = 2*phi*radius ;

  cout << "The Circumference of Circle is " << Circumference << endl ;
  cout << "The Area of Circle is " << Area << endl ;

  return 0;
}