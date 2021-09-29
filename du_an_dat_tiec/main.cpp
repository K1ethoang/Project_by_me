#include <iostream>
#include <string>
#include <fstream>
#define max 100

void print_line(int n);
void server();
void login_server();
void client();
void thuc_don(int arr[], int n);
void them_mon();
void xoa_mon();

int main()
{

    int key;

    system("cls");
    std::cout << "\n           CHUONG TRINH DAT TIEC CHO NHA HANG C++\n"
              << std::endl;
    std::cout << "====================== NGUOI DUNG ======================\n";
    std::cout << "==    1. Nha Hang.                                    ==\n";
    std::cout << "==    2. Khach Hang.                                  ==\n";
    std::cout << "==    0. Thoat chuong trinh.                          ==\n";
    std::cout << "========================================================\n";

    std::cout << "\nChon tai khoan: ";
    std::cin >> key;

    switch (key)
    {
    case 1:
        login_server();
        system("cls");
        server();
        break;

    case 2:
        system("cls");
        client();
        break;
    case 0:
        break;

    default:
        std::cout << "\nKhong co chuc nang nay! Vui long chon lai !";
        system("pause");
        main();
        break;
    }
}

void print_line(int n)
{
    for (int i = 0; i <= n; i++)
    {
        std::cout << "-";
    }
}

void server()
{
    int key;
    std::cout << "======================= NHA HANG =======================\n";
    std::cout << "==    1. Them mon.                                    ==\n";
    std::cout << "==    2. Xoa mon.                                     ==\n";
    std::cout << "==    3. Xem thuc don.                                ==\n";
    std::cout << "==    4. Xem danh sach khach hang.                    ==\n";
    std::cout << "==    0. Tro ve.                                      ==\n";
    std::cout << "========================================================\n";
    std::cout << "\nNhap tuy chon: ";
    std::cin >> key;
    switch (key)
    {
    case 1:

        break;
    case 2:

        break;
    case 3:

        break;
    case 0:
        system("cls");
        main();
        break;
    default:
        break;
    }
}

void client()
{
    int key;

    system("cls");
    std::cout << "====================== KHACH HANG ======================\n";
    std::cout << "==    1. Chon mon.                                    ==\n";
    std::cout << "==    2. Dieu chinh mon.                              ==\n";
    std::cout << "==    3. Xem thuc don.                                ==\n";
    std::cout << "==    0. Tro ve.                                      ==\n";
    std::cout << "========================================================\n";
    std::cout << "\nNhap tuy chon: ";
    std::cin >> key;
    switch (key)
    {
    case 1:

        break;
    case 2:

        break;

    case 3:

        break;
    case 0:
        main();
        break;
    default:
        break;
    }
}

void login_server()
{
    std::string USERNAME = "kiethoang23";
    std::string PASSWORD = "23092003";

    std::string username;
    std::string password;

    do
    {
        std::cout << std::endl;
        std::cout << "Tai Khoan: ";
        fflush(stdin);
        std::getline(std::cin, username);
        std::cout << "Mat Khau: ";
        fflush(stdin);
        std::getline(std::cin, password);
    } while ((username != USERNAME) || (password != PASSWORD));
}

void them_mon(int arr[], int &n, int vitri)
{
    for (int i = 0; i < n; i++)
    {
    }
}
