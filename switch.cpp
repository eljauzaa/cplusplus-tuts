#include <iostream>

int main(){

    int month;
    std::cout << "Enter the month (1-12) : ";
    std::cin >> month;

    // if(month == 1) {
    //     std::cout << "It is January";
    // } else if (month == 2) {
    //     std::cout << "It is February";
    // } else if (month == 3) {
    //     std::cout << "It is Maret";
    // } else if (month == 4) {
    //     std::cout << "It is April";
    // } else if (month == 5) {
    //     std::cout << "It is May";
    // } else if (month == 6) {
    //     std::cout << "It is June";
    // } else if (month == 7) {
    //     std::cout << "It is July";
    // } else if (month == 8) {
    //     std::cout << "It is August";
    // } else if (month == 9) {
    //     std::cout << "It is September";
    // } else if (month == 10) {
    //     std::cout << "It is October";
    // } else if (month == 11) {
    //     std::cout << "It is November";
    // } else if (month == 12) {
    //     std::cout << "It is Decenber";
    // } else {
    //     std::cout << "You didn't enter a number between (1-12)";
    // }

    switch (month)
    {
    case 1:
        std::cout << "It is January";
        break;
    case 2:
        std::cout << "It is February";
        break;
    case 3:
        std::cout << "It is Maret";
        break;
    case 4:
        std::cout << "It is April";
        break;
    case 5:
        std::cout << "It is Mei";
        break;
    case 6:
        std::cout << "It is June";
        break;
    case 7:
        std::cout << "It is July";
        break;
    case 8:
        std::cout << "It is Agustus";
        break;
    case 9:
        std::cout << "It is September";
        break;
    case 10:
        std::cout << "It is Oktober";
        break;
    case 11:
        std::cout << "It is November";
        break;
    case 12:
        std::cout << "It is December";
        break;
    
    default:
        std::cout << "Anda belum memasukkan nomor bulan";
        break;
    }

    return 0;
}