#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Hello, world\n");
    printf("my name is jamine\n");
    printf( "i am a programmer\n");
    printf("jobs can come in\n");
    long int x =902;
    printf("The value of x is %d", x);
    char a ='t';
    char name [] = "moni-shout-ye";
    printf("my name is %s", name);
    float height = 5.14;
    printf("my height is %f",height);
    double weight = 90.88;
    printf("my weight is %f",weight);
    _Bool is_developer=1;
    _Bool is_fair=0;
    bool is_admin=true;
    bool is_underage=false;
    printf("The boolean is %d\n",is_developer);
    printf("The boolean is %s", is_developer?"true";"false");
    return 0;
}