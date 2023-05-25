#include<iostream>
using namespace std;
int main()
{
    cout<<"write 1st 2 char(loweer case mandatory)and l for lunch and d for dinner and b for beakfast of a day for meal  info."<<endl;
    cout<<"example:sunday lunch-sul,monday dinner-mod"<<endl;
    cout<<"ENTER YOUR QUERY(first 2 latter of a day+b/l/d format):"<<endl;
    string day;
    getline(cin,day);
    string str[25]={"sul","sud","mol","mod","tul","tud","wel","wed","thl","thd","frl",
    "frd","sal","sad","sub","mob","tub","web","thb","frb","sab"};
    if("day"==str[0] || "day"==str[5] ||"day"==str[6] || "day"==str[9] || "day"==str[10] || "day"==str[13])
    {
        cout<<"main menu is chicken."<<endl;
    }
    else if(day==str[1] || day==str[7] || day==str[11])
    {
        cout<<"main menu is egg."<<endl;
    }
    else if(day==str[4] || day==str[8] || day==str[12])
    {
        cout<<"main menu is fish."<<endl;
    }
    else if(day==str[2] || day==str[3])
    {
        cout<<"today is vegetarian's day."<<endl;
    }
    else if(day==str[14])
    {
        cout<<"breakfast:DOSA"<<endl;
    }
    else if(day==str[15])
    {
        cout<<"breakfast:BARA & GHUGUNI"<<endl;
    }
    else if(day==str[16]){cout<<"breakfast:PAWBHAJI"<<endl;}
    else if(day==str[17]){cout<<"breakfast:DAHIBARA & ALUDAM"<<endl;}
    else if(day==str[18]){cout<<"breakfast:SAMOSA & GHUGUNI"<<endl;}
    else if(day==str[19]){cout<<"breakfast:EGG_CHOP & ALUCHOP"<<endl;}
    else if(day==str[20]){cout<<"breakfast:BADAPAW"<<endl;}
    return 0;
}