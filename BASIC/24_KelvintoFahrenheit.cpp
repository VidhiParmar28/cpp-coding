#include<iostream>
using namespace std;

int main(){
    float TemperatureInKelvin;
    cout<<"Enter the temperature in Kelvin :"<<endl;
    cin>>TemperatureInKelvin;

    float TemperatureInFahrenheit = (TemperatureInKelvin - 273.15) * 9/5 + 32;
    cout<<"Temperature in Fahrenheit is : "<<TemperatureInFahrenheit<<endl;

    return 0;
}