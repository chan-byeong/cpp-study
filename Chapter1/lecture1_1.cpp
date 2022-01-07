#include <iostream>


int main(){
    int x = 1;
    x =  x+2 ;
    std::cout <<x<< std::endl;

    int y =x;
    std::cout <<y<< std::endl;

    std::cout << x+y << std::endl; // x+y is r-value. assignment 역활을 수행

    std::cout <<x<< std::endl;

    //not initialization
    int z;
    std::cout << z << std::endl;

    return 0;
}