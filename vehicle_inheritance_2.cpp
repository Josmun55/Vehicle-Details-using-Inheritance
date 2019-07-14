#include<iostream>
using namespace std;
class Vehicle
{
protected:
    char make[20],c_of_m[20];
    int y_of_m;
public:
    void v_input(),v_output();
};
class Matatu:public Vehicle
{
private:
    char route[15];
    int speed_limit,passengers;
public:
    void m_input(),m_output();
};
int main()
{
    Vehicle personal;
    Matatu mat;
    cout<<"\nData entry for personal car: ";
    personal.v_input();
    cout<<"\n\nData entry for your matatu:\n";
    mat.m_input();
    cout<<"\n\nAnalysisfor the personal car:\n";
    personal.v_output();
    cout<<"\n\nAnalysis for your matatu:\n";
    mat.m_output();
    return 0;

}

void Vehicle::v_input()
{
    cout<<"Enter the make of your vehicle:";
    cin>>make;
    cout<<"\nEnter the country of manufacture:";
    cin>>c_of_m;
    cout<<"Enter its year of manufacture: ";
    cin>>y_of_m;

}

void Vehicle::v_output()
{
    cout<<"\nMake:"<<make;
    cout<<"\ncountry of manufacture :"<<c_of_m;
    cout<<"\nYear of manufacture: "<<y_of_m;

}
void Matatu::m_input()
{
    v_input();
    cout<<"\nEnter the matatu's route: ";
    cin>>route;
    cout<<"\nEnter its speed limit: ";
    cin>>speed_limit;
    cout<<"Enter the max no of passengers : ";
    cin>>passengers;

}

void Matatu::m_output()
{
    v_output();
    cout<<"\nRoute:"<<route;
    cout<<"\nSpeed limit: "<<speed_limit<<"km/h";
    cout<<"\nNo of passengers :"<<passengers;
}
