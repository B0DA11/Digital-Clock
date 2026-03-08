#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int hour, min, sec;
    cout<<"Hours : ";
    cin>>hour;
    cout<<"Min : ";
    cin>>min;
    cout<<"Sec : "; 
    cin>>sec;
    
    while(true){
        system("color 6");
        Sleep(900);
        system("cls");
        if(sec>59){
            sec=0;
            min++;
        }
        if(min>59){
            min=0;
            hour++;
        }
        if(hour>23){
            hour=0;
        }
            cout<<hour<<" : "<<min<<" : "<<sec;
            sec++;
    }
}