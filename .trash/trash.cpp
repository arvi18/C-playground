#include <iostream>
using namespace std;
int main()
{
    int a=10;
    
    int *ptr = &a;

    int **dptr = &ptr;

    cout<< "a "<<a<<endl<<"&a "<<&a<<endl<<"*a dne"<<endl<<endl;     

    cout<< "ptr "<<ptr<<endl<<"*ptr "<<*ptr<<endl<<"&ptr "<<&ptr<<endl<<endl;

    cout<< "dptr "<<dptr <<endl<<"*dptr "<<*dptr<<endl<<"**dptr "<<**dptr<<endl<<"&dptr "<<&dptr<<endl<<endl;

    int arr[7];

    cout<<arr<<endl<<arr[0]<<endl<<arr[1]<<endl<<arr[6]<<endl<<arr[9];

    return 0;
}