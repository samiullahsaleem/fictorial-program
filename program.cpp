// This Program is written by Sami Ullah Saleem. 
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int fact = 1;
    int num;
    cout <<"Please Etner Number: ";
    cin>> num;
    
    do{
        fact = fact * num;
        num--;
    }while(num>=1);
    cout << fact;

    return 0;
}
