#include<iostream>
#include<conio.h>
using namespace std;
int m = 0;

void tower_of_hanoi(int n, char beg, char aux, char end) {
     if (n == 1) {
        cout<<"\n"<<beg<<" to "<<end;
        m++;
     }
     else {
          tower_of_hanoi( (n-1), beg, end, aux);
          cout<<"\n"<<beg<<" to "<<end; 
          m++;
          tower_of_hanoi( (n-1), aux, beg, end);
     }
}

int main() {
    int n;
    cout<<"\nEnter number of Disks : ";
    cin>>n;
    
    tower_of_hanoi(n, 'A', 'B', 'C');
    cout<<"\nNumber of Moves : "<<m;
    getch();
    return 0;
}
