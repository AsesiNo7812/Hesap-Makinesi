#include <iostream> 
#include <cmath>
using namespace std;
int main(){
    string x;
    string y;
    int a,b,c,d,e,f,g,h,i;
    cout <<"Hesap Makinesi'ne Hosgeldiniz! ";
    while(true){
    cout <<"Yapmak istediginiz islemi secin(toplama,cikarma,carpma,bolme,log.) "<<endl;
    cin >> y;
    if(y=="toplama"){
        cout <<"toplamak istediginiz ilk sayiyi giriniz: ";
        cin >> a;
        cout <<"ikinci sayiyi giriniz: ";
        cin >> b;
        cout <<"SONUC=) " << a + b<<endl;
        cout <<"BIZI TERCIH ETTIGINIZ ICIN TESEKKUR EDERIZ!!!! (programi sonlandirmak icin 'sonlandir' yazabilirsiniz.)"<<endl;
    }
    else if(y=="cikarma"){
        cout <<"cikarma islemi yapmak istediginiz ilk sayiyi giriniz: ";
        cin >>c;
        cout <<"ikinci sayiyi giriniz: ";
        cin >>d;
        cout << "SONUC=) " << c - d<<endl;
        cout <<"BIZI TERCIH ETTIGINIZ ICIN TESEKKUR EDERIZ!!!! (programi sonlandirmak icin 'sonlandir' yazabilirsiniz.)"<<endl;
    }
    else if(y=="carpma"){
        cout << "carpma islemi yapmak istediginiz ilk sayiyi giriniz: ";
        cin >> e;
        cout << "ikinci sayiyi giriniz: ";
        cin >> f;
        cout << "SONUC=) " <<e * f <<endl;
        cout <<"BIZI TERCIH ETTIGINIZ ICIN TESEKKUR EDERIZ!!!! (programi sonlandirmak icin 'sonlandir' yazabilirsiniz.)"<<endl;
        
    }
    else if(y=="bolme"){
        cout << "bolme islemi yapmak istediginiz ilk sayiyi giriniz: ";
        cin >> g;
        cout << "ikinci sayiyi giriniz: ";
        cin >> h;
        cout << "SONUC=) "<< g / h <<endl;
        cout <<"BIZI TERCIH ETTIGINIZ ICIN TESEKKUR EDERIZ!!!! (programi sonlandirmak icin 'sonlandir' yazabilirsiniz.)"<<endl;
    }
    else if(y=="sonlandir"){
        cout <<"Gorusmek Uzere !";
        break;
    }
    else if(y=="log"){
            double sayi, taban;
            cout << "Logaritmasini almak istediginiz sayiyi giriniz: ";
            cin >> sayi;
            cout << "Hangi tabanda log almak istiyorsunuz (ornegin 2, 10, e icin 2/10/2.718): ";
            cin >> taban;

            if(sayi > 0 && taban > 0 && taban != 1){
                double sonuc = log(sayi) / log(taban);
                cout << "SONUC=) log_" << taban << "(" << sayi << ") = " << sonuc << endl;
            }
            else{
                cout << "Hata! Gecersiz sayi veya taban." << endl;
            }
        }
    }

}