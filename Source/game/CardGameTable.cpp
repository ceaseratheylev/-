#include <Card.h>
#include <iostream>
#include <vector>
int userValue;
int boardSize;
std::vector<std::vector<char>> board;
class ChessBoard {

public:
    // 构造函数，创建并初始化棋盘
    ChessBoard(int size) {
        board.resize(size, std::vector<char>(size, '.'));  // '.' 表示空的棋格
    }

    // 显示棋盘
    void displayBoard() const {
        for (const auto& row : board) {
            for (char cell : row) {
                std::cout << cell << " ";
            }
            std::cout << std::endl;
        }
    }

    // 设置棋子
    void setPiece(int row, int col, char piece) {
        if (isValidPosition(row, col)) {
            board[row][col] = piece;
        }
    }

    // 获取棋子
    char getPiece(int row, int col) const {
        if (isValidPosition(row, col)) {
            return board[row][col];
        }
        return '.';
    }

private:
    // 检查位置是否有效
    bool isValidPosition(int row, int col) const {
        return row >= 0 && row < board.size() && col >= 0 && col < board.size();
    }
};

int main() {
    std::cout << "输入一个要被乘以四的数: ";
    std::cin >> userValue;
    int boardSize = userValue * 4;
    if (boardSize < 16) {
        std::cout << "错误：计算出的棋盘尺寸小于 16。将棋盘尺寸设置为 16。" << std::endl;
        boardSize = 16;
    }
    ChessBoard board(boardSize);
    board.displayBoard();
    int row, col;
    char piece;
    std::cout << "输入位置（行列）： ";
    std::cin >> row >> col;
    std::cout << "可用卡片： ";
    for (int i = 0; i < Hand_Area.size(); ++i) {
        std::cout << Hand_Area[i] << " ";
    }
    std::cout << std::endl;

    int selectedCard;
    std::cout << "选择一个卡片（输入其编号）： ";
    std::cin >> selectedCard;
    if (row >= 0 && row < boardSize && col >= 0 && col < boardSize) {
        if (selectedCard >= 0 && selectedCard < Hand_Area.size()) {
            board.setPiece(row, col, Hand_Area[selectedCard]);
        }
        else {
            std::cout << "无效的棋子编号！请再试一遍。" << std::endl;
        }
    }
    else {
        std::cout << "无效位置！ 请再试一遍。" << std::endl;
    }
    board.displayBoard();
    return 0;
}
long long Direction_Value() {
    return boardSize;
}