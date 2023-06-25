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

// int main() {
//     int Number, counter;
//     cout << " Enter a number " << endl;
//     cin  >> Number;

//     for(counter = 2; counter <= Number-1; counter++)
//     {
//         if(Number % counter == 0)
//             break;
//     }
//     if(Number == counter)
//         cout << "Prime Number";
//     else
//      cout << " Not a Prime Number";

//     return 0;
// }

// Q7 ****************************************************

// (i) ****************************************************

// int main() {
//     int n;
//     int stars = 1;
//     cout << " Enter a number " << endl;
//     cin  >> n;

//     for(int i = 1; i<=n; i++) {
//         for(int j = 1; j<=stars; j++)
//             cout << "*";
//             stars++;

//         cout << endl;
//     }
// return 0;
// }

// (ii) ****************************************************

// int main() {
//     int n, spaces, stars;
//     cout << " Enter a number " << endl;
//     cin  >> n;

//     spaces = n-1;
//     stars = 1;

//     for(int i = 1; i<=n; i++){

//         for(int j = 1; j<=spaces; j++) {
//             cout << " ";
//         }
//         for (int j = 1; j<=stars; j++)
//         {
//             cout << "*";
//         }
//         spaces--;
//         stars++;
//         cout << endl;
//     }
//     return 0;
// }

// (iii) ****************************************************

// int main() {
//     int n, stars;
//     cout << " Enter a number " << endl;
//     cin  >> n;

//     stars = n;

//     for(int i = 1; i<=n; i++) {
//         for(int j = 1; j<=stars; j++) {
//             cout << "*";
//         }
//         stars--;
//         cout << endl;
//     }
//     return 0;
// }

// (iv) ****************************************************

// int main() {
//     int n, spaces, stars;
//     cout << " Enter a number " << endl;
//     cin  >> n;

//     spaces = 0;
//     stars = n;

//     for(int i = 1; i<=n; i++) {
//         for(int j = 1; j<=spaces; j++)
//             cout << " ";
//         for(int j = 1; j<=stars; j++) {
//             cout << "*";
//         }
//         spaces++;
//         stars--;
//         cout << endl;
//     }
//     return 0;
// }

// (v) ****************************************************

// int main() {
//     int n, stars, spaces;

//     cout << " Enter a number " << endl;
//     cin  >> n;

//     spaces = n-1;
//     stars = 1;

//     for(int i = 1; i<=n; i++) {
//         for(int j = 1; j<=spaces; j++)
//             cout << " ";
//         for(int j = 1; j<=stars; j++)
//             cout << "* ";
        
//         spaces--;
//         stars++;
//         cout << endl;
//     }
//     return 0;
// }

// (vi) ****************************************************

// int main () {
//     int n, stars, spaces;
    
//     cout << " Enter a number " << endl;
//     cin  >> n;

//     spaces = 0;
//     stars  = n;

//     for(int i = 1; i<=n; i++) {
//         for(int j = 1; j<=spaces; j++) 
//             cout << " ";
//         for(int j = 1; j<=stars; j++) {
//             cout << "*";
//         }

//         spaces++;
//         stars = stars-2;
//         cout << endl;
//     }
//     return 0;
// }

// (vii) ****************************************************

// int main() {
//     int n,Cspaces, lspaces, stars, cont;
//     int check = 1;
//     cout << " ENter number " << endl;
//     cin  >> n;

//     cont = n/2+1;
//     Cspaces = n-2;
//     lspaces = 0;

//     for(int i = 1; i<=n; i++) {
//         if(cont == i ){
//             check = 0;
//             for(int j = 1; j<=lspaces; j++){
//             cout << " ";
//         }
//         cout << "*";
//         cout << endl;
//         }
//         else{
//             for(int j = 1; j<=lspaces; j++){
//                 cout << " ";
//             }
//             cout << "*";
//             for(int j = 1; j<=Cspaces; j++) {
//                 cout << " ";
//             }
//             cout << "*";
//             cout << endl;
//         }
//         if(check){
//             lspaces++;
//             Cspaces-=2;
//         }
//         else{
//             lspaces--;
//             Cspaces+=2;
//         }
//     }
//     return 0;
// }

// (viii) ****************************************************

// int main() {
//     int n, qty;
//     cout << " Enter a anumber " << endl;
//     cin >> n;

//     qty = 1;

//     for(int i = 1; i<=n; i++) {
//         for(int j = 1; j<=qty; j++)
//             cout << qty << " ";

//         qty++;
//         cout << endl;
//     }
//     return 0;
// }

// (ix) ****************************************************

// int main() {
//     int n, start, cont;
//     cout << " Enter a anumber " << endl;
//     cin >> n;

//     start = 1;
//     for(int i = 1; i<=n; i++) {
//         for(int j = start; j<start+i; j++){
//             cout << j << " ";
//             cont = j;
//         }
//         start = cont;
//         start++;
//         cout << endl;
//     }
//     return 0;
// }

// (x) ****************************************************

// int main() {
//     int n,spaces,start,cont;

//     cout << " Enter a number " << endl;
//     cin  >> n;

//     spaces = n-1;

//     start = 1;
//     for(int i = 1; i<=n; i++) {
//         for(int j = 1; j<=spaces; j++)
//             cout << " ";
//         for(int j = start; j<start+i; j++){
//             cout << j;
//             cont = j;
//         }
//         int j=cont-1;
//             for(j; j>=i; j--){
//                 cout << j;
//                 cont = j;
//             }
//         start = cont;
//         start++;
//         spaces--;
//         cout << endl;
//     }
//     return 0;
// }

// (xi) ****************************************************

// int main() {
//     int n;
//     char qty = 'A';
//     cout << " Enter a character " << endl;
//     cin >> n;


//     for(int i = 1; i<=n; i++) {
//         for(int j = 65; j<=qty; j++)
//             cout << qty;

//         qty++;
//         cout << endl;
//     }
//     return 0;
// }

// (xii) ****************************************************

// int main() {
//     int n;
//     char start, cont;
//     cout << " Enter a anumber " << endl;
//     cin >> n;

//     start = 'A';
//     for(int i = 1; i<=n; i++) {
//         for(char qty = start; qty<start+i; qty++){
//             cout << qty << " ";
//             cont = qty;
//         }
//         start = cont;
//         start++;
//         cout << endl;
//     }
//     return 0;
// }


