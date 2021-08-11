#include <iostream>
#include <cmath>

using namespace std;

//calculo de a
int calc_a(int x)
{
	int resa;
	resa = 2 * pow(x, 2) + 3 * x - 1;
	
	return resa;
}

// calculo de b
int calc_b(int x)
{
	int resb;
	resb = pow(x, 3);
	
	return resb;
}

// calculo de c
int calc_c(int y)
{
	int resc;
	resc = pow (y, 3);
	
	return resc;
}

int main()
{
    int a, b, c, x, y;
    
    cin >> x >> y;
    
    //calculando a e apresentando resultado
    a = calc_a(x); 
    
    cout << "a = " << a << endl;
    
    //calculando b e apresentando resultado
    b = calc_b(x);
    
    cout << "b = " << b << endl;
    
    //calculando c e apresentando resultado
    c = calc_c(y);
    
    cout << "c = " << c << endl;
    
    return 0;
}