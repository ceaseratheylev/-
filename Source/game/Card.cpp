#include <Card.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

bool Card_Wish = false;
int main() {
    std::string Folder_Path;
    std::cout << "�������ļ���·������β��б�ܣ��� /path/to/folder/��: ";
    std::cin >> Folder_Path;
    std::string Card_File;
    std::cout << "�������ļ�����������չ������ user_data.ini��: ";
    std::cin >> Card_File;

    std::cout << "�����붫��ֵ: ";
    std::cin >> East;

    std::cout << "�������ϵ�ֵ: ";
    std::cin >> South;

    std::cout << "����������ֵ: ";
    std::cin >> West;

    std::cout << "�����뱱��ֵ: ";
    std::cin >> North;
    /*
        std::cout << "�����붫�ϵ�ֵ: ";
        std::cin >> Southeast;

        std::cout << "���������ϵ�ֵ: ";
        std::cin >> Southwest;

        std::cout << "������������ֵ: ";
        std::cin >> Northwest;

        std::cout << "�����붫����ֵ: ";
        std::cin >> Northeast;

        */
/*    long long total = CardLevel + East + South + West + North + Southeast + Southwest + Northwest + Northeast + Top + Back;

    if (total == (long long)Direction_Value()) {
        std::ofstream outFile(Card_File);
        if (!outFile.is_open()) {
            std::cerr << "�޷����ļ��򴴽��ļ�!\n";
            return 1;
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
        outFile << "Wish: " << Card_Wish << '\n';
        outFile.close();

        std::cout << "�ѽ������ֵ���浽 " << Card_File << " �ļ��С�\n";
    }
    else {
        std::cerr << "�����ֵ���ܺͲ����� Direction_Value���޷����档\n";
    }*/
    std::ofstream outFile(Card_File);
    if (!outFile.is_open()) {
        std::cerr << "�޷����ļ��򴴽��ļ�!\n";
        return 1;
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
    outFile << "Wish: " << Card_Wish << '\n';
    outFile.close();

    std::cout << "�ѽ������ֵ���浽 " << Card_File << " �ļ��С�\n";
    return 0;
}


