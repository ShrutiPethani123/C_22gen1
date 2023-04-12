/*

Create a class called 'Matrix' containing constructor that initializes the number of rows and number of columns of a new Matrix object. The Matrix class has the following information:

1.number of rows of matrix
2 number of columns of matrix
3 - elements of matrix in the form of 2D array
The Matrix class has methods for each of the following:
1 - get the number of rows
2 - get the number of columns
3 - set the elements of the matrix at given position (i,j)
4 - adding two matrices. If the matrices are not addable, "Matrices cannot be added" will be displayed.
*/

#include <iostream>
using namespace std;

class Matrix
{

    int row;
    int col;
    int a[4][4];

public:
    Matrix(int r, int c)
    {

        row = r;
        col = c;
    }

    int getRows()
    {
        return row;
    }

    int getCols()
    {
        return col;
    }

    void setElement(int i, int j, int value)
    {
        if (i >= 0 && j >= 0 && i < row && j < col)
        {
            a[i][j] = value;
        }
        else
        {
            cout << "Invalid Index!!!" << endl;
        }
    }

    void display()
    {
        cout << endl
             << "matrix..." << endl;
        for (int i = 0; i < getRows(); i++)
        {
            for (int j = 0; j < getCols(); j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    void addMatrix(Matrix m)
    {
        int result[4][4];
        if (row != m.getRows() && col != m.getCols())
        {
            cout << "Addition is Not Possible!!" << endl;
        }
        else
        {

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    result[i][j] = a[i][j] + m.a[i][j];
                }
            }
            cout<<endl<<"Addition is"<<endl;

            for (int i = 0; i < getRows(); i++)
            {
                for (int j = 0; j < getCols(); j++)
                {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
};

int main()
{
    Matrix m1(2, 2);

    cout << m1.getRows() << endl;
    m1.setElement(0, 0, 3);
    m1.setElement(0, 1, 4);
    m1.setElement(1, 0, 5);
    m1.setElement(1, 1, 7);
    m1.display();

    Matrix m2(2, 2);
    m2.setElement(0, 0, 1);
    m2.setElement(0, 1, 3);
    m2.setElement(1, 0, 5);
    m2.setElement(1, 1, 8);
    m2.display();

    m1.addMatrix(m2);



    
}