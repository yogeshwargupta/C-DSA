#include<iostream>
#include<string>
using namespace std;
class beta{
    public:
    string name;
    int age,beta_no;
    string quality;
};
int main(){
    beta b1;
    b1.name= "Vikas";
    b1.age=20;
    b1.beta_no=1;
    b1.quality="Achha hai";

    beta b2;
    b2.name= "Anurag";
    b2.age=21;
    b2.beta_no=2;
    b2.quality="Bauk hai";

    cout<<b2.quality<<endl;
    cout<<b2.name;
}