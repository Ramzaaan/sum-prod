#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    unsigned int summ = 0;
    unsigned int prod = 1U;

    if (argc > 1){
        char *number = argv[1];
        int index = 0;
        while(number[index] != '\0' && index < 11){
            if(number[index] >= '0' && number[index] <= '9'){
                summ += (number[index] - '0');
                prod *= (number[index] - '0');
            } else{
                cout << "wrong number '" << argv[1] << "' " << endl;
                return 1;
            }
            ++index;
        }
        cout << summ << ", " << prod << endl;
    } else{

        unsigned int number;
        cout << "Input number:";
        cin >> number;

        do{
            summ += number % 10;
            prod *= number % 10;
            number /= 10;
        }while(number != 0);
        cout << summ << ", " << prod << endl;

        return 0;
    }
}