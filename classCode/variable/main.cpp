#include<iostream>
using namespace std;

int main(void)
{
    // Character variable declaration
    char c = 'a';
    // char errC = "b"; // This line will cause a compilation error
    cout << c << endl;
    c = 'b';  // Reassigning the character variable
    cout << c << endl;
    char c2 = 'A';

    char gender;  // declaring gender variable: 举手声明，操作系统帮你找一个位置，用来保存gender的值
    gender = 'M';  // assigning value to gender: 赋值给gender变量, 把'M'放到gender变量中
    char letter = 'A';  // declaring and initializing letter variable: 声明并初始化letter 你直接拿着variable让操作系统帮你找一个位置，并放好这个变量
    gender = 'F';  // reassigning the gender variable

    cout << 'a' - 'A' << endl;  // Output the difference between 'a' and 'A' // ASCII value difference 97 - 65 = 32
    cout << c - c2 << endl;

    // your_name = "Ben"
    // yourName = "Ben"; // This line will cause a compilation error
    // abc1def
    // 123acs 
    // c1 
    short num1 = 1234; // 2byte: 65536 
    int num2 = 123456; // 4byte: 4294967296
    long long num3 = 123456789012345; // 8byte: 18446744073709551616

    int num4;
    cout << "Please input a number: ";
    cin >> num4;  // Input a number from the user;

    int x = 0, y = 1, z;
    cin >> x >> y >> z;

    int a, b;
    cout << "Please input two numbers: ";
    cin >> a >> b;  // Input two numbers from the user
    cout << a + b << endl;  // Output the sum of a and b
    cout << a - b << endl;  // Output the difference of a and b
    cout << a * b << endl;  // Output the product of a and b
    cout << a / b << endl;  // Output the quotient of a and b
    cout << a % b << endl;  // Output the remainder of a divided by b
    // let user give you a time in seconds, convert it to H M S
    /**
     input: 
     1234
     output:
     0 20 34
     
     */

    return 0;
}