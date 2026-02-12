#include <iostream>
#include "Student.h"
#include "Person.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int id;
    std::cin >> id;
    Person st("G", 18, id);
    st.printInfo();
    std::cout << "Enter password: "<< std::endl;
    int password = 1234;
    int pass;
    std::cin >> pass;
    if (pass == password) {
        st.showid();
    }
    else{std::cout << "Not correct password"; return 1;}

}
