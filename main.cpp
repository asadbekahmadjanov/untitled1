/
#include <iostream>
using namespace std;

int main() {
    int oper;
    cout << "\t\t*** Sayoxat***\n\n";
    cout << "Qaysi mashinada sayoxatga borasi ? " << endl;

    cout << "1---> Mersedes G63 :\n";
    cout << "2---> BMW X7 :\n";
    cout << "3---> Rolls Royce phanton:\n";
    cout << "4---> Gentra :\n";
    cout <<endl;
    cin >> oper;
    switch (oper) {
        case 1: {
            int G63;
            int sum;
            cout << "1---> Mersedes G63:\n";
            cout << "Maksimalno tazligi : 4,5c|0 dan 100 gacha\n";
            cout << "Yoqilgi turi : 98\n";
            cout << "Qulayligi : Bizness klass \n";
            cout << "Yoqilgi sigimi : 100 L \n";
            cout << "Yoqilgi sarfi : 100 ga (16,5: 11,1: 13,1 L) \n";
            cout << "Kunlik ijara xaqqi : \n";
            cin >> G63;
            int Ai80;
            int Ai92;
            int Ai95;
            int Ai98;
            cout << " Benzin Zapravka \n";
            cout << " 1-->Ai80- 6000 sum \n";
            cout << " 2-->Ai92- 7600 sum \n";
            cout << " 3-->Ai95- 8200 sum \n";
            cout << " 4-->Ai98- 9300 sum \n";
            cin >> sum;
            switch (sum){
                case 1:
                    cout << " 1-->Ai80- 6000 sum \n";
                    cin >> Ai80;
                    case 2 :
                        cout << " 2-->Ai92- 7600 sum \n";
                        cin >> Ai92;
                        case 3:
                            cout << " 3-->Ai95- 8200 sum \n";
                            cin >> Ai95;
                            case 4:
                                cout << " 4-->Ai98- 9300 sum \n";
                                cin >> Ai95;

                                cout << "Tashamoqchil bo'lgan summangizni kiriting: ";
                                cin >> Ai80;
                                cin >> Ai92;
                                cin >> Ai95;
                                cin >> Ai98;
                                cout << "" <<Ai80<< endl;
                                cout << "Kiritgan summangiz: " << sum << endl;
                                cout << "To'lov muvaffaqiyatli amalga oshirildi!!! Tanlovingiz uchun raxmat!!!";
                                break;
            }
        }
        case 2: {
            int X7;
            cout << "2---> BMW X7 :\n";
            cout << "Maksimalno tazligi : 4,7c|0 dan 100 gacha\n";
            cout << "Yoqilgi turi : 98\n";
            cout << "Qulayligi : Bizness klass \n";
            cout << "Yoqilgi sigimi : 83 L \n";
            cout << "yoqilgi sarfi : 100 ga (9,5: 11,6 L) \n";
            cin >> X7;
        }

        case 3: {
            int phanton;
            cout << "3---> Rolls Royce phanton :\n";
            cout << "Maksimalno tazligi : 5,4c|0 dan 100 gacha\n";
            cout << "Yoqilgi turi : 98\n";
            cout << "Qulayligi : Bizness klass\n";
            cout << "Yoqilgi sigimi : 90 L \n";
            cout << "yoqilgi sarfi : 100 ga (21.3: 9,7; 13,9 L) \n";
            cin >> phanton;

        }
        case 4: {
            int gentra;
            cout << "4---> Gentra :\n";
            cout << "Maksimalno tazligi : 13,3c|0 dan 100 gacha\n";
            cout << "Yoqilgi turi : 92 , 95 \n";
            cout << "Qulayligi : Comfotr \n";
            cout << "Yoqilgi sigimi :60 L \n";
            cout << "yoqilgi sarfi : 100 ga (9,5: 6,5: 7,5 L) \n";
            cin >> gentra;
        }

    }
    return 0;
}



