
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    /*int a;
    cout << "[+] месяц года\n";
    cout << "[1] январь\n";
    cout << "[2] февраль\n";
    cout << "[3] март\n";
    cout << "[4] апрель\n";
    cout << "[5] май\n";
    cout << "[6] июнь\n";
    cout << "[7] июль\n";
    cout << "[8] август\n";
    cout << "[9] сентябрь\n";
    cout << "[10] октябрь\n";
    cout << "[11] ноябрь\n";
    cout << "[12] декабрь\n";
    cout << "[+] выберите месяц: ";  cin >> a;
    switch (a) {
        case 1:
            cout << "[+] выбран месяц январь\n";
            break;
        case 2:
            cout << "[+] выбран месяц февраль\n";
            break;
        case 3:
            cout << "[+] выбран месяц март\n";
            break;
        case 4:
            cout << "[+] выбран месяц апрель\n";
            break;
        case 5:
            cout << "[+] выбран месяц май\n";
            break;
        case 6:
            cout << "[+] выбран месяц июнь\n";
            break;
        case 7:
            cout << "[+] выбран месяц июль\n";
            break;
        case 8:
            cout << "[+] выбран месяц август\n";
            break;
        case 9:
            cout << "[+] выбран месяц сентябрь\n";
            break;
        case 10:
            cout << "[+] выбран месяц октябрь\n";
            break;
        case 11:
            cout << "[+] выбран месяц ноябрь\n";
            break;
        case 12:
            cout << "[+] выбран месяц декабрь\n";
            break;
        default:
            cout << "[+] не правильно введен номер месяца!\n";
            break;


    }*/
    /*int b;
    cout << "[+] переводчик\n";
    cout << "\n";
    cout << "[1] русские слова\n";
    cout << "[2] английские слова\n";
    cout << "\n";
    cout << "[3] выйти\n";
    cin >> b;
    switch (b)
    {
    case 1:
        int c;
        cout << "[+] переводчик “список русских слов”\n";
        cout << "\n";
        cout << "[1] дом\n";
        cout << "[2] дорога\n";
        cout << "[3] цветок\n";
        cout << "[4] кровать\n";
        cout << "[5] компьютер\n";
        cout << "[6] мышь\n";
        cout << "[7] монитор\n";
        cout << "[8] солнце\n";
        cout << "[9] день\n";
        cout << "[10] ночь\n";
        cout << "[11] вода\n";
        cout << "[12] камень\n";
        cout << "[13] дерево\n";
        cout << "[14] железо\n";
        cout << "[15] золото\n";
        cout << "\n";
        cout << "[+] выберите номер слова :\n"; cin >> c;
        switch (c)
        {
        case 1:
            cout << "[+] перевод : дом->home\n";
            break;
        case 2:
            cout << "[+] перевод : дорога->road\n";
            break;
        case 3:
            cout << "[+] перевод : цветок->flower\n";
            break;
        case 4:
            cout << "[+] перевод : кровать->bed\n";
            break;
        case 5:
            cout << "[+] перевод : компьютер->computer\n";
            break;
        case 6:
            cout << "[+] перевод : мышь->mouse\n";
            break;
        case 7:
            cout << "[+] перевод : монитор->monitor\n";
            break;
        case 8:
            cout << "[+] перевод : солнце->sun\n";
            break;
        case 9:
            cout << "[+] перевод : день->day\n";
            break;
        case 10:
            cout << "[+] перевод : ночь->night\n";
            break;
        case 11:
            cout << "[+] перевод : вода->water\n";
            break;
        case 12:
            cout << "[+] перевод : камень->stone\n";
            break;
        case 13:
            cout << "[+] перевод : дерево->tree\n";
            break;
        case 14:
            cout << "[+] перевод : железо->iron\n";
            break;
        case 15:
            cout << "[+] перевод : золото->gold\n";
            break;
        default:
            cout << "[+] не правильно введен номер! \n";
            break;
        }
        break;





    case 2:
        int d;
        cout << "[+] переводчик “список английских слов”\n";
        cout << "\n";
        cout << "[1] home\n";
        cout << "[2] road\n";
        cout << "[3] flower\n";
        cout << "[4] bed\n";
        cout << "[5] computer\n";
        cout << "[6] mouse\n";
        cout << "[7] monitor\n";
        cout << "[8] sun\n";
        cout << "[9] day\n";
        cout << "[10] night\n";
        cout << "[11] water\n";
        cout << "[12] stone\n";
        cout << "[13] tree\n";
        cout << "[14] iron\n";
        cout << "[15] gold\n";
        cout << "\n";
        cout << "[+] выберите номер слова :"; cin >> d;
        switch (d)
        {
        case 1:
            cout << "[+] перевод : home->дом\n";
            break;
        case 2:
            cout << "[+] перевод : road->дорога\n";
            break;
        case 3:
            cout << "[+] перевод : flower->цветок\n";
            break;
        case 4:
            cout << "[+] перевод : bed->кровать\n";
            break;
        case 5:
            cout << "[+] перевод : computer->компьютер\n";
            break;
        case 6:
            cout << "[+] перевод : mouse->мышь\n";
            break;
        case 7:
            cout << "[+] перевод : monitor->монитор\n";
            break;
        case 8:
            cout << "[+] перевод : sun->солнце\n";
            break;
        case 9:
            cout << "[+] перевод : day->день\n";
            break;
        case 10:
            cout << "[+] перевод : night->ночь\n";
            break;
        case 11:
            cout << "[+] перевод : water->вода\n";
            break;
        case 12:
            cout << "[+] перевод : stone->камень\n";
            break;
        case 13:
            cout << "[+] перевод : tree->дерево\n";
            break;
        case 14:
            cout << "[+] перевод : iron->железо\n";
            break;
        case 15:
            cout << "[+] перевод : gold->золото\n";
            break;
        default:
            cout << "[+] не правильно введен номер! \n";
            break;
        }
        break;
    case 3:
        break;
    default:
        cout << "[+] не правильно введен номер! \n";
        break;

    }*/

    
}

