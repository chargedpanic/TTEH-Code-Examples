/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Andy Lugo
//5-7-2024
//Prof.Casey
//CPS-200

#include <iostream>
#include <iomanip>
#include <math.h>
#include <limits>
using namespace std;
int main()
{

int area, width, length, height, radius, rectangleArea;
float triangleArea, circleArea;
const double pi = 3.14;

cout << "Input 1 for circle" << endl;
cout << "Input 2 for rectangle" <<  endl;
cout << "Input 3 for triangle" << endl;
cout << "Input 4 to quit" <<endl;
    
    while (1==1)
    {
        cout << "Enter your choice (1-4): ";
        cin >> area;
        cout << endl;
        
        switch (area)
		{
            case 1:
                cout << "Enter the radius of your circle\n";
                cin >> radius;
                cout << "Enter the area of your circle. \n";
                circleArea= pi * radius * radius;
                cout << "The area is : " << circleArea << endl;
            break;
            
            case 2:
                cout << "Enter the width of your rectangle"<< endl;
                cin >> width;
                cout << "Enter the length of your rectangle" << endl;
                cin >> length;
                cout << "Enter the area of your rectangle"  << endl;
                rectangleArea = width*length;
                cout << "The area is : " << rectangleArea << endl;
            break;
            
            case 3:
                cout << "Enter the length of your triangle" << endl;
                cin >> length;
                cout << "Enter the height of your triangle" << endl;
                cin >> height;
                triangleArea = length * height /2;
                
                cout << "The area is : " << triangleArea << endl;
                
            break;
            
            case 4:
                return 0;
            break;
            
            default: 
            std::cin.clear(); //clears the bad input flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discards any bad input
            cout << "invalid answer" << endl;
		}
		
    }
}
