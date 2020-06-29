#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
#include <string>
#include "train.h"
#include "trainstation.h"
#include "passanger.h"
#include "carriage.h"

using namespace std;

void Train::set_Train()
{
    {
        cout << "Введите пункт отбытия: ";
        cin.get();
        cin >> on_dest;
        cout << "Введите пункт назначения: ";
        cin.get();
        cin >> destination;

        cout << "Введите время отбытия: ";
        cin >> dh; cin.get();
        cin >> dm;

        cout << "Введите время прибытия: ";
        cin >> ah; cin.get();
        cin >> am;
    }
}
void Train::show_Train()const
{
    {
        cout << "Пункт отбытия: " << on_dest << endl;
        cout << "Пункт назначения:  " << destination << endl;
        cout << "Время отбытия:  " <<  dh / 10 << dh % 10 << ':' << dm / 10 << dm % 10 << endl;
        cout << "Время прибытия:  " << ah / 10 << ah % 10 << ':' << am / 10 << am % 10 << endl;
        cout << "Количество вагонов:  " << Сarriage << endl;
    }
}

void trainstation::set_trainstation(trainstation v[])
{
    for (int i = 0; i < peronquantity; i++)
    {
        int t;
        //srand(time(NULL));
        t = rand() % 10;
        if (t < 5) {
            peron[i] = true;
        }
        else if (t > 5) {
            peron[i] = false;
        }
    }
    int t=0;
    cout << "На какой перон прибывает поезд? (из 5!) "<<endl;
    cin >> t;
    if (t > 5) {
        cout << "Перонов всего 5!"<<"\n"<<"Введите корректное значение: "<<endl;
        cin >> t;
        peron[t - 1] = true;
    }
    else {
        peron[t - 1] = true;
    }
}
void trainstation::show(trainstation v[])
{
    for (int i = 0; i < peronquantity; i++)
    {
        
        int h = i;
        cout << h + 1 <<"-й перон: ";

        /*if(peron[i]=false){
            cout << "свободен" << endl;
        }
        else {
            cout << "занят" << endl;
        }*/
            cout << peron[i] << endl;
    }
}

void Сarriage::set_Сarriage()
{
    cin >> tipe;

    if (tipe == "Купе" || tipe == "Купэ" || tipe == "купе" || tipe == "купэ") {
        seat = 36;
    }
    else if (tipe == "Плацкарт" || tipe == "плацкарт" || tipe == "Общий" || tipe == "общий"){
        seat = 54;
    }
    else if (tipe == "CВ" || tipe == "св" || tipe == "спальный вагон" || tipe == "Спальный вагон" || tipe == "Спальный Вагон") {
        seat = 18;
    }
    else if (tipe == "международный" || tipe == "Международный") {
        seat = 33;
    }
    srand(time(NULL));
    loose_seat = rand() % seat;
}
void Сarriage::show_Сarriage()const
{
    cout << "Тип вагона: " << tipe << endl;
    cout << "Количество мест: " << seat << endl;
    cout << "Количество свободных мест: " << loose_seat << endl;

}
void Сarriage::buy_Seat()
{
    int n;
    int ticket;
    cout << "Сколько билетов вы желаете приобрести?" << "\n" << endl;
    cin >> ticket;
    for (int i = 0; i < ticket; i++)
    {
        n = loose_seat - ticket;
    }
    cout << "Осталось мест: " << n << endl;
}

void Passenger::set_Passenger()
{
    cout << "Введите фамилия пассажира: " << endl;
    cin >> surname;
    cout << "Введите имя пассажира: " << endl;
    cin >> name;
    cout << "Введите отчество пассажира: " << endl;
    cin >> father;
    cout << "Введите пол пассажира: " << endl;
    cin >> gender;
    cout << "Введите возраст пассажира: " << endl;
    cin >> age;
    cout << "Введите номер паспорта: " << endl;
    cin >> passport;
}
void Passenger::show_Passenger()const
{
    cout << "ФИО: " << surname << " "<< name << " " << father << " " << endl;
    cout << "Пол:  " << gender << endl;
    cout << "Возраст:  " << age << endl;
    if (age < 14) {
        cout << "Дети путешествую только в сопровождении родителей!" << endl;
    }
    cout << "Номер паспорта: " << passport << endl;
}

int main() {
    system("chcp 1251");

    Passenger A;
    cout << "Введите информацию о пассажире" << endl;
    cout << endl;
    A.set_Passenger();
    cout << "\n" << "Информация о пассажире" << endl;
    cout << endl;
    A.show_Passenger();
    cout << endl;
    Сarriage B;
    cout << "Введите тип вагона (купе либо плацкарт)" << endl;
    cout << endl;
    B.set_Сarriage();
    cout << "\n" << "Информация о вагоне" << endl;
    cout << endl;
    B.show_Сarriage();
    cout << endl;
    B.buy_Seat();
    cout << endl;
    Train C;
    cout << "Заполните список сведениями о поезде" << endl;
    C.set_Train();
    C.show_Train();
    cout << endl;
    cin.get();
    trainstation D;
    cout << "Заполните данные о перронах:" << endl;
    trainstation* с = new trainstation;
    D.set_trainstation(с);
    cout << endl;
    D.show(с);
    cin.get();
    return 0;
}