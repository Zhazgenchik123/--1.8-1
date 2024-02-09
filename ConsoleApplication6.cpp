# include <iostream>

void counting_function(int& num);

int main(int argc, char** argv){
    int count = 0;
    for (int i = 0; i < 15; i++)
    {
        counting_function(count);
    }
}

void counting_function(int &num) {
    num++;
    std::cout << "quantity of functions call counting_function(): " << num << std::endl;
}