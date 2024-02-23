#ifndef APP_H
#define APP_H

#include <string>

class App {
public:
    bool validateUsername(const std::string& username); // Corrected function signature
    bool validatePassword(const std::string& password); // Corrected function signature
    App(); // Constructor declaration
    void run();
private:
    void mainMenu();
    void signup();
    void login();
};

#endif // APP_H