/*
#include <iostream>
#include <stdlib.h>
using namespace std;

            int main()
            {

                int n, m;

                cout << " Kun: "; cin >> n;
                cout << " Oy: "; cin >> m;

                if(n < 32 && m < 13 && n > 0 && m > 0){
                    switch(m){
                        case 1:
                            cout << " Yanvar oyi " << endl;
                            if(n >= 20 && n <= 31){
                                cout << " Qovg'a " << endl;
                            }else{
                                cout << " Echki. " << endl;
                            }
                            break;

                            case 2:
                                cout << " Febral oyi " << endl;
                                if(n >= 19 && n <= 28 || n >= 19 && n <= 29){
                                    cout << " Baliq " << endl;
                                }else{
                                    cout << " Qovg'a. " << endl;
                                }
                                break;

                                case 3:
                                    cout << " Mart oyi " << endl;
                                    if(n >= 21 && n <= 31){
                                        cout << " Qo'y " << endl;
                                    }else{
                                        cout << " Baliq. " << endl;
                                    }
                                    break;

                                    case 4:
                                        cout << " Aprel oyi " << endl;
                                        if(n >= 20 && n <= 30){
                                            cout << " Buzog' " << endl;
                                        }else{
                                            cout << " Qo'y. " << endl;
                                        }
                                        break;

                                        case 5:
                                            cout << " May oyi " << endl;
                                            if(n >= 21 && n <= 31){
                                                cout << " Egizaklar " << endl;
                                            }else{
                                                cout << " Buzog'. " << endl;
                                            }
                                            break;

                                            case 6:
                                                cout << " Iyun oyi " << endl;
                                                if(n >= 22 && n <= 30){
                                                    cout << " Qisqichbaqa " << endl;
                                                }else{
                                                    cout << " Egizak " << endl;
                                                }
                                                break;

                                                case 7:
                                                    cout << " Iyull oyi " << endl;
                                                    if(n >= 23 && n <= 31){
                                                        cout << " Arslon " << endl;
                                                    }else{
                                                        cout << " Qisqichbaqa. " << endl;
                                                    }
                                                    break;

                                                    case 8:
                                                        cout << " Avgust oyi " << endl;
                                                        if(n >= 23 && n <= 31){
                                                            cout << " Parizod " << endl;
                                                        }else{
                                                            cout << " Arislon " << endl;
                                                        }
                                                        break;

                                                        case 9:
                                                            cout << " Sentyabr oyi " << endl;
                                                            if(n >= 23 && n <= 30){
                                                                cout << " Tarozi " << endl;
                                                            }else{
                                                                cout << " Parizod " << endl;
                                                            }
                                                            break;

                                                            case 10:
                                                                cout << " Oktabr oyi " << endl;
                                                                if(n >= 21 && n <= 31){
                                                                    cout << " Chayon " << endl;
                                                                }else{
                                                                    cout << "  Tarozi " << endl;
                                                                }
                                                                break;

                                                                case 11:
                                                                    cout << " Noyabr oyi " << endl;
                                                                    if(n >= 23 && n <= 30){
                                                                        cout << " O'q otar " << endl;
                                                                    }else{
                                                                        cout << " Chayon " << endl;
                                                                    }
                                                                    break;

                                                                    case 12:
                                                                        cout << " Dekabr oyi " << endl;
                                                                        if(n >= 21 && n <= 31){
                                                                            cout << " Tog' echkisi " << endl;
                                                                        }else{
                                                                            cout << " O'q otar " << endl;
                                                                        }
                                                                        break;

                                                                        default:
                                                                            cout <<" Siz boshqa raqamlarni kiritdingiz! " ;
                                                                            break;


                    }
                } else {

                    cout << " Siz noto'g'ri ma'lumot kiritdingiz ! ";
                }



                return 0;
            }

*/
/*
#include <iostream>
using namespace std;


int main (){

    int n;

    if ( n > 99 && n < 1000){

        int r1, r10, r100;

        r1 = n % 10;
        r10 = n % 100 / 10;
        r100 = n % 100;

        cout << " Birlar xonasi:" << r1 << endl ;
        cout << " O'nlar xonasi:" << r10 << endl ;
        cout << " Yuzlar xonasi:" << r100 << endl ;

        switch (r100){
            case 1:  cout << " bir yuz "; break;
            case 2:  cout << " ikki yuz "; break;
            case 3:  cout << " uch yuz "; break;
            case 4:  cout << " tort yuz "; break;
            case 5:  cout << " besh yuz "; break;
            case 6:  cout << " olti yuz "; break;
            case 7:  cout << " yetti yuz "; break;
            case 8:  cout << " sakkiz yuz "; break;
            case 9:  cout << " to'qqiz yuz "; break;
        }

        switch (r10) {
            case 1:  cout << " o'n "; break;
            case 2:  cout << " yigirma "; break;
            case 3:  cout << " o'ttiz "; break;
            case 4:  cout << " qirq "; break;
            case 5:  cout << " ellik "; break;
            case 6:  cout << " oltmish "; break;
            case 7:  cout << " yetmish "; break;
            case 8:  cout << " sakson "; break;
            case 9:  cout << " toqson "; break;

        }
        switch (r1) {
            case 1:  cout << " bir "; break;
            case 2:  cout << " ikki "; break;
            case 3:  cout << " uch "; break;
            case 4:  cout << " tort"; break;
            case 5:  cout << " besh "; break;
            case 6:  cout << " olti "; break;
            case 7:  cout << " yetti "; break;
            case 8:  cout << " sakkiz "; break;
            case 9:  cout << " toqqiz "; break;


        }
    }else{
            cout << " Notogri ma'lumot  kiritdingiz!!! ";
        }



        return 0;
    }

*/
/*
#include <iostream>

using namespace std;

int main (){


    int salery, minOylik;

    cout << " Ishchining oylik maoshini kiriting: " << endl;
    cout << " => "; cin >> salery;

    cout << "  Eng kam oylik maoshning kiriting :" << endl;
    cout << " => "; cin >> minOylik;
    if ( salery <= 5 * minOylik){
        cout << " Daromat solig'i: " << ( salery * 0.09)<< endl;
    }
    else if ( salery > 5 * minOylik && salery <= 10 * minOylik){
        cout << " Daromad solig'i: " << (salery * 0.16) << endl;

    }
    else if(salery > 10 * minOylik){
        cout << " Daromad solig'i: " << (salery * 0.23) << endl;
    }
    else{
        cout << " Bunaqa oyligga hech kim ishlamaydi aka. " << endl;
    }

    return 0;
}
 */
/*
#include <iostream>

using namespace std;
int main (){
    int n;
    cout << " Talabanining balini kiriting: " << endl;
    cout << " => "; cin >> n;
     if ( n > 0 && n < 101){
         if (n >= 1 && n <= 55 ){
             cout << " Talabaning bahosi 2 " << endl;
         }
         else if(n >= 56 && n <= 71){
             cout << " Talabning baxosi 3 " << endl;
         }
         else if(n >= 72 && n <= 85){
             cout << " Talabning baxosi 4 " << endl;
         }
         else if(n >= 86 && n <= 100){
             cout << " Talabning baxosi 5 " << endl;
         }
     }else{
         cout << " Talabaning bali noto'g'ri kiritilgan. " << endl;
     }
    return 0;
}
 */
/*
#include <iostream>

int main() {
    using namespace std;
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int ka =a;
    int ki =a ;
    if (ka <b){
        ka=b;
    }
    if (ka <c) {
        ka =c;
    }
    if (ki >b){
        ki =b;
    }
    if (ki >c){
        ki =c;
    }

    cout << " ka: " << ki <<endl;
    cout << " ki: " << ka <<endl;

    return 0;
}
