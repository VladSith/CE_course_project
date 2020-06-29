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
        cout << "������� ����� �������: ";
        cin.get();
        cin >> on_dest;
        cout << "������� ����� ����������: ";
        cin.get();
        cin >> destination;

        cout << "������� ����� �������: ";
        cin >> dh; cin.get();
        cin >> dm;

        cout << "������� ����� ��������: ";
        cin >> ah; cin.get();
        cin >> am;
    }
}
void Train::show_Train()const
{
    {
        cout << "����� �������: " << on_dest << endl;
        cout << "����� ����������:  " << destination << endl;
        cout << "����� �������:  " <<  dh / 10 << dh % 10 << ':' << dm / 10 << dm % 10 << endl;
        cout << "����� ��������:  " << ah / 10 << ah % 10 << ':' << am / 10 << am % 10 << endl;
        cout << "���������� �������:  " << �arriage << endl;
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
    cout << "�� ����� ����� ��������� �����? (�� 5!) "<<endl;
    cin >> t;
    if (t > 5) {
        cout << "������� ����� 5!"<<"\n"<<"������� ���������� ��������: "<<endl;
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
        cout << h + 1 <<"-� �����: ";

        /*if(peron[i]=false){
            cout << "��������" << endl;
        }
        else {
            cout << "�����" << endl;
        }*/
            cout << peron[i] << endl;
    }
}

void �arriage::set_�arriage()
{
    cin >> tipe;

    if (tipe == "����" || tipe == "����" || tipe == "����" || tipe == "����") {
        seat = 36;
    }
    else if (tipe == "��������" || tipe == "��������" || tipe == "�����" || tipe == "�����"){
        seat = 54;
    }
    else if (tipe == "C�" || tipe == "��" || tipe == "�������� �����" || tipe == "�������� �����" || tipe == "�������� �����") {
        seat = 18;
    }
    else if (tipe == "�������������" || tipe == "�������������") {
        seat = 33;
    }
    srand(time(NULL));
    loose_seat = rand() % seat;
}
void �arriage::show_�arriage()const
{
    cout << "��� ������: " << tipe << endl;
    cout << "���������� ����: " << seat << endl;
    cout << "���������� ��������� ����: " << loose_seat << endl;

}
void �arriage::buy_Seat()
{
    int n;
    int ticket;
    cout << "������� ������� �� ������� ����������?" << "\n" << endl;
    cin >> ticket;
    for (int i = 0; i < ticket; i++)
    {
        n = loose_seat - ticket;
    }
    cout << "�������� ����: " << n << endl;
}

void Passenger::set_Passenger()
{
    cout << "������� ������� ���������: " << endl;
    cin >> surname;
    cout << "������� ��� ���������: " << endl;
    cin >> name;
    cout << "������� �������� ���������: " << endl;
    cin >> father;
    cout << "������� ��� ���������: " << endl;
    cin >> gender;
    cout << "������� ������� ���������: " << endl;
    cin >> age;
    cout << "������� ����� ��������: " << endl;
    cin >> passport;
}
void Passenger::show_Passenger()const
{
    cout << "���: " << surname << " "<< name << " " << father << " " << endl;
    cout << "���:  " << gender << endl;
    cout << "�������:  " << age << endl;
    if (age < 14) {
        cout << "���� ����������� ������ � ������������� ���������!" << endl;
    }
    cout << "����� ��������: " << passport << endl;
}

int main() {
    system("chcp 1251");

    Passenger A;
    cout << "������� ���������� � ���������" << endl;
    cout << endl;
    A.set_Passenger();
    cout << "\n" << "���������� � ���������" << endl;
    cout << endl;
    A.show_Passenger();
    cout << endl;
    �arriage B;
    cout << "������� ��� ������ (���� ���� ��������)" << endl;
    cout << endl;
    B.set_�arriage();
    cout << "\n" << "���������� � ������" << endl;
    cout << endl;
    B.show_�arriage();
    cout << endl;
    B.buy_Seat();
    cout << endl;
    Train C;
    cout << "��������� ������ ���������� � ������" << endl;
    C.set_Train();
    C.show_Train();
    cout << endl;
    cin.get();
    trainstation D;
    cout << "��������� ������ � ��������:" << endl;
    trainstation* � = new trainstation;
    D.set_trainstation(�);
    cout << endl;
    D.show(�);
    cin.get();
    return 0;
}