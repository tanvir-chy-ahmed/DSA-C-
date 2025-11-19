#include <iostream>

/*

OUTPUT:
A 
B B 
C C C 
D D D D 
E E E E E 
F F F F F F 
G G G G G G G 
H H H H H H H H 

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6 
7 7 7 7 7 7 7 
8 8 8 8 8 8 8 8 
9 9 9 9 9 9 9 9 9 

*/

void numpattern(){
    int n = 9;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << i+1 << " ";
        }
        std::cout << std::endl;
    }

}
void charpattern(){

    int n = 9;
    char a = 'A';
    for(int i = 1;i<n;i++)
    {
        for(int j = 1;j < i+1;j++)
        {
            std::cout << a << " ";
           
        
        }
        
        std::cout << std::endl;
         a +=1;

    }
}


int main()
{
    
    charpattern();
    std::cout << std::endl;
    numpattern();

    return 0;
}