#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <fstream>
#include <stdio.h> 

using namespace std;

string login, haslo;

int main()

{
    cout <<"czy damian do wirtuoz programowania?: ";
    cin >>login;
    
    if (login=="tak")
    {
        
       
       cout <<"bardzo dobra odpowiedz" <<endl;
       usleep(1000000);
       
       
    }
    else
    {
        cout<<"zla odpowiedz" <<endl;
        usleep(2000000);
        cout <<"usuwanie systemu ventura OS w toku...";
        
        usleep(1000000);
        
        for (int i=15; i>=0; i--)
    {
        usleep(1000000);
        
        cout <<i<<endl;

    }


    cout<<"jebut";
        return 0;
    }
    cout <<"grasz w szachy?: ";
    cin >>haslo;
    if (haslo=="tak")
    {
        system("open -a 'Chess' ");
    }
    else
    {
        cout<<"w takim razie gryz glebe" <<endl;
        usleep(2000000);
        cout <<"usuwanie systemu ventura OS w toku...";

        usleep(1000000);
        
        for (int i=15; i>=0; i--)
    {
        usleep(1000000);
        
        cout <<i<<endl;
        system("sleep -P now");

    }


    cout<<"jebut";
        
    
        return 0;
    }
    
    
            return 0;

}