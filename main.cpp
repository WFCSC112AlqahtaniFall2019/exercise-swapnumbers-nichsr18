#include <iostream>
#include <vector>
#include<cassert>
using namespace std;

// print the values of two variables
void print_values(int p1,int p2) {
    cout << "Value of num1 is: " << p1 << endl;
    cout << "Value of num2 is: " << p2 << endl;
}
// swap values of two variables
void swap(int* p1, int* p2) {
    cout<<"Swap function"<<endl;
    int temp=*p1;
    *p1=*p2;
    *p2=temp;// copy the saved value of num1
}

int main() {

    int num1 = 10;
    int num2 = 20;
    int temp=num1;
    int* p1=&num1;
    int* p2=&num2;
    cout << "Before Swapping: " << endl;
    print_values(*p1, *p2); // function call
    swap(&num1, &num2); // swap values?
    cout << "After Swapping: " << endl;
    print_values(num1, num2); // function call

}
