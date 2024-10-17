#include <stdio.h>

int five(int m){
    return m/500;
}


int hund(int m){

    return (m%500)/100;
}



int main(){
    int x,m, jan;
    int f,h;
    f=five(jan);
    h=hund(jan);

printf("돈 얼마 넣으시나요?:");
scanf("%d",&m);

printf("번호를 고르시오:\n1번:핫식스 1500원\n2번:레스비 800원\n3번:애플망고 1200원");
scanf("%d",&x);

if(x==1){
    jan=m-1500;
    f=five(jan);
    h=hund(jan);
    printf("500원은 %d개\n100원은 %d개입니다.", f,h);
}

else if(x==2){
    jan=m-800;
    f=five(jan);
    h=hund(jan);
    printf("500원은 %d개\n100원은 %d개입니다.", f,h);
}

else{
    jan=m-1200;
    f=five(jan);
    h=hund(jan);
    printf("500원은 %d개\n100원은 %d개입니다.", f,h);
}

    return 0;
}