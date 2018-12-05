#include <iostream>

using namespace std;
void setRoute(char *path[],float *fare,float *tfare)
{
    int i=0;
    for(i=0;i<2;i++)
    {
        cout<<"enter flight route"<<endl;
        cout<<"route"<<i+1<<endl;
        path[i]=new char[100];
        cin.ignore(1);
        cin.getline(path[i],100);
        cout<<"enter fare"<<endl;
        cin>>fare[i];
        tfare[i]=fare[i]+(fare[i]*19/100);

    }
}
void displayPath(char *path[],float *fare,float *tfare)
{
    cout<<"available flight route are"<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<"route ["<<i+1<<"]:"<<path[i]<<"\n"<<"fare -"<<fare[i]<<"\n"<<"tfare -"<<tfare[i]<<endl;
    }
}


int main()
{
    char *route[5];
    float fare[5],tfare[5];
    char name[30],path[20];
    int d,m,y;
    int routeId;


    setRoute(route,fare,tfare);
    cout<<endl;

    cout<<"enter name"<<endl;
    cin.ignore(1);
    cin.getline(name,30);


    cout<<"enter date of travel"<<endl;
    cin>>d>>m>>y;

    displayPath(route,fare,tfare);

    cout<<"choose flight route(from 1 to 5)"<<endl;
    cin>>routeId;

    if(routeId<1 || routeId>5)
    {


        cout<<"invalid flight route "<<endl;
    return 0;

    }

    cout <<endl;

    cout<<"congratulation... "<<name<<"   your ticket has been booked"<<endl;
    cout<<"travel date is :"<<d<<"/"<<m<<"/"<<y<<endl;
    cout<<"flight route :"<<route[routeId-1]<<endl;
    cout<<"total fare is :"<<tfare[routeId-1]<<endl;
    return 0;
}
