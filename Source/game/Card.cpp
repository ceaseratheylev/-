#include <Card.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

bool Card_Wish = false;
int main() {
    std::string Folder_Path;
    std::cout << "请输入文件夹路径（结尾带斜杠，如 /path/to/folder/）: ";
    std::cin >> Folder_Path;
    std::string Card_File;
    std::cout << "请输入文件名（包括扩展名，如 user_data.ini）: ";
    std::cin >> Card_File;

    std::cout << "请输入东的值: ";
    std::cin >> East;

    std::cout << "请输入南的值: ";
    std::cin >> South;

    std::cout << "请输入西的值: ";
    std::cin >> West;

    std::cout << "请输入北的值: ";
    std::cin >> North;
    /*
        std::cout << "请输入东南的值: ";
        std::cin >> Southeast;

        std::cout << "请输入西南的值: ";
        std::cin >> Southwest;

        std::cout << "请输入西北的值: ";
        std::cin >> Northwest;

        std::cout << "请输入东北的值: ";
        std::cin >> Northeast;

        */
/*    long long total = CardLevel + East + South + West + North + Southeast + Southwest + Northwest + Northeast + Top + Back;

    if (total == (long long)Direction_Value()) {
        std::ofstream outFile(Card_File);
        if (!outFile.is_open()) {
            std::cerr << "无法打开文件或创建文件!\n";
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

        std::cout << "已将输入的值保存到 " << Card_File << " 文件中。\n";
    }
    else {
        std::cerr << "输入的值的总和不等于 Direction_Value，无法保存。\n";
    }*/
    std::ofstream outFile(Card_File);
    if (!outFile.is_open()) {
        std::cerr << "无法打开文件或创建文件!\n";
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

    std::cout << "已将输入的值保存到 " << Card_File << " 文件中。\n";
    return 0;
}


