#include <iostream>
#include <conio.h>

using namespace std;
    
    int x;
    int c;
    int v;
    int a;
    const int aux = 2;
    string msg1 = "Welcome to the Simple Polyhedra checker. \n";    
    string msg2 = "\nEnter the number of faces: ";
    string msg3 = "\nEnter the number of vertices: ";
    string msg4 = "\nEnter the number of edges: ";
    string msg5 = "\nThe polyhedron is simple.";    
    string msg6 = "\nThe polyhedron is not simple.";

int main()
{
    cout << msg1;
    cout << msg2;
    cin >> c;
    cout << msg3;
    cin >> v;
    cout << msg4;
    cin >> a;
    
    x = c + v - a;
    
    if (x == aux)
    {
      cout << msg5;  
    }
    
    else 
    {
      cout << msg6;  
    }

    getch();
    return 0;
}