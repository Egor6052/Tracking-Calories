#include <iostream>
#include <string>
#include "../lib/Days.h"

int main() {
    Days day;

    day.setCalories();

    std::cout << "Total calories: " << day.getAllCalories() << std::endl;
    std::cout << "Number of entries: " << day.getSize() << std::endl;

    // Серіалізуємо дані у файл
    day.serialize("../serializes/calories_receipt.txt");

    return 0;
}
