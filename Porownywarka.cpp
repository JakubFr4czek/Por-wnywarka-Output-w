#include<iostream>
#include<fstream>


std::fstream file1,file2;

int main(){

    file1.open("input1.txt", std::ios::in);
    file2.open("input2.txt", std::ios::in);

    std::string a,b,read;

    while(std::getline(file1,read))
        a+=read;

    while(std::getline(file2,read))
        b+=read;

    for(int i=0; i<a.size(); i++){

        if(a[i]!=b[i]){
            std::cout<<"Rozne :(\n";
            file1.close();
            file2.close();
            return 0;
        }
    }
    std::cout<<"Takie same :)\n";

    file1.close();
    file2.close();

    return 0;
}