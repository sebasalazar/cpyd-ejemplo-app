#include <iostream>

int main(int argc, char** argv) {

    if (argc > 1) {
        std::cout << std::endl << "Hola ";

        for (int i=1;i<argc ; i++) {
            std::cout <<  argv[i] << " ";
        }

        std::cout << "desde " << argv[0] << std::endl;

    } else {
        std::cout << std::endl << "Hola desde " << argv[0] << std::endl;
    }

    return 0;
}
