#include <iostream>
#include <string>
using namespace std;

int main(){

    int fotokopi,harga;
    string pelanggan;
     cout<<"Apakah Anda pelanggan (1 atau 2) ? : ";
        cin>>pelanggan;
        cout<<"Banyak fotokopi (lembar): ";
        cin>>fotokopi ;
        cout<<"/n";
        
    if (pelanggan=="1")
    {
        harga=fotokopi*75;
    }
    else if(pelanggan=="2"&&fotokopi<=100)
                {harga=fotokopi*150;}
    else if(pelanggan=="2"&&fotokopi<=200&&fotokopi>100)
                {harga=fotokopi*100;}
    else if(pelanggan=="2"&&fotokopi>200)
                {harga=fotokopi*100;}
                
                
    cout<<"Bayar= Rp. "<<harga;
    
}
