#include <Card.h>
#include <iostream>
#include <vector>
int userValue;
int boardSize;
std::vector<std::vector<char>> board;
class ChessBoard {

public:
    // ���캯������������ʼ������
    ChessBoard(int size) {
        board.resize(size, std::vector<char>(size, '.'));  // '.' ��ʾ�յ����
    }

    // ��ʾ����
    void displayBoard() const {
        for (const auto& row : board) {
            for (char cell : row) {
                std::cout << cell << " ";
            }
            std::cout << std::endl;
        }
    }

    // ��������
    void setPiece(int row, int col, char piece) {
        if (isValidPosition(row, col)) {
            board[row][col] = piece;
        }
    }

    // ��ȡ����
    char getPiece(int row, int col) const {
        if (isValidPosition(row, col)) {
            return board[row][col];
        }
        return '.';
    }

private:
    // ���λ���Ƿ���Ч
    bool isValidPosition(int row, int col) const {
        return row >= 0 && row < board.size() && col >= 0 && col < board.size();
    }
};

int main() {
    std::cout << "����һ��Ҫ�������ĵ���: ";
    std::cin >> userValue;
    int boardSize = userValue * 4;
    if (boardSize < 16) {
        std::cout << "���󣺼���������̳ߴ�С�� 16�������̳ߴ�����Ϊ 16��" << std::endl;
        boardSize = 16;
    }
    ChessBoard board(boardSize);
    board.displayBoard();
    int row, col;
    char piece;
    std::cout << "����λ�ã����У��� ";
    std::cin >> row >> col;
    std::cout << "���ÿ�Ƭ�� ";
    for (int i = 0; i < Hand_Area.size(); ++i) {
        std::cout << Hand_Area[i] << " ";
    }
    std::cout << std::endl;

    int selectedCard;
    std::cout << "ѡ��һ����Ƭ���������ţ��� ";
    std::cin >> selectedCard;
    if (row >= 0 && row < boardSize && col >= 0 && col < boardSize) {
        if (selectedCard >= 0 && selectedCard < Hand_Area.size()) {
            board.setPiece(row, col, Hand_Area[selectedCard]);
        }
        else {
            std::cout << "��Ч�����ӱ�ţ�������һ�顣" << std::endl;
        }
    }
    else {
        std::cout << "��Чλ�ã� ������һ�顣" << std::endl;
    }
    board.displayBoard();
    return 0;
}
long long Direction_Value() {
    return boardSize;
}