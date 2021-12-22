
#include "std_lib_facilities.h"

using namespace std;

int main(){

    int age;
    string first_name;
    string friend_name;
    char friend_sex = 0;

    cout<<"Please enter your first name! : ";
    cin>>first_name;
    cout<<endl<<"Hello, "<<first_name<<endl;
    cout<<endl<<"Enter the name of the person you want to write to : ";
    cin>>first_name;
    cout<<endl<<"Dear "<<first_name<<", "<<endl
        <<"It's been a while, how are you?"<<endl
        <<"It just came up to my mind that I hadn't heard from you since last year"<<endl<<endl;

    cout<<"Name of the friend you'd like to know about: ";
    cin>>friend_name;
    cout<<endl<<"Have you seen "<<friend_name<<" lately?"<<endl<<endl;

    cout<<"Friend's gender (m = male, f = female): ";
    cin>>friend_sex;

    if(friend_sex == 'm'){
            cout<<endl<<"If you see "<< friend_name<<", Please tell him to call me."<<endl;
    }
        else if(friend_sex == 'f'){
            cout<<endl<<"If you see "<< friend_name<<", Please tell her to call me."<<endl;
    }

    cout<<endl;
    cout<<"Your friend's age: ";
    cin>>age;

    if(age <= 0 || age >= 110){
            cout<<"You are kidding"<<endl;
    }
        else if(age <= 12){
            cout<<"Next year you will be "<<age+1<<endl;
        }
        else if(age == 17){
            cout<<"Next year you will be able to vote"<<endl;
        }
        else if(age >= 70){
            cout<<"I hope you are enjoying your retirement."<<endl;
        }

        cout<<"Yours sincerely,"<<endl<<endl<<"Christian\n";

    return 0;
}
