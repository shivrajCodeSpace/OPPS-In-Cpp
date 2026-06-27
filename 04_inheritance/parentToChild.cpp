#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
            string name ="Shivraj Chakraborty";
            int age = 19;
    Person(){
        // this is the Parent Inheritnace
        cout<<"Give He/She the Univesity EnrollNumber:"<<endl;
    }
};
class Student : public Person{
    public:
            string name;
            int age;    
            double roll_no;
    Student(){
        //this the Child Inheritance
        cout<<"Welcome To our university"<<endl;
            }   
        void getinfo(){
            cout<<"Name:"<<name<<endl;
            cout<<"Age:"<<age<<endl;
            cout<<"Roll no"<<roll_no<<endl;
        } 
};
int main(){
    Student S1;
    cout<<"Enter the Roll Number:";
    cin>>S1.roll_no;

    S1.getinfo();

    return 0;

}