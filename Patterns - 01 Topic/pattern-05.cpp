#include <iostream>
using namespace std;
/*
OUTPUT:

    A B C D E 
    A B C D E 
    A B C D E 
    A B C D E 
    A B C D E 

*/


void charpattern(){
    int n = 5;
   


    for(int i = 0; i<n;i++)//outer
    { 
        char a = 'A';
        for(int j = 0; j<n;j++) //inner
        { 
            cout << a << " ";
            a = a +1;
        }

        cout << endl; // after inner loop 1 line print
    }
}

void numpattern(){
  int n = 5;
   


    for(int i = 0; i<n;i++)//outer
    { 
        for(int j = 0; j<n;j++) //inner
        { 
            cout << j << " ";
        }

        cout << endl; // after inner loop 1 line print
    }

}


int main(){

    cout << "Pattern Lecture" << endl;


  
    numpattern();
    std::cout << std::endl;
    std::cout << std::endl;
    charpattern();



    return 0;
}