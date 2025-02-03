#include <iostream>

using namespace std;

int main()
{
    int arra[10]={2,5,0,8,9,6,1,4,3,7};
    int aron[10];
    for (int i=0; i<(sizeof(arra)/sizeof(arra[0]));i++)
    {
        int min=arra[i];
        for(int j=1;j<(sizeof(arra)/sizeof(arra[0]));j++)
        {
            if (min<=arra[j])
            {
                continue;
            }
            else
            {
                int temp=min;
                aron[i] = arra[j];
                arra[j] = min;
            }
        }
    }
    for (int i=0;i<10;i++)
    {
        cout<<aron[i]<<" ";
    }
    return 0;
}