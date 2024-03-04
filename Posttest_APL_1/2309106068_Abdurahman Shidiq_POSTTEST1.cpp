#include <iostream>
using namespace std;

void tekan_enter()
{
    cout << "Tekan enter untuk melanjutkan.....";
    cin.ignore();
    cin.get();
    system("cls");
}
int main()
{
    string username, password;
    double kilometer, meter, centimeter, mil;
    int PilihAsal, PilihHasil;
    int counter = 3;
    string keluar;
    while (counter > 0)
    {
        cout << "HALAMAN LOGIN" << endl;
        cout << "Masukkan username: ";
        getline(cin, username);
        cout << "Masukkan password: ";
        getline(cin, password);
        if (username == "Abdurahman Shidiq" && password == "2309106068")
        {
            system("cls");
            cout << "Login berhasil!" << endl;
            counter = 3;
            while (true)
            {
                cout << "Konversi Kecepatan" << endl;
                cout << "1. Kilometer/jam" << endl;
                cout << "2. Meter/detik" << endl;
                cout << "3. centimeter/detik" << endl;
                cout << "4. Mil/jam" << endl;
                cout << "5. Keluar" << endl;
                cout << "Pilih menu: ";
                cin >> PilihAsal;
                system("cls");
                switch (PilihAsal)
                {
                case 1:
                    cout << "Masukkan nilai kilometer/jam: ";
                    cin >> kilometer;
                    system("cls");
                    cout << "Konversi Kilometer/jam ke:" << endl;
                    cout << "1. Meter/detik" << endl;
                    cout << "2. centimeter/detik" << endl;
                    cout << "3. Mil/jam" << endl;
                    cout << "4. Kembali" << endl;
                    cout << "Pilih menu: ";
                    cin >> PilihHasil;
                    system("cls");
                    switch (PilihHasil)
                    {
                    case 1:
                        meter = kilometer * 1000 / 3600;
                        cout << "Hasil konversi" << endl;
                        cout << kilometer << " kilometer/jam adalah " << meter << " meter/detik." << endl;
                        tekan_enter();
                        break;
                    case 2:
                        centimeter = kilometer * 100000 / 3600;
                        cout << "Hasil konversi" << endl;
                        cout << kilometer << " kilometer/jam adalah " << centimeter << " centimeter/detik." << endl;
                        tekan_enter();
                        break;
                    case 3:
                        mil = kilometer / 1.609;
                        cout << "Hasil konversi" << endl;
                        cout << kilometer << " kilometer/jam adalah " << mil << " mil/jam." << endl;
                        tekan_enter();
                        break;
                    case 4:
                        break;
                    default:
                        system("cls");
                        cout << "Pilihan tidak terdapat pada menu!" << endl;
                        break;
                    }
                    break;
                case 2:
                    cout << "Masukkan nilai meter/detik: ";
                    cin >> meter;
                    system("cls");
                    cout << "Konversi meter/detik ke:" << endl;
                    cout << "1. kilometer/jam" << endl;
                    cout << "2. centimeter/detik" << endl;
                    cout << "3. mil/jam" << endl;
                    cout << "4. Kembali" << endl;
                    cout << "Pilih menu: ";
                    cin >> PilihHasil;
                    system("cls");
                    switch (PilihHasil)
                    {
                    case 1:
                        kilometer = meter * 3.6 / 1000;
                        cout << "Hasil konversi" << endl;
                        cout << meter << " meter/detik adalah " << kilometer << " kilometer/jam." << endl;
                        tekan_enter();
                        break;
                    case 2:
                        centimeter = meter * 100;
                        cout << "Hasil konversi" << endl;
                        cout << meter << " meter/detik adalah " << centimeter << " centimeter/detik." << endl;
                        tekan_enter();
                        break;
                    case 3:
                        mil = meter * 2.237 / 1000;
                        cout << "Hasil konversi" << endl;
                        cout << meter << " meter/detik adalah " << mil << " mil/jam." << endl;
                        tekan_enter();
                        break;
                    case 4:
                        break;
                    default:
                        system("cls");
                        cout << "Pilihan tidak terdapat pada menu!" << endl;
                        break;
                    }
                    break;
                case 3:
                    cout << "Masukkan nilai centimeter/detik: ";
                    cin >> centimeter;
                    system("cls");
                    cout << "Konversi centimeter/detik ke:" << endl;
                    cout << "1. kilometer/jam" << endl;
                    cout << "2. meter/detik" << endl;
                    cout << "3. mil/jam" << endl;
                    cout << "4. Kembali" << endl;
                    cout << "Pilih menu: ";
                    cin >> PilihHasil;
                    system("cls");
                    switch (PilihHasil)
                    {
                    case 1:
                        kilometer = centimeter * 3600 / 100000;
                        cout << "Hasil konversi" << endl;
                        cout << centimeter << " centimeter/detik adalah " << kilometer << " kilometer/jam." << endl;
                        tekan_enter();
                        break;
                    case 2:
                        meter = centimeter / 100;
                        cout << "Hasil konversi" << endl;
                        cout << centimeter << " centimeter/detik adalah " << meter << " meter/detik." << endl;
                        tekan_enter();
                        break;
                    case 3:
                        mil = centimeter * 0.02237;
                        cout << "Hasil konversi" << endl;
                        cout << centimeter << " centimeter/detik adalah " << mil << " mil/jam." << endl;
                        tekan_enter();
                        break;
                    case 4:
                        break;
                    default:
                        system("cls");
                        cout << "Pilihan tidak terdapat pada menu!" << endl;
                        break;
                    }
                    break;
                case 4:
                    cout << "Masukkan nilai mil/jam: ";
                    cin >> mil;
                    system("cls");
                    cout << "Konversi mil/jam ke:" << endl;
                    cout << "1. kilometer/jam" << endl;
                    cout << "2. meter/detik" << endl;
                    cout << "3. centimeter/detik" << endl;
                    cout << "4. Kembali" << endl;
                    cout << "Pilih menu: ";
                    cin >> PilihHasil;
                    system("cls");
                    switch (PilihHasil)
                    {
                    case 1:
                        kilometer = mil * 1.609;
                        cout << "Hasil konversi" << endl;
                        cout << mil << " mil/jam adalah " << kilometer << " kilometer/jam." << endl;
                        tekan_enter();
                        break;
                    case 2:
                        meter = mil * 1609 / 3600;
                        cout << "Hasil konversi" << endl;
                        cout << mil << " mil/jam adalah " << meter << " meter/detik." << endl;
                        tekan_enter();
                        break;
                    case 3:
                        centimeter = mil * 160900 / 3600;
                        cout << "Hasil konversi" << endl;
                        cout << mil << " mil/jam adalah " << centimeter << " centimeter/detik." << endl;
                        tekan_enter();
                        break;
                    case 4:
                        break;
                    default:
                        system("cls");
                        cout << "Pilihan tidak terdapat pada menu!" << endl;
                        break;
                    }
                    break;
                case 5:
                    cout << "Apakah anda yakin ingin keluar? (y/n): ";
                    cin >> keluar;
                    if (keluar == "y")
                    {
                        system("cls");
                        cout << "Program berhenti";
                        return 0;
                    }
                    else
                    {
                        system("cls");
                        break;
                    }
                    break;
                default:
                    system("cls");
                    cout << "Pilihan tidak terdapat pada menu!" << endl;
                    break;
                }
                continue;
            }
        }
        else if (username == "Abdurahman Shidiq" && password != "2309106068")
        {
            counter--;
            system("cls");
            cout << "Password salah. Coba lagi." << endl;
            cout << "Sisa kesempatan login: " << counter << endl;
        }
        else if (username != "Abdurahman Shidiq" && password == "2309106068")
        {
            counter--;
            system("cls");
            cout << "Username salah. Coba lagi." << endl;
            cout << "Sisa kesempatan login: " << counter << endl;
        }
        else
        {
            counter--;
            system("cls");
            cout << "Username dan Password salah. Coba lagi." << endl;
            cout << "Sisa kesempatan login: " << counter << endl;
        }
    }
    if (counter == 0)
    {
        system("cls");
        cout << "Maaf, Kesempatan login anda telah habis.";
    }
    else
    {
        system("cls");
        cout << "Program Berhenti";
    }
    return 0;
}