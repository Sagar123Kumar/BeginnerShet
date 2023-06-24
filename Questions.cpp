#include<iostream>
using namespace std;

// Q1 *********************************************

// int main() {
//     int FirstNumber = 230, SecondNumber = 435;
//     cout << FirstNumber + SecondNumber << endl;
//     return 0;
// }

//Q2 ************************************************

// int main() {
//     int Number;
//     cout << " Enter a number " << endl;
//     cin  >> Number;
//     if(Number % 2 == 0 && Number > 0)
//         cout << Number << " is even number. ";
//     else if(Number < 1)
//         cout << Number << " is not a odd and even number. ";
//     else
//         cout << Number << " is odd number. ";
//     return 0;
// }

// Q3 ************************************************

// int main() {
//     int FirstNumber = 5, SecondNumber = 2;
//     //swap(FirstNumber,SecondNumber);
//     FirstNumber = FirstNumber + SecondNumber;
//     SecondNumber = FirstNumber - SecondNumber;
//     FirstNumber = FirstNumber - SecondNumber;
//     cout << FirstNumber << " " << SecondNumber << endl;
//     return 0;
// }

// Q4 *************************************************

// int main() {
//     int FirstNumber, SecondNumber, ThirdNumber, result;

//     cout << " Enter three numbers : " << endl;
//     cin  >> FirstNumber >> SecondNumber >> ThirdNumber;

//     if(FirstNumber > SecondNumber) {

//         if(FirstNumber > ThirdNumber)
//             result = FirstNumber;
//         else
//             result = ThirdNumber;
//     }
//     else {
//         if(SecondNumber > ThirdNumber) 
//             result = SecondNumber;
//         else
//             result = ThirdNumber;
//     }
//     cout << " In " << FirstNumber << "," << SecondNumber << "," << ThirdNumber << " the largest number is " << result << endl;

//     return 0;
// }

// Q5 **************************************************

// int main() {
//     int Number, container, sum = 0;
//     cout << " Enter a number " << endl;
//     cin  >> Number;
//     container = Number;
//     while(container) {
//         sum = sum + container--;
//     }
//     cout << " Sum of " << Number << " natural is " << sum << endl;
//     return 0;
// }

// Q6 ************************************************

int main() {
    int Number, counter;
    cout << " Enter a number " << endl;
    cin  >> Number;

    for(counter = 2; counter <= Number-1; counter++)
    {
        if(Number % counter == 0)
            break;
    }
    if(Number == counter)
        cout << "Prime Number";
    else
     cout << " Not a Prime Number";

    return 0;
}