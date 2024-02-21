#ifndef APP_H
#define APP_H
#include <string> // Add this line

class App {
public:

};
class App {
public:
    bool validateUsername(const std::string& username); // Fix function signature
    bool validatePassword(const std::string& password); // Fix function signature
    App();
    void run();
private:
    void mainMenu();
    void signup();
    void login();
    bool validateUsername(const std::string& username);
    bool validatePassword(const std::string& password);
};

#endif // APP_H
