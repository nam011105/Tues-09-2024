#include <iostream>
using namespace std;
int main() {
    float diemtoan, diemly, diemhoa, diemTB;
    cout<<"\nnhap diem toan: ";
    cin>>diemtoan;
    cout<<"\nnhap diem ly: ";
    cin>>diemly;
    cout<<"\nnhap diem hoa: ";
    cin>>diemhoa; 
    diemTB=(diemtoan+diemly+diemhoa)/3;
    cout<<"\ndiem toan"<<diemtoan;
   cout<<"\ndiem ly"<<diemly;
   cout<<"\ndiem hoa"<<diemhoa;
   cout<<"\ndiem trung binh"<<diemTB;
   if (diemTB<5)
   cout<<"rot";
   else
   cout<<"dau";
   return 0;



}