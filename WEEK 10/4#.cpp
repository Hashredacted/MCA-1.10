#include <iostream>
#include <string>
using namespace std;
union Address {
    char name[100];
    char home_address[100];
    char hostel_address[100];
    char city[100];
    char state[100];
    char zip[100];
};

int main() {
    union Address myAddress;
    
    cout<<"enter name: ";
    cin.getline(myAddress.name, 100);
    cout << "Name: " << myAddress.name << "\n";
    cout<<"enter home address: ";
    cin.getline(myAddress.home_address, 100);
    cout << "Home Address: " << myAddress.home_address << "\n";
    cout<<"enter hostel address: ";
    cin.getline(myAddress.hostel_address, 100);
    cout << "Hostel Address: " << myAddress.hostel_address << "\n";
    cout<<"enter city: ";
    cin.getline(myAddress.city, 100);
    cout << "City: " << myAddress.city << "\n";
    cout<<"enter state: ";
    cin.getline(myAddress.state, 100);
    cout << "State: " << myAddress.state << "\n";
    cout<<"enter zip: ";
    cin.getline(myAddress.zip, 100);
    cout << "ZIP: " << myAddress.zip << "\n";

    return 0;
}
