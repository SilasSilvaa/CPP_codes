#include <iostream> 

//Function
int addNumbers(int first_param, int second_param){
    return first_param + second_param;
}

int main(){
    int first_number = 12; //Statement
    int second_number {9};

    int sum = first_number + second_number;

    sum = addNumbers(first_number, second_number);
    sum = addNumbers(34, 7);

    std::cout << sum << std::endl;
    std::cout << addNumbers(23, 8) << std::endl;

    return 0;
}