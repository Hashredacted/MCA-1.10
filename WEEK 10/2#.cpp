#include<iostream>
#include<string>
using namespace std;
struct companyemployes
{
 string name;
 int basicpay;
 float DA;
 float grosspay; 
};

int main(){
   cout<<"Get 100 employee data of company.\n"; 
   int size;
   cout<<"\nEnter the Number of employ Data you want to Write : ";
   cin>>size;
   companyemployes employ[size];
   if(size==0){
        cout<<"Size cannot be Zero";
    }
    else{
   for (int i = 0; i <size; i++)
   {
    
    cout<<"\nEnter Employee Name: ";
    cin>>employ[i].name;
    cin.ignore();
    cout<<"Enter Employee Basic Pay: ";
    cin>>employ[i].basicpay;
    cin.ignore();
    employ[i].DA=(0.52*employ[i].basicpay);
    employ[i].grosspay=(employ[i].basicpay+employ[i].DA);
   }
}

   //Printing loop
   for (int i = 0; i <size; i++)
   {
    cout<<"\n\nEmploy "<<(i+1)<<"\nEmploy Name: "<<employ[i].name<<"\n"<<"Employ Basic Pay: "<<employ[i].basicpay<<"\n"
    <<"Employ DA:"<<employ[i].DA<<"\n"<<"Employ Gross Pay: "<<employ[i].grosspay<<"\n\n";
   }
   
   
   return 0;
}
