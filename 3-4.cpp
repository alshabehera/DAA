#include <iostream>
using namespace std;

void mulMat(int mat1[][8], int mat2[][8])
{
    int rslt[8][8];

    cout << "Multiplication of given two matrices is:\n";

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            rslt[i][j] = 0;

            for (int k = 0; k < 8; k++) {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }

            cout << rslt[i][j] << "\t";
        }

        cout << endl;
    }
}
int main()
{
    int mat1[8][8] = {  {1,0,2,1,4,1,1,1},
                         {2,0,3,2,2,1,0,0},
                         {1,2,0,0,1,2,3,1},
                         {3,0,1,1,3,3,1,1},
                         {4,1,1,0,2,4,2,2},
                         {1,0,0,1,3,1,1,1},
                         {1,3,2,1,2,1,0,0},
                         {4,2,2,1,1,0,0,0} };

    int mat2[8][8] = {  {1,0,0,1,1,1,0,0},
                         {0,1,1,0,0,0,1,1},
                         {2,0,0,2,0,0,2,2},
                         {0,2,2,0,2,2,0,0},
                         {3,3,3,1,4,3,2,3},
                         {1,2,1,3,1,3,1,1},
                         {3,2,1,2,4,1,1,0},
                         {2,2,2,3,3,2,4,4} };

    if (8 != 8) {
        cout << "The number of columns in Matrix-1  must "
                "be equal to the number of rows in "
                "Matrix-2"
             << endl;
        cout << "Please update MACROs according to your "
                "array dimension in #define section"
             << endl;

        exit(EXIT_FAILURE);
    }
    mulMat(mat1, mat2);

    return 0;
}
