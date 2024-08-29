#include "../lib/Days.h"
#include <iostream>
#include <fstream>
#include <ctime>

void Days::serialize(const std::string& filename) const {
    std::ofstream file(filename);

    if (file.is_open()) {
        file << "Calories Receipt\n";
        file << "-----------------\n";
        for (size_t i = 0; i < arrayCalories.size(); ++i) {
        	std::time_t now = std::time(nullptr);
		    // Виведення часу для кожної події
            file << "Time: " << std::ctime(&now) << "\n" << "Entry " << (i + 1) << ": " << arrayCalories[i] << " calories\n";
        }
        file << "-----------------\n";
        file << "Total: " << getAllCalories() << " calories\n";
        file.close();
        std::cout << "Data has been serialized to " << filename << std::endl;
    } else {
        std::cerr << "Error opening file for writing: " << filename << std::endl;
    }
}