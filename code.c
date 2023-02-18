#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    // this is a comment

    /*
        this is a multi-line comment
    */

    int variable;
    float float_variable = 1.234567;
    char raichuName[] = "raichu";
    char * raichu = "r";
    char name[16] = "basically string";
    bool a_bool = true;

    variable = 2;
    variable+=5;

    printf("%d\n", variable);

    printf("%s\n", name);

    printf("%s is the first lettter in raichu's name\n", raichu);
    printf("my float variable value is %f\n", float_variable);
    printf("my float variable value but trimmed is %0.2f\n", float_variable);

    printf("this\twill\thave\ttabs\tand\t\"speach marks\"\n");

    return 0;
}

