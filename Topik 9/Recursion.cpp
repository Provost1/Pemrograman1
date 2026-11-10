/*
f(5) = 5 * (4/2) * 3 * (2/2) * 1
f(5) = 5 * f(4)

f(4) = (4/2) * f(3)

f(7) = 7 * (6/2) * 5 * (4/2) * 3 * (2/2) * 1
f(7) = 7 * (6/2) * f(5)

kita dapat melihat pola dari fungsi f di atas, yaitu:
1. fungsi f merupakan perkalian dari n sampai 1, dengan aturan:
	bilangan genap yang ada pada rentang 1 sampai n dibagi 2.
2. di dalam fungsi f(n) terdapat fungsi yang lebih kecil yaitu f(n - 1)

sehingga kita dapat merumuskan fungsi rekursi sebagai berikut:
1. saat n <= 1, maka return 1 (base case)
2. saat n > 1 dan n % 2 == 0 maka return f(n - 1) * (n / 2) (recurrent)
3. saat n > 1 dan n % 2 == 1 maka return f(n - 1) * n (recurrent)
*/

// nama: Jihad Malika Rahman
// NIM: 26/577911/PA/24202
// PRODI: Ilmu Komputer
#include <iostream>
using namespace std;

int f(int n){
	if(n <= 1){
		return 1; // (base case)
	}else if(n % 2 == 0){
		return f(n - 1) * (n / 2); // (recurrent)
	}else{
		return f(n - 1) * n; // (recurrent)
	}
}

int main(){
	int n;
	cin >> n;
	cout << f(n);
}



