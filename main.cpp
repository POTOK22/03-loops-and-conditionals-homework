#include <iostream>
#include <cmath>

int main()
{
//    //homework
    int mini, maxi;
    std::cout<<"Enter the minimum number of interval: ";
    std::cin>>mini;
    std::cout<<"Enter the maximum number of interval: ";
    std::cin>>maxi;
    if(mini<maxi){
        for (int i=mini; i<maxi; i++){
            if(i==2){
                std::cout<<i<<std::endl;
                continue;
            }
            for (int j=2; j<i; j++){
                if(i%j == 0){
                    break;
                }
                else if(i==j+1){
                    std::cout<<i<<std::endl;
                }
            }
        }
    }else{
        std::cout<<"The minimal number is bigger than maximum number!";
    }
    int a, b;
    std::cout<<"Enter first number: ";
    std::cin>>a;
    std::cout<<"Enter second number: ";
    std::cin>>b;
    for (int i=1; i<2147483647; i++){
        if(i%a==0 && i%b==0){
            std::cout<<i<<std::endl;
        i=0;
            if (i==0){
                break;
            }
        }
    }
    int k, k_fctr=1, z;
    float e;
    std::cin>>k;
    if (k==0 || k==1){
        k_fctr=1;
    } else {
        int i=1;
        while (i<=k){
            k_fctr *= i;
            i++;
        }
    }
    std::cout<<k_fctr;

    return 0;
}
