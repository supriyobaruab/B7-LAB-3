#include <iostream>
using namespace std;

int main(){
    int final_amount=0;
    int chal,dal,ata,tel,alu;
    int chalr = 80 , dalr = 40 ,atar =40, telr = 110,alur = 30;
    int chals = 100 , dals = 50, atas = 60, tels = 130, alus=35;

    for(int i =1; i<=7; i++){
        cout <<" " <<endl;
        cout <<"Calculation of day " <<i <<endl ;
        cout <<" " <<endl;
    cout <<"Amount of chal : (in kg) :";
    cin >>chal;
    cout <<"Amount of dal  : (in kg) :";
    cin >>dal;
    cout <<"Amount of ata  : (in kg) :";
    cin >>ata;
    cout <<"Amount of tel  : (in kg) :";
    cin >>tel;
    cout <<"Amount of alu  : (in kg) :";
    cin >>alu;

    int chal_profit = (chals-chalr)*chal;
    int dal_profit = (dals-dalr)*dal;
    int ata_profit = (atas-atar)*ata;
    int tel_profit = (tels-telr)*tel;
    int alu_profit = (alus-alur)*alu;

    cout <<"Chal sales unit price :" <<chalr <<" " <<"Price :" <<chals*chal <<" " <<"Profit :" <<chal_profit <<endl <<endl;

    cout <<"Dal sales unit price  :" <<dalr <<" " <<"Price  :" <<dals*dal<<" " <<"Profit :" <<dal_profit <<endl<<endl;

    cout <<"Ata sales unit price  :" <<atar <<" " <<"Price  :" <<atas*ata<<" " <<"Profit :" <<ata_profit <<endl<<endl;

    cout <<"Tel sales unit price  :" <<telr <<" " <<"Price  :" <<tels*tel <<" " <<"Profit :" <<tel_profit <<endl<<endl;

    cout <<"Alu sales unit price  :" <<alur*alu<<" " <<"Price :" <<alus <<" " <<"Profit :" <<alu_profit <<endl<<endl;

    int total_profit = (chal_profit)+ (dal_profit) + (ata_profit)+(tel_profit) + alu_profit;
    final_amount = final_amount + total_profit;
    cout <<"Total profit of the day " <<i <<":" <<total_profit <<endl;
    cout <<" " <<endl;
    }
    cout <<"Total profit of the week " <<final_amount<<endl;
    

}