#include <iostream>
#include <vector>

// Sample electricity consumption data (replace this with your actual data)
std::vector<std::vector<int>> consumptionData = {
    {90, 150, 280, 50},   // Slab 1 data
    {120, 180, 250, 300}, // Slab 2 data
    {220, 280, 310, 400}  // Slab 3 data
};

// Function to calculate and display cost for slab 1
void costSlab1() {
    int slabCost = 0;
    int rate = 10;  // Cost per unit for slab 1
    for (int units : consumptionData[0]) {
        slabCost += units * rate;
    }
    std::cout << "Total cost for Slab 1: " << slabCost << std::endl;
}

// Function to calculate and display cost for slab 2
void costSlab2() {
    int slabCost = 0;
    int rate = 15;  // Cost per unit for slab 2
    for (int units : consumptionData[1]) {
        slabCost += units * rate;
    }
    std::cout << "Total cost for Slab 2: " << slabCost << std::endl;
}

// Function to calculate and display cost for slab 3
void costSlab3() {
    int slabCost = 0;
    int rate = 20;  // Cost per unit for slab 3
    for (int units : consumptionData[2]) {
        slabCost += units * rate;
    }
    std::cout << "Total cost for Slab 3: " << slabCost << std::endl;
}

// Function to display the menu
void displayMenu(const std::string& studentID) {
    std::cout << "Student ID: " << studentID << std::endl;
    std::cout << "1. Display the bill of slab 1 and slab 2" << std::endl;
    std::cout << "2. Display the bill of slab 3" << std::endl;
    std::cout << "Press any other key to exit" << std::endl;
}

int main() {
    std::string studentID = "ABC123"; // Replace with the actual student ID
    char choice;

    while (true) {
        displayMenu(studentID);
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == '1') {
            costSlab1();
            costSlab2();
        }
        else if (choice == '2') {
            costSlab3();
        }
        else {
            break; // Exit the program if any other key is pressed
        }
    }

    return 0;
}
