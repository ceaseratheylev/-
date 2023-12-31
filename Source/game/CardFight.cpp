#include <Card.h>
#include <iostream>

struct Card {
    short id;
    // 其他卡片属性...
};

void PrintHandArea() {
    std::cout << "Your hand contains the following cards:" << std::endl;
    for (const auto& card : Hand_Area) {
        std::cout << "ID: " << card.id << " "; // 打印卡片ID
        // 打印其他卡片属性...
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
        // 进行卡片操作...
        std::cout << "You have selected card with ID: " << selectedCard->id << std::endl;
    }
    else {
        std::cout << "Card not found!" << std::endl;
    }

    return 0;
}