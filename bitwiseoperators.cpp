
//Note:- It contains code for bitwise operators,pre and post increment decrements,break , continue, switch statements

#include<iostream>
using namespace std;
int main(){
    // bool a= false;
    // bool b= true;
    // // cout<< (a | b);
    // cout<<(3|4 );

    // int a =12;
    // a=a<<5;
    // cout<<a;

    // LEFT SHIFT SE MULTIPLY BY 2 HO JAATA HAI
    // RIGHT SHIFT SE DIVIDE BY 2 HO JAATA HAI



    /***********PRE-INCREMENT********************
     * ++a means pehle  increment karlo phir use 
     * a++ means pehle use baad me increment
     * --a means pehle decrement karo phir use 
     * a-- means pehle use karo phir decrement
     * BREAK is used to exit a loop or anything obviously puri nested loop ko exit nahi karega only particular loop jisme break
     * laga hai usko exit karega.
     * Continue is used to skip a particular idk what for example if a loop is running for for(int i=0;i<5;i++) then we can use 
     * if (i==2) continue; this will not execute the loop for i==2 so basically skip ho gaya. bhai samajh jaa yaar.
     * 
     * 
     * 
     * 
     * 
     * 
     * 
    */
    
    // int a=5;
    // cout<<(++a)*(++a);
    
//*********SWITCH***************///

int val;
cout<<"Enter the value"<<endl;
cin>>val;
switch(val)
{
    case 1: cout<<"Love";
    break;
    case 2: cout<<"Babbar";
    break;
    case 3: cout<<"Ramesh";
    break;
    case 4: cout<<"Rahul";
    break;
    default: cout<<"Suresh";

}



}