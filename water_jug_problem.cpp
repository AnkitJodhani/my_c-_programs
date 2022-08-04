

// Ankit Jodhani
// 19SE02IT019
// WATER JUG PROBLEM
#include <iostream>
using namespace std;

int main()
{
    int jug_a, jug_b, choice, input_a, input_b, final_a, final_b, temp;
    cout << "please enete jug A & B capacity:-" << endl;
    cin >> input_a;
    cin >> input_b;
    cout << "Enter how much wanter you want in JUG A & B" << endl;
    cin >> final_a;
    cin >> final_b;
    if (final_a > input_a || final_b > input_b)
    {
        printf("Sorry ! but we can't fill any JUG more than it's capacity.\n");
        exit(1);
    }
    while (true)
    {
        // cout << "Enter 1 to fill JUG A(4,0):- \nEnter 2 to fill JUG B (0,3):-\nEnter 3 transfer water form jug A to jug B:- \nEnter 4 transfer water form jug B to jug A:- \nEnter 5 empty JUG A:- \nEnter 6 empty JUG B:- \n"
        //      << endl;
        printf("Enter 1 to fill JUG A(%d,0):- \nEnter 2 to fill JUG B (0,%d):-\nEnter 3 transfer water form jug A to jug B:- \nEnter 4 transfer water form jug B to jug A:- \nEnter 5 empty JUG A:- \nEnter 6 empty JUG B:- \n", input_a, input_b);
        cin >> choice;
        switch (choice)
        {
        case 1:
            jug_a = input_a;
            if (jug_a > input_a)
            {
                jug_a = input_a;
            }
            else if (jug_b > input_b)
            {
                jug_b = input_b;
            }
            printf("(%d,%d)\n", jug_a, jug_b);
            if (jug_a == final_a && final_b == jug_b)
            {
                printf("Final state is here\n");
                exit(1);
            }
            break;
        case 2:
            jug_b = input_b;
            if (jug_a > input_a)
            {
                jug_a = input_a;
            }
            else if (jug_b > input_b)
            {
                jug_b = input_b;
            }
            printf("(%d,%d)\n", jug_a, jug_b);
            if (jug_a == final_a && final_b == jug_b)
            {
                printf("Final state is here\n");
                exit(1);
            }
            break;
        case 3:
            jug_b = jug_a + jug_b;
            temp = jug_b;
            if (jug_a > input_a)
            {
                jug_a = input_a;
            }
            else if (jug_b > input_b)
            {
                jug_b = input_b;
            }
            jug_a = temp - jug_b;
            printf("(%d,%d)\n", jug_a, jug_b);
            if (jug_a == final_a && final_b == jug_b)
            {
                printf("Final state is here\n");
                exit(1);
            }
            break;
        case 4:
            jug_a = jug_a + jug_b;

            temp = jug_a;
            if (jug_a > input_a)
            {
                jug_a = input_a;
            }
            else if (jug_b > input_b)
            {
                jug_b = input_b;
            }
            jug_b = temp - jug_a;
            printf("(%d,%d)\n", jug_a, jug_b);
            if (jug_a == final_a && final_b == jug_b)
            {
                printf("Final state is here\n");
                exit(1);
            }
            break;
        case 5:
            jug_a = 0;
            printf("(%d,%d)\n", jug_a, jug_b);
            if (jug_a > input_a)
            {
                jug_a = input_a;
            }
            else if (jug_b > input_b)
            {
                jug_b = input_b;
            }
            if (jug_a == final_a && final_b == jug_b)
            {
                printf("Final state is here\n");
                exit(1);
            }
            break;
        case 6:
            jug_b = 0;
            if (jug_a > input_a)
            {
                jug_a = input_a;
            }
            else if (jug_b > input_b)
            {
                jug_b = input_b;
            }
            printf("(%d,%d)\n", jug_a, jug_b);
            if (jug_a == final_a && final_b == jug_b)
            {
                printf("Final state is here\n");
                exit(1);
            }
            break;
        default:
            printf("Invalid input Please Enter some valid input");
            break;
        }
    }
}