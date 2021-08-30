#include "Stock.h"

int main() {
	
	Stock s1("A", 10, 1000);
	Stock s2("B", 20, 1200);

	s1.show();
	s2.show();
	cout << "A와 B중 share_val이 큰 객체는\n";
	s1.topval(s2).show();

	return 0;
}