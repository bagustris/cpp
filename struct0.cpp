#include<iostream>

using namespace std;

struct my {
	int age;
	char name[20];
};

int main(void) {
struct my MyFriend;
cout<<"Masukkan nama: ";
cin>>MyFriend.name;
cout<<"Masukkan umur: ";
cin>>MyFriend.age;
cout<<"Nama anda "<<MyFriend.name<< " dan anda berumur "<<MyFriend.age<<" tahun."<<endl;
return 0;
}
