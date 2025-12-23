#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>  // สำหรับอ่านไฟล์
#include <cstdlib>  // สำหรับใช้ atof() แปลง string เป็น float

using namespace std;



int main()

{

        int count = 0;

        float sum = 0;
        
        float sum_of_square = 0;

        string textline;

        ifstream source("score.txt");

        while (getline(source,textline))

        {
            float Dig = atof(textline.c_str());
                sum += Dig;

                sum_of_square += pow(Dig,2);

                count++;

        }

        cout << "Number of data = " << count << "\n";

        cout << setprecision(3);

        float u = sum / count;
        
        cout << "Mean = " << u << "\n";

        float stdevi = sqrt((sum_of_square / count) - pow(u, 2));

        cout << "Standard deviation = " << stdevi;

}
