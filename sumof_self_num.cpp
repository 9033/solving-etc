//문제 : http://codingdojang.com/scode/365
//1 이상이고 5000 보다 작은 모든 셀프 넘버들의 합을 구하라.

#include <iostream>
#include <cstdlib>

int self[5001] ={0};

int main()
{
    int a1000, a100, a10, a1;
    for(a1000=0;a1000<=9;a1000++)
    for(a100=0;a100<=9;a100++)
    for(a10=0;a10<=9;a10++)
    for(a1=0;a1<=9;a1++){
        int a = (a1000*1000+a100*100+a10*10+a1);
        if(a1000+a100+a10+a1+a<5000){
            self[a1000+a100+a10+a1+a] = 1;
        }
    }
    int a,total = 0;
    for(a=1;a<5000;a++){
        if(!self[a])total+=a;
    }
    std::cout << total << std::endl;
}
