#include<iostream>
#include<windows.h>

using namespace std;
int hour,minute,second,time,am;

void display()
{
    cout<<"\n\tEnter Hour: ";
    cin>>hour;
    cout<<"\n\tEnter Minute: ";
    cin>>minute;
    cout<<"\n\tEnter Second: ";
    cin>>second;
}

void watch()
{
    if(hour<24&&minute<60&&second<60)
    {
       time++;
    }
    system("cls");
}

int main()
{
while(time==0)
    {
        if(hour<24&&minute<60&&second<60)
        {
        display();
        watch();
        }
        else{
          cout<<"\n\tIncorrect time. \n\n\tPlease enter correct time!\n";
          display();
          watch() ;
        }
    }

while(am==0)
    {
        system("cls");
        if(hour<12)
        {
        cout<<"\n\tThe Time is: "<<hour<<":"<<minute<<":"<<second<<" AM"<<endl;
        }
        else
        {
        cout<<"\n\tThe Time is: "<<hour<<":"<<minute<<":"<<second<<" PM"<<endl;
        }
        Sleep(1000);
        second++;

        if(second>59)
        {
            second=0;
            minute++;
        }
        if(minute>59)
        {
            minute=0;
            hour++;
        }
        if(hour>23)
        {
            hour=0;
        }
    }
    return 0;
}
