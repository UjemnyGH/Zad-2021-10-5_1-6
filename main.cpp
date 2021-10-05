#include <iostream>
#include <math.h>
#include <string>

int main()
{
    int userChoise;
    bool isProgramRunning = true;
    
    while(isProgramRunning)
    {
        float a = 0.0f;
        float b = 0.0f;
        float c = 0.0f;
        float r = 0.0f;
        float h = 0.0f;

        std::cout << "\x1B[33mType 1 - 6\n" << "1 - a^2\n2 - a*b\n3 - (ah)/2\n4 - a^3\n5 - a*b*c\n6 - (4/3)PI*r^3\n7 - exit\n";

        std::cout << "\x1B[34m";

        std::cin >> userChoise;

        #if defined _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        switch (userChoise)
        {
        case 1:
            std::cout << "a: ";
            std::cin >> a;

            std::cout << "\x1B[32mOutput:\t\t\t" << powf32(a, 2) << std::endl;

            break;

        case 2:
            std::cout << "a: ";
            std::cin >> a;

            std::cout << "b: ";
            std::cin >> b;

            std::cout << "\x1B[32mOutput:\t\t\t" << a * b << std::endl;

            break;

        case 3:
            std::cout << "a: ";
            std::cin >> a;

            std::cout << "h: ";
            std::cin >> h;

            std::cout << "\x1B[32mOutput:\t\t\t" << (a * h) / 2 << std::endl;
            
            break;

        case 4:
            std::cout << "a: ";
            std::cin >> a;

            std::cout << "\x1B[32mOutput:\t\t\t" << powf32(a, 3) << std::endl;
            
            break;

        case 5:
            std::cout << "a: ";
            std::cin >> a;

            std::cout << "b: ";
            std::cin >> b;

            std::cout << "c: ";
            std::cin >> c;

            std::cout << "\x1B[32mOutput:\t\t\t" << a * b * c << std::endl;

            break;

        case 6:
            std::cout << "r: ";
            std::cin >> r;

            std::cout << "\x1B[32mOutput:\t\t\t" << (4/3) * M_PI * pow(r, 3) << std::endl;

            break;
        
        case 7:
            isProgramRunning = false;

            break;
        
        default:
            std::cout << "\x1B[31mInvalid choise: "; 
            std::cin >> userChoise;

            break;
        }
    }
    
    printf("\x1B[37m");

    return 0;
}