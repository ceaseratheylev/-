#include <Card.h>
#include <iostream>

struct Card {
    short id;
    // ������Ƭ����...
};

void PrintHandArea() {
    std::cout << "Your hand contains the following cards:" << std::endl;
    for (const auto& card : Hand_Area) {
        std::cout << "ID: " << card.id << " "; // ��ӡ��ƬID
        // ��ӡ������Ƭ����...
        std::cout << std::endl;
    }
}

Card* SelectCardById(short id) {
    for (auto& card : Hand_Area) {
        if (card.id == id) {
            return &card;
        }
    }
    return nullptr;
}

int main() {
    Card* selectedCard = SelectCardById(selectedId);
    if (selectedCard) {
        // ���п�Ƭ����...
        std::cout << "You have selected card with ID: " << selectedCard->id << std::endl;
    }
    else {
        std::cout << "Card not found!" << std::endl;
    }

    return 0;
}