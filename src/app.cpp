#include "app.h"
#include <iostream>
#include <string>

bool App::validateUsername(const std::string& username) {
    // Add validation logic as needed
    return true; // Placeholder return value
}

bool App::validatePassword(const std::string& password) {
    // Add validation logic as needed
    return true; // Placeholder return value
}

App::App() {}

void App::run() {
    while (true) {
        mainMenu();
    }
}

void App::mainMenu() {
    std::cout << "Welcome to the Sample App" << std::endl;
    std::cout << "1. Signup" << std::endl;
    std::cout << "2. Login" << std::endl;
    std::cout << "3. Exit" << std::endl;

    int choice;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch(choice) {
        case 1:
            signup();
            break;
        case 2:
            login();
            break;
        case 3:
            std::cout << "Exiting the application. Goodbye!" << std::endl;
            exit(0);
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
    }
}

void App::signup() {
    std::string username, password;
    std::cout << "Enter your username: ";
    std::cin >> username;
    std::cout << "Enter your password: ";
    std::cin >> password;

    if (validateUsername(username) && validatePassword(password)) {
        // Save the user details (not implemented)
        std::cout << "Signup successful!" << std::endl;
    } else {
        std::cout << "Invalid username or password format. Please try again." << std::endl;
    }
}

void App::login() {
    std::string username, password;
    std::cout << "Enter your username: ";
    std::cin >> username;
    std::cout << "Enter your password: ";
    std::cin >> password;

    // Authenticate the user (not implemented)
    std::cout << "Login successful! Welcome, " << username << "!" << std::endl;
}
