#include <iostream>

int main() {
    int number = 0, counter = 0;
    std::cout << "Insert number: ";
    std::cin >> number;

    while (number>1){
        if ((number%2)!=0)
            number=number*3+1;
        else
            number=number/2;
        counter++;
        std::cout << "Now number is: " << number << " after " << counter << " rounds.\n";
    }

    return 0;
}
