
#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {
        {0, 0, 5},
        {0, 8, 0},
        {0, 0, 0}
    };

    int sparse[10][3];
    int k = 1;

    
    sparse[0][0] = 3;
    sparse[0][1] = 3;

    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];

                k++;
            }
        }
    }

    sparse[0][2] = k - 1;


    cout << "Row\tColumn\tValue\n";

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sparse[i][j] << "\t";
        }

        cout << endl;
    }

    return 0;
}
