#ifndef APP_H
#define APP_H

class App {
public:
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
