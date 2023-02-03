#include <iostream>
class Pen {
	public:
	  std::string color;
};
int main () {
	using namespace std;
	cout<<"Test v4.01"<<endl;
	Pen pen;
	pen.color = "#FFFFFF";
	cout<<pen.color<<endl;
	return 0;
}