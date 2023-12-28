#include <Card.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

short Card_Precedence;

int main() {
    std::string Card_File_Name;
    std::cout << "请输入文件名（包括扩展名，如 user_data.txt）: ";
    std::cin >> Card_File_Name;

    std::cout << "请输入卡的名字: ";
    std::cin >> Card_Name;

    std::cout << "请输入东的值: ";
    std::cin >> East;

    std::cout << "请输入南的值: ";
    std::cin >> South;

    std::cout << "请输入西的值: ";
    std::cin >> West;

    std::cout << "请输入北的值: ";
    std::cin >> North;

    /*    std::cout << "请输入东南的值: ";
        std::cin >> Southeast;

        std::cout << "请输入西南的值: ";
        std::cin >> Southwest;

        std::cout << "请输入西北的值: ";
        std::cin >> Northwest;

        std::cout << "请输入东北的值: ";
        std::cin >> Northeast; */


        // 打开文件以写入方式
    std::ofstream outFile(Card_File_Name);
    if (!outFile.is_open()) {
        std::cerr << "无法打开文件或创建文件!\n";
        return 1;  // 退出程序
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

    std::cout << "已将输入的值保存到Card_File_Name文件中。\n";

    return 0;
}