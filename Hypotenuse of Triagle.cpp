// THESE PROGRAM ABOUT CALCULATE THE HYPOTENUSE OF TRIAGLE WHILE USING PHYTAGORAS
/* for notes the program  is dinamic program*/

#include <iostream>
#include <math.h>

using namespace std;
int main(){
    float Upright ;
    float Base ;
    int Hypotenuse ; 
    cout << "Upright Side: " << flush;
    cin >> Upright ;
    cout << "Base: " << flush;
    cin >> Base ;

    Hypotenuse = sqrt(pow(Upright,2)+pow(Base,2));
    cout <<"The Hypotenuse of Triagle is: " << Hypotenuse << endl;

    return 0;
}


