
// Ankit Jodhani
// 8 puzzle Problem

#include <iostream>
using namespace std;

char arr[3][3];
void array_look()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            {

                printf("%c ", arr[i][j]);
            }
        }
        cout << endl;
    }
}
int main()
{
    char goal[3][3];
    char number, temp;
    int choice;
    int space_index_value;
    bool flag = false;
    int row, col;
    cout << "Please Enter initial state :- \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            {
                cin >> number;
                if (number == 's')
                {
                    space_index_value = i * 3 + j;
                    row = i;
                    col = j;
                }

                arr[i][j] = number;
            }
        }
    }
    cout << "Please Enter Final state :- \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            {
                cin >> number;
                goal[i][j] = number;
            }
        }
    }

    while (1)
    {
        cout << "Please Enter choice:- \n";
        printf("Press 1 to move space left :- \n");
        printf("Press 2 to move space right :- \n");
        printf("Press 3 to move space up :- \n");
        printf("Press 4 to move space bottom :- \n");
        cin >> choice;
        switch (choice)
        {
        case 1:
            // move left
            temp = arr[row][col];
            arr[row][col] = arr[row][col - 1];
            arr[row][col - 1] = temp;
            col = col - 1;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {

                    if (arr[i][j] != goal[i][j])
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        flag = true;
                    }
                }
            }
            if (flag == true)
            {
                cout << "Great!Man you got Goal state\n";
                array_look();
                exit(1);
            }
            array_look();
            break;
        case 2:
            // move right
            temp = arr[row][col];
            arr[row][col] = arr[row][col + 1];
            arr[row][col + 1] = temp;
            col = col + 1;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {

                    if (arr[i][j] != goal[i][j])
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        flag = true;
                    }
                }
            }
            if (flag == true)
            {
                cout << "Great!Man you got Goal state\n";
                array_look();
                exit(1);
            }
            array_look();
            break;
        case 3:
            // move up
            temp = arr[row][col];
            arr[row][col] = arr[row - 1][col];
            arr[row - 1][col] = temp;
            row = row - 1;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {

                    if (arr[i][j] != goal[i][j])
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        flag = true;
                    }
                }
            }
            if (flag == true)
            {
                cout << "Great!Man you got Goal state\n";
                array_look();
                exit(1);
            }
            array_look();
            break;
        case 4:
            // move bottom
            temp = arr[row][col];
            arr[row][col] = arr[row + 1][col];
            arr[row + 1][col] = temp;
            row = row + 1;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {

                    if (arr[i][j] != goal[i][j])
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        flag = true;
                    }
                }
            }
            if (flag == true)
            {
                cout << "Great!Man you got Goal state\n";
                array_look();
                exit(1);
            }
            array_look();
            break;

        default:
            cout << "Please Enter valid choice:- \n";
            break;
        }
    }
}