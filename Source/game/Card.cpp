#include <Card.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

short Card_Precedence;

int main() {
    std::string Card_File_Name;
    std::cout << "�������ļ�����������չ������ user_data.txt��: ";
    std::cin >> Card_File_Name;

    std::cout << "�����뿨������: ";
    std::cin >> Card_Name;

    std::cout << "�����붫��ֵ: ";
    std::cin >> East;

    std::cout << "�������ϵ�ֵ: ";
    std::cin >> South;

    std::cout << "����������ֵ: ";
    std::cin >> West;

    std::cout << "�����뱱��ֵ: ";
    std::cin >> North;

    /*    std::cout << "�����붫�ϵ�ֵ: ";
        std::cin >> Southeast;

        std::cout << "���������ϵ�ֵ: ";
        std::cin >> Southwest;

        std::cout << "������������ֵ: ";
        std::cin >> Northwest;

        std::cout << "�����붫����ֵ: ";
        std::cin >> Northeast; */


        // ���ļ���д�뷽ʽ
    std::ofstream outFile(Card_File_Name);
    if (!outFile.is_open()) {
        std::cerr << "�޷����ļ��򴴽��ļ�!\n";
        return 1;  // �˳�����
    }

    outFile << "CardLevel: " << CardLevel << '\n';
    outFile << "East: " << East << '\n';
    outFile << "South: " << South << '\n';
    outFile << "West: " << West << '\n';
    outFile << "North: " << North << '\n';
    outFile << "Southeast: " << Southeast << '\n';
    outFile << "Southwest: " << Southwest << '\n';
    outFile << "Northwest: " << Northwest << '\n';
    outFile << "Northeast: " << Northeast << '\n';
    outFile << "Top: " << Top << '\n';
    outFile << "Back: " << Back << '\n';

    outFile.close();

    std::cout << "�ѽ������ֵ���浽Card_File_Name�ļ��С�\n";

    return 0;
}