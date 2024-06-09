// #include<iostream>;
// using namespace std;
// int main(){
// //Write a program to convert binary to Octal numbers
//  int num;
//     cout<<"Enter Binary Num: ";
//     cin>>num;
//     int ans=0,mul=1,rem;
//     while(num>0){
//      rem=num%10;
//      num=num/10;
//      ans=rem*mul+ans;
//      mul*=2;
//     }
// cout<<"Decimal N0.: "<<ans<<endl;
// int oct=0,mu=1,r;
// while(ans>0){
//       r=ans%8;
//      ans=ans/8;
//      oct=r*mu+oct;
//      mu*=10;
// }
// cout<<"Octal N0.: "<<oct<<endl;

// }

// #include <iostream>
// using namespace std;

// int main() {
//     string binary;
//     cout << "Enter binary number: ";
//     cin >> binary;

//     int ans = 0, mul = 1;
//     for (int i = binary.length() - 1; i >= 0; i--) {
//         int digit = binary[i] - '0'; // Convert character to integer
//         ans = ans + digit * mul;
//         mul *= 2;
//     }
//      cout<<"Decimal No: "<<ans<<endl;
//     int oct = 0, mu = 1;
//     while (ans > 0) {
//         int r = ans % 8;
//         ans = ans / 8;
//         oct = r * mu + oct;
//         mu *= 10; // Multiply by 10 because it's octal
//     }

//     cout << "Octal equivalent: " << oct << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter binary number: ";
//     cin >> num;

//     int ans = 0, mul = 1;
//     while (num > 0) {
//         int digit = num % 10;
//         num = num / 10;
//         ans = ans + digit * mul;
//         mul *= 2;
//     }
//     cout<<"Decimal No: "<<ans<<endl;
//     int oct = 0, mu = 1;
//     while (ans > 0) {
//         int r = ans % 8;
//         ans = ans / 8;
//         oct = r * mu + oct;
//         mu *= 10; // Multiply by 10 because it's octal
//     }

//     cout << "Octal equivalent: " << oct << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int octal, tempOctal, decimal = 0, binary = 0, base = 1;

//     cout << "Enter an octal number: ";
//     cin >> octal;

//     // Convert octal to decimal
//     tempOctal = octal;
//     while (tempOctal > 0) {
//         int digit = tempOctal % 10;
//         decimal += digit * base;
//         base *= 8;
//         tempOctal /= 10;
//     }
//    cout<<"Decimal Equivalent: "<<decimal<<endl;
//     // Convert decimal to binary
//     int binaryDigit, binaryBase = 1;
//     while (decimal > 0) {
//         binaryDigit = decimal % 2;
//         binary += binaryDigit * binaryBase;
//         decimal /= 2;
//         binaryBase *= 10;
//     }

//     cout << "Binary equivalent: " << binary << endl;

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

// Function to convert an octal digit to a binary string
string octalDigitToBinary(char octalDigit) {
    switch (octalDigit) {
        case '0': return "000";
        case '1': return "001";
        case '2': return "010";
        case '3': return "011";
        case '4': return "100";
        case '5': return "101";
        case '6': return "110";
        case '7': return "111";
        default: return ""; // Invalid octal digit
    }
}

int main() {
    string octal;
    cout << "Enter an octal number: ";
    cin >> octal;

    string binary = "";

    // Convert each octal digit to binary and concatenate
    for (char digit : octal) {
        if (digit >= '0' && digit <= '7') {
            binary += octalDigitToBinary(digit);
        } else {
            cout << "Invalid octal digit: " << digit << endl;
            return 1; // Exit with an error code
        }
    }

    cout << "Binary equivalent: " << binary << endl;

    return 0;
}
