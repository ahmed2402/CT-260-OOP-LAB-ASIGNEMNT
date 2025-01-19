// 1. Write a program that take input of your roll number along with the marks obtained 
// in five subjects and display the total marks obtained and the percentage.  

#include <iostream>
using namespace std;
int main() {
 int rollNum;
 float marks, totalMarks = 0, perc ;
 cout << "Enter your Roll No. : " << endl ;
 cin >> rollNum ;
for (int i = 0; i <= 4 ; i++)
{
 cout << "Enter your marks : " << endl ;
 cin >> marks ;
 totalMarks = totalMarks+marks ;
}
cout << "Your Total marks of 5 Subjects are : " <<totalMarks <<endl ;
perc = (totalMarks*100)/500;
cout << "Your Percentage is : " <<perc << "%"; 

 return 0;
}

// 2. Write a program to swap three numbers entered by a user using pointers.

#include <iostream>
using namespace std;

void swapNumbers(int* a, int* b, int* c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "Before swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << ", num3 = " << num3 << endl;

    swapNumbers(&num1, &num2, &num3);

    cout << "After swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << ", num3 = " << num3 << endl;

    return 0;
}



// 3. Write a program to convert temp from Fahrenheit to Celsius unit using equation
// C=(F-32)/1.8

#include <iostream>
using namespace std;
int main() {
    float farenheitTemp, CelsiusTemp ;
    cout << "Enter Temp in Fahrenheit : " << endl;
    cin >> farenheitTemp ;
    CelsiusTemp = (farenheitTemp-32)/1.8 ;
    cout << "Your temp in Celsius is : " << CelsiusTemp <<" C" << endl;
 return 0;
}

// 5. Write a program to find Surface area and volume of a sphere using functions

#include <iostream>
using namespace std;

float surfaceArea(float r){
        float area = 4*3.142*(r*r);
        return area;
    }
float Volume(float r){
        float volume = (4/3)*3.142*(r*r*r);
        return volume;
    }    
int main() {
    float radius;
    cout << "Enter Radius of Sphere" <<endl;
    cin >> radius ;
    float area = surfaceArea(radius) ;
    cout << "Surface Area of sphere is : " << area << endl ;
    float volume = Volume(radius) ;
    cout << "Volume of sphere is : " << volume << endl ;
 return 0;
}
