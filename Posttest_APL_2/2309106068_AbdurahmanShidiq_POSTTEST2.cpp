#include <iostream>
using namespace std;

string username, password;
int jml_pelanggan = 0, jml_paket = 0, menu_utama, menu_tambah, menu_ubah, menu_lihat, menu_hapus, idx;
string pelanggan[50];
string paket[50];
string keluar = "n";
int counter = 3;
void tekan_enter()
{
    cout << "Tekan enter untuk melanjutkan.....";
    cin.ignore();
    cin.get();
    system("cls");
}
int main()
{
    while (counter > 0)
    {
        cout << "HALAMAN LOGIN" << endl;
        cout << "Masukkan username: ";
        getline(cin, username);
        cout << "Masukkan password: ";
        getline(cin, password);
        if (username == "Abdurahman Shidiq" && password == "2309106068")
        {
            while (true)
            {
                system("cls");
                cout << "Menu Utama:\n"
                        "------------\n"
                        "1. Tambah Data\n"
                        "2. Ubah Data\n"
                        "3. Lihat Data\n"
                        "4. Hapus Data\n"
                        "5. Keluar\n"
                        "Masukkan pilihan: ";

                cin >> menu_utama;
                if (menu_utama == 1)
                {
                    while (true)
                    {
                        system("cls");
                        cout << "Menu Tambah Data:\n"
                                "-----------------\n"
                                "1. Tambah Jenis Paket\n"
                                "2. Tambah Pelanggan\n"
                                "3. Kembali\n"
                                "Masukkan pilihan: ";
                        cin >> menu_tambah;
                        if (menu_tambah == 1)
                        {
                            system("cls");
                            cout << "Tambah Jenis Paket\n";
                            cout << "Masukkan jenis Paket (Harga/Jangka Waktu): ";
                            cin.ignore();
                            getline(cin, paket[jml_paket]);
                            jml_paket++;
                        }
                        else if (menu_tambah == 2)
                        {
                            while (true)
                            {
                                int pilih_paket;
                                system("cls");
                                cout << "Masukkan nama pelanggan: ";
                                cin.ignore();
                                getline(cin, pelanggan[jml_pelanggan]);
                                system("cls");
                                cout << "Nama Pelanggan: " << pelanggan[jml_pelanggan] << endl;
                                jml_pelanggan += 2;
                                cout << "Menu Jenis Paket: \n";
                                cout << "--------------------\n";
                                for (int i = 0; i < jml_paket; i++)
                                {
                                    cout << i + 1 << ". " << paket[i] << endl;
                                }
                                cout << jml_paket + 1 << ". Kembali\n";
                                cout << "Masukkan pilihan: ";
                                cin >> pilih_paket;
                                if (pilih_paket == jml_paket + 1)
                                {
                                    break;
                                }
                                else if (pilih_paket <= jml_paket)
                                {
                                    pelanggan[jml_pelanggan - 1] = paket[pilih_paket - 1];
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    cout << "Maaf, pilihan tidak tersedia.\nSilahkan masukkan lagi.";
                                    tekan_enter();
                                }
                            }
                        }
                        else if (menu_tambah == 3)
                        {
                            break;
                        }
                        else
                        {
                            system("cls");
                            cout << "Maaf, pilihan tidak tersedia.\nSilahkan masukkan lagi.";
                            tekan_enter();
                        }
                    }
                }
                else if (menu_utama == 2)
                {
                    while (true)
                    {
                        system("cls");
                        cout << "Menu Ubah Data:\n"
                                "---------------\n"
                                "1. Ubah Jenis Paket\n"
                                "2. Ubah Paket Pelanggan\n"
                                "3. Kembali\n"
                                "Masukkan pilihan: ";
                        cin >> menu_ubah;
                        if (menu_ubah == 1)
                        {
                            while (true)
                            {
                                system("cls");
                                cout << "Ubah Jenis Paket\n";
                                cout << "-----------------\n";
                                for (int i = 0; i < jml_paket; i++)
                                {
                                    cout << i + 1 << ". " << paket[i] << endl;
                                }
                                cout << jml_paket + 1 << ". Kembali\n";
                                cout << "Masukkan urutan jenis paket yang ingin diubah: ";
                                cin >> idx;
                                if (idx >= 1 && idx <= jml_paket)
                                {
                                    cout << "Masukkan jenis paket baru (Harga/Jangka Waktu): ";
                                    cin.ignore();
                                    getline(cin, paket[idx - 1]);
                                }
                                else if (idx == jml_paket + 1)
                                {
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    cout << "Maaf, pilihan tidak tersedia.\nSilahkan masukkan lagi.";
                                    tekan_enter();
                                }
                            }
                        }
                        else if (menu_ubah == 2)
                        {
                            while (true)
                            {
                                system("cls");
                                cout << "Ubah Paket Pelanggan\n";
                                for (int i = 0; i < jml_pelanggan; i += 2)
                                {
                                    cout << i / 2 + 1 << ".\tNama Pelanggan: " << pelanggan[i] << endl;
                                    cout << "\tJenis Paket: " << pelanggan[i + 1] << endl
                                         << endl;
                                }
                                cout << jml_pelanggan / 2 + 1 << "\tKembali\n";
                                cout << "Masukkan urutan pelanggan yang ingin diubah: ";
                                cin >> idx;
                                if (idx >= 1 && idx <= jml_pelanggan / 2)
                                {
                                    int pilih_paket;
                                    system("cls");
                                    cout << "Nama Pelanggan: " << pelanggan[idx * 2 - 2] << endl;
                                    cout << "Menu Jenis Paket: \n";
                                    cout << "--------------------\n";
                                    for (int i = 0; i < jml_paket; i++)
                                    {
                                        cout << i + 1 << ". " << paket[i] << endl;
                                    }
                                    cout << jml_paket + 1 << ". Kembali\n";
                                    cout << "Masukkan pilihan: ";
                                    cin >> pilih_paket;
                                    if (pilih_paket <= jml_paket)
                                    {
                                        pelanggan[idx * 2 - 1] = paket[pilih_paket - 1];
                                    }
                                    else if (pilih_paket == jml_paket + 1)
                                    {
                                        continue;
                                    }
                                    else
                                    {
                                        system("cls");
                                        cout << "Maaf, pilihan tidak tersedia.\nSilahkan masukkan lagi.";
                                        tekan_enter();
                                    }
                                }
                                else if (idx == jml_pelanggan / 2 + 1)
                                {
                                    break;
                                }

                                else
                                {
                                    system("cls");
                                    cout << "Maaf, pilihan tidak tersedia.\nSilahkan masukkan lagi.";
                                    tekan_enter();
                                }
                            }
                        }
                        else if (menu_ubah == 3)
                        {
                            break;
                        }
                        else
                        {
                            system("cls");
                            cout << "Maaf, pilihan tidak tersedia.\nSilahkan masukkan lagi.";
                            tekan_enter();
                        }
                    }
                }
                else if (menu_utama == 3)
                {
                    while (true)
                    {
                        system("cls");
                        cout << "Menu Lihat Data:\n"
                                "----------------\n"
                                "1. Lihat Jenis Paket\n"
                                "2. Lihat Paket Pelanggan\n"
                                "3. Kembali\n"
                                "Masukkan pilihan: ";
                        cin >> menu_lihat;
                        if (menu_lihat == 1)
                        {
                            system("cls");
                            cout << "Tampilkan paket: \n";
                            cout << "----------------\n";
                            for (int i = 0; i < jml_paket; i++)
                            {
                                cout << i + 1 << ". " << paket[i] << endl;
                            }
                            tekan_enter();
                        }
                        else if (menu_lihat == 2)
                        {
                            system("cls");
                            cout << "Tampilkan data: \n";
                            cout << "---------------\n";
                            for (int i = 0; i < jml_pelanggan; i += 2)
                            {
                                cout << i / 2 + 1 << ".\tNama Pelanggan: " << pelanggan[i] << endl;
                                cout << "\tJenis Paket: " << pelanggan[i + 1] << endl
                                     << endl;
                            }
                            tekan_enter();
                        }
                        else if (menu_lihat == 3)
                        {
                            break;
                        }
                        else
                        {
                            system("cls");
                            cout << "Maaf, pilihan tidak tersedia.\nSilahkan masukkan lagi.";
                            tekan_enter();
                        }
                    }
                }
                else if (menu_utama == 4)
                {
                    while (true)
                    {
                        system("cls");
                        cout << "Menu Hapus Data:\n"
                                "----------------\n"
                                "1. Hapus Jenis Paket\n"
                                "2. Hapus Pelanggan\n"
                                "3. Kembali\n"
                                "Masukkan pilihan: ";
                        cin >> menu_hapus;
                        if (menu_hapus == 1)
                        {
                            while (true)
                            {
                                system("cls");
                                cout << "Menu Hapus Paket\n";
                                cout << "--------------------\n";
                                for (int i = 0; i < jml_paket; i++)
                                {
                                    cout << i + 1 << ". " << paket[i] << endl;
                                }
                                cout << jml_paket + 1 << ". Kembali\n";
                                cout << "Masukkan urutan yang ingin di hapus: ";
                                cin >> idx;
                                if (idx >= 1 && idx <= jml_paket)
                                {
                                    for (int i = idx - 1; i < jml_paket; i++)
                                        paket[i] = paket[i + 1];
                                    jml_paket--;
                                    break;
                                }
                                else if (idx == jml_paket + 1)
                                {
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    cout << "Maaf, pilihan tidak tersedia.\nSilahkan masukkan lagi.";
                                    tekan_enter();
                                }
                            }
                        }
                        else if (menu_hapus == 2)
                        {
                            while (true)
                            {
                                system("cls");
                                cout << "Menu Hapus Pelanggan\n";
                                cout << "--------------------\n";
                                for (int i = 0; i < jml_pelanggan; i += 2)
                                {
                                    cout << i / 2 + 1 << ".\tNama Pelanggan: " << pelanggan[i] << endl;
                                    cout << "\tJenis Paket: " << pelanggan[i + 1] << endl
                                         << endl;
                                }
                                cout << jml_pelanggan / 2 + 1 << ".\tKembali.\n";
                                cout << "Masukkan urutan yang ingin di hapus: ";
                                cin >> idx;
                                if (idx >= 1 && idx <= jml_pelanggan / 2)
                                {
                                    for (int i = idx * 2 - 2; i < jml_pelanggan - 1; i += 2)
                                    {
                                        pelanggan[i] = pelanggan[i + 2];
                                        pelanggan[i + 1] = pelanggan[i + 3];
                                    }
                                    jml_pelanggan -= 2;
                                    break;
                                }
                                else if (idx == jml_pelanggan / 2 + 1)
                                {
                                    break;
                                }
                                else
                                {
                                    system("cls");
                                    cout << "Maaf, pilihan tidak tersedia.\nSilahkan masukkan lagi.";
                                    tekan_enter();
                                }
                            }
                        }
                        else if (menu_hapus == 3)
                        {
                            break;
                        }
                        else
                        {
                            system("cls");
                            cout << "Maaf, pilihan tidak tersedia.\nSilahkan masukkan lagi.";
                            tekan_enter();
                        }
                    }
                }
                else if (menu_utama == 5)
                {
                    system("cls");
                    cout << "Apakah anda ingin keluar? (y/n): ";
                    cin >> keluar;
                    if (keluar != "n")
                    {
                        system("cls");
                        cout << "PROGRAM BERHENTI";
                        return 0;
                    }
                }
                else
                {
                    system("cls");
                    cout << "Maaf pilihan anda salah! Silakan coba lagi." << endl;
                    tekan_enter();
                }
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