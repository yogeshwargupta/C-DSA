#include<iostream>
using namespace std;
class Customer{
    public:
    string name;
    int account_no, balance;
    int *roi;
    Customer(){ // Default Constructor
       // roi = new int[100];
    }

    // Parameterized Constructor
    Customer(string name, int account_no, int balance){
           this-> name=name;
           this-> account_no=account_no;
           this-> balance=balance;
    }
    // Customer(string a, int b){  //Constructor overloading
    //     name=a;
    //     balance=b;
    // }

    //Inline Constructor
    inline Customer(string a, int b): name(a),balance(b){
    }


   //Copy Costructor
   Customer(Customer &B){
      name=B.name;
      account_no=B.account_no;
      balance=B.balance;
   }



    void display(){
        cout<<name<<" "<<account_no<<" "<<balance<<endl;
    }
};
int main(){
 Customer A1("Ram",35423,564654), A2("Shayam",34231,514654);
 A1.display();
 A2.display();
 Customer A3("Dham",2434);
 A3.display();
 Customer A4(A1);
 A4.display();
 Customer A5;
 A5=A2;
 A5.display();
}
 
 //Constructor can also open any file you need and is present in your 
 //laptop you just need towrite a code to open that file and constructor
 // will do it for you