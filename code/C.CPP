/*******************************************
		SEG.CPP (Sequences)		
		23/08/20 10:10	  
	********************************************/
	#include <iostream>
	#include <fstream>

	using namespace std;
	
	typedef long long Long;
	const char * fn = "SEQ.INP";
	
	const Long M = 123456789;
	
	// Tinh nhanh z = a^b % m 
	Long Exp(Long a, Long b, Long m) {
		Long z = 1;
		while (b != 0) {
			if (b & 1) { // Odd b: b % 2 = 1
				z = z*a % m;
			}
			a = (a * a) % m;
			b >>= 1; // b = b / 2
		}
		return z;
	} // Exp	
		
	// But we know that 2^k = 1 << k if k < 18

	void Run() {
		ifstream f(fn);
		int sotest;		
		f >> sotest;
		int n, m = M;
		Long res;
		for (int i = 1; i <= sotest; ++i) {
			cout << "\n Test no " << i << ". ";
			f >> n;
			cout << " n = " << n << " : " << Exp(2,n-1,m);
			res = (1 << (n-1)) % m;
			cout << " vs " << res << endl;
		} // for
		f.close();
	} // Run
  	
	  main() {
  		Run();
		//--------------------------------------------- 
 		cout << endl << " T H E   E N D . ";
	  	return 0;       
	}
	

