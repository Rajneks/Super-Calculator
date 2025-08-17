#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

#define MAX_N 10000

using namespace std;

int tab_int[MAX_N];
long long int big_tab_int[MAX_N];
unsigned long long int tab_unint[MAX_N];


void read(int n){
        int i;
        for(i=0;i<n;i++)
                scanf("%d",tab_int+i);
}

void big_read(int n){
        int i;
        for(i=0;i<n;i++)
                scanf("%d",big_tab_int+i);
}

void read_unsigned(int n){
        int i;
        for(i=0;i<n;i++)
            scanf("%d",tab_unint+i);
}


int f0(int *ciag, int size, int pro) {
    int min = ciag[0];

    for (int i = 0; i < size; i++) {
        if (min > ciag[i]) {
            min = ciag[i];
        
}
    
}

    if (pro == 0) {
        for (int i = 0; i < size; i++) {
            if (ciag[i] == min) {
                cout << i+1 << " ";
            
}
        
}
        cout << endl;
    
}

    return min;
}

void f1(int *ciag, int size) {

    int *liczby = new int[size];

    int k = size;

    for (int i = 0; i < size; i++) {
        int min = f0(ciag, k, 1);
        // cout << min << " ";
        
        for (int j = 0; j < k; j++) {
            if (ciag[j] == min) {
                for (int m = j; m < k - 1; m++) {
                    ciag[m] = ciag[m + 1];
                
}

                k--;
                break;
            
}
        
}

        liczby[k] = min;
    
}

    
    for (int i = 0; i < size; i++) {
        cout << liczby[i] << " ";
    
}

    delete [] liczby;

    cout << endl;

}

double f2(int *ciag, double *ciag_2, int pro, int size) {

    double result = 0;

    if (pro == 3) {
        for (int i = 0; i < size; i++) {
            result += ciag_2[i] * ciag_2[i];
        
}

        return result;
    
} else {
        for (int i = 0; i < size; i++) {
            result += ciag[i] * ciag[i];
        
}

        result = sqrt(result);
        return result;
    
}
}

int f3(int *ciag, int size) {

    double average = 0;

    for (int i = 0; i < size; i++) {
        average += ciag[i];
    
}

    average /= size;
    // cout << average;

    double *data = new double[size];

    for (int i = 0; i < size; i++) {
        data[i] = ciag[i] - average;
    
}

    double norm_e = f2(0, data, 3, size);
    // cout << norm_e;

    delete [] data;

    int wynik = floor(sqrt(norm_e/size));

    return wynik;
    
}

string f4(int *ciag, int size) {    

    for (int i = 0; i < size/2; i++) {
        int temp = ciag[i];
        ciag[i] = ciag[size - 1 - i];
        ciag[size - 1 - i] = temp;
        // cout << ciag[i];
        
    
}

    string wynik;

    for (int i = 0; i < size; i++) {
        wynik += to_string(ciag[i]) + " ";
        // cout << ciag[i];
    
}

    return wynik;

}

void f5(int size) {
    big_read(size);
    long long int max = big_tab_int[0];

    for (int i = 1; i < size; i++) {
        if (max < big_tab_int[i]) {
            max = big_tab_int[i];
        
}
    
}

    long long int *pierwsze = new long long int[max + 1];

    pierwsze[0] = 0, pierwsze[1] = 0;

    for (int i = 2; i < max + 1; i++) {
        pierwsze[i] = 1;
    
}

    for (int i = 2; i < max + 1; i++) {
        if (pierwsze[i]) {
            int j = i + i;
            for (j; j < max + 1; j += i) {
                pierwsze[j] = 0;
            
}
        
}
    
}

    for (int i = 0; i < size; i++) {
        if (big_tab_int[i] < 2) {
            cout << false << " ";
        
} else if (pierwsze[big_tab_int[i]]) {
            cout << true << " ";
        
} else {
            cout << false << " ";
        
}
    
}

    delete [] pierwsze;
}

int f6(int *ciag, int size) {
    int punkty_n = size/2;

    struct punkt {
        int cord_x;
        int cord_y;
    
};

    punkt *punkty = new punkt[punkty_n];
    int j = 0;
    
    for (int i = 0; i < size - 1; i += 2) {
        punkty[j] = {ciag[i], ciag[i + 1]
};
        // cout << punkty[j].cord_x << " " << punkty[j].cord_y << endl; 
        j++;
    
}

    long double arrea = 0.0;

    j = punkty_n - 1;
    for (int i = 0; i < punkty_n; i++) {
        arrea += (punkty[j].cord_x + punkty[i].cord_x) * (punkty[j].cord_y - punkty[i].cord_y);
        j = i;
    
}

    arrea = abs(arrea)/2;

    return arrea;
}


void f7() {
    double a, b, c, d;

    cin >> a >> b >> c >> d;

    // cout << b;

    if (a == 0) {
        double delta = sqrt(c*c - 4 * b * d);
        // cout << delta;

        if (delta == 0) {
            double x = - c / (2 * b);
            cout << floor(x);
        
} else {
            double x_1 = (-c - delta)/(2 * b);
            double x_2 = (-c + delta)/(2 * b);

            if (x_1 < x_2) {
                cout << floor(x_1) << " " << floor(x_2);
            
} else {
                cout << floor(x_2) << " " << floor(x_1);
            
}
        
}

    
}

    cout << endl;
}


long long int f8(long long int number) {

    long long int result;

    result = (number * (number + 1) * (number + 2) * (3*number + 5))/12;

    return result;
}

void f9(int size) {

    read_unsigned(size);

    for (int i = 0; i < size; i ++) {
        int counter = 0;
        unsigned long long int number = tab_unint[i];
    
        while (number > 0) {
            counter += number % 2;
            number >>= 1;
        
}

        cout << counter << " ";
    
}
}

int main(){
int subprogram, n;

while(cin >> subprogram >> n){
switch(subprogram){
case 0:
        read(n);
        f0(tab_int, n, 0);
        break;
case 1:
        read(n);
        f1(tab_int, n);
        break;
case 2:
        read(n);
        cout << floor(f2(tab_int, 0, 2, n)) << endl;
        break;
case 3:
        read(n);
        cout << f3(tab_int, n) << endl;
        break;
case 4:
        read(n);
        cout << f4(tab_int, n) << endl;
        break;
case 5:
        f5(n);
        break;
case 6:
        read(n);
        cout << f6(tab_int, n) << endl;
        break;
case 7:
        f7();
        break;
case 8:
        long long liczba_n;
        cin >> liczba_n;
        cout << f8(liczba_n) << endl;
        break;
case 9:
        f9(n);
        break;
default:
        cout << "No answer yet!\n";
}
};
return 0;
}