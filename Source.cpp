#include"Header.h" 
vector<vector<double>>getResult(int Nmax,double eps, int* S,double*Maxep){// максимальное число итераций (не менее 1), минимально допустимый прирост
	int n = 4, m = 4;//размерность сетки
	double a = -1, b = 1, c = -1, d = 1;
	double h = (b - a) / n; // ненулевые элементы матрицы (-A)
	double k = (d - c) / m;
	double A_kh = -2 * (1. / pow(k, 2) + 1. / (pow(h, 2)));
	 // счетчик итераций
	double eps_max = 0; // текущее значение прироста
	double eps_cur = 0; // для подсчета текущего значения прироста
	vector<vector<double>> v(n + 1); // искомый вектор v
	for (int i = 0; i < n + 1; i++) {
		vector<double>t((m + 1));
		v[i] = t;
	}
	vector<vector<double>> f(n + 1);//f(x,y) из дифф. уравнения в узлах сетки
	for (int i = 0; i < n + 1; i++) {
		vector<double>t((m + 1));
		f[i] = t;
	}
	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < m + 1; j++) {
			f[i][j] = 4;
		}
	}
	vector<double> xs(n + 1);
	vector<double> ys(m + 1);
	xs[0] = a;
	for (int i = 1; i < n + 1; i++) {
		xs[i] = xs[i - 1] + h;
	}
	ys[0] = c;
	for (int j = 1; j < m + 1; j++) {
		ys[j] = ys[j - 1] + k;
	}
	for (int i = 0; i < m + 1; i++) {
		v[i][0] = -pow(xs[i], 2);
		v[i][m] = -pow(xs[i], 2);
	}
	for (int i = 0; i < n + 1; i++) {
		v[0][i] = -pow(ys[i], 2);
		v[n][i] = -pow(ys[i], 2);
	}
	double v_old; // старое значение преобразуемой компоненты вектора v
	double v_new; // новое значение преобразуемой компоненты вектора v
	bool w = false; // условие остановки
	while (!w) {
		eps_max = 0;
		for (int j = 1; j < m /*+ 1*/; j++) {
			for (int i = 1; i < n /*+ 1*/; i++) {
				v_old = v[i][j];
				v_new = -(1./pow(h,2) * (v[i + 1][j] + v[i - 1][j]) + 1. / pow(k, 2) * (v[i][j + 1] + v[i][j - 1]));
				v_new = v_new - f[i][j];
				v_new = v_new / A_kh;
				eps_cur = fabs(v_old - v_new);		
				if (eps_cur > eps_max) { eps_max = eps_cur; };
				v[i][j] = v_new;
			}
		}
		*S = *S + 1;
		if ((eps_max < eps) || (*S >= Nmax)) { w = true; }
	}
	*Maxep = eps_max;
	return v;
}