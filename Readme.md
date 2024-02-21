# MyProject

MyProject is a simple C++ web server application with signup, login, and landing page features. It provides a basic framework for handling HTTP requests and responses.

## Project Structure

MyProject/
├── include/
│ ├── web_server.hpp
│ └── httplib.h
├── src/
│ └── main.cpp
├── Makefile
└── README.md


- `include/`: Directory containing header files.
  - `web_server.hpp`: Header file containing declarations for your web server functions.
  - `httplib.h`: Third-party header file for HTTP/HTTPS functionality.
- `src/`: Directory containing source files.
  - `main.cpp`: Main source file containing the implementation of your web server application.
- `Makefile`: File containing instructions for building the project.
- `README.md`: File containing information about your project.

## Getting Started

To compile and run the project, follow these steps:

1. Clone the repository:

   ```bash
   git clone https://github.com/your_username/MyProject.git
Navigate to the project directory:


cd MyProject
Build the project using the provided Makefile:
make
Run the web server:
./web_server
Usage
Once the web server is running, you can access it in your web browser by navigating to http://localhost:8080/. You will be presented with options to signup, login, or exit the application.
