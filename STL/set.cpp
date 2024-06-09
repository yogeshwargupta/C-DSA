#include<iostream>
#include<bits/stdc++.h>


//only unique value is stord
//ascending ordeer
//insertion deletion ans serch --->TC=O(log n)
//Generally implemented using Red-Black Tree & ALV Tree
//sort in des order too using greater<type>

using namespace std;

class Person{
    public:
    int age;
    string name;

    bool operator < (const Person &other) const{
        return age<other.age;
    }
};

int main(){
    // set<int, greater<int>>s;
    // //insert
    // s.insert(10);
    // s.insert(110);
    // s.insert(110);
    // s.insert(310);
    // s.insert(190);
    // s.insert(9);
    // s.insert(51);
    // s.insert(3);


    // for(auto it=s.begin();it!=s.end();it++)
    // cout<<*it<<" ";

    //search
    // if(s.find(10)!=s.end()) //find->return the iterator of that number
    // cout<<"Present\n";
    // else
    // cout<<"Not Present\n";

    // if(s.count(10))     //count(*)->count of that number
    // cout<<"Present\n";
    // else
    // cout<<"Absent\n";

    // cout<<s.count(10)<<endl;


    // //delete
    // s.erase(10);
    // cout<<s.count(10)<<endl;
    set<Person>s;
    Person p1, p2, p3;
    p1.age =12, p1.name = "Ayushi";
    p2.age =14, p2.name = "Yoshi";
    p3.age =15, p3.name = "Yogesh";

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);

    for(auto it=s.begin();it!=s.end();it++){
        cout<<it->age<<" "<<it->name<<endl;     //it->(*it).age
    }
}