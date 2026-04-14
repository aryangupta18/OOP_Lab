#include<iostream>
using namespace std;

template <class T>
T minimum(T a[], int size){
    // ! also make n the template type to make sure that the element is store without any conversion
    T n=a[0];
    for (int i = 0; i < size; i++)
    {
        if(n>a[i]){
            n = a[i];
        }
    }
    return n;
}
template <class T>
void swap2(T &p, T &q){
    cout<<"BEFORE swapping\n p= "<<p<<" and q= "<<q<<endl;
    T t = p;
    p = q;
    q = t;
    cout<<"AFTER swapping\n p= "<<p<<" and q= "<<q<<endl;
}
template <class T>
void min_max(T a[], int size){
    T mn = a[0];
    T mx = a[0];
    for(int i = 1; i < size; i++) {
        if(a[i] < mn) mn = a[i];
        if(a[i] > mx) mx = a[i];
    }
    cout<<"minimum elem= "<<mn<<" and maximum elem= "<<mx<<endl;
}
template <class T>
T sum(T a[], int n) {
    T s = 0;
    for(int i = 0; i < n; i++)
        s += a[i];
    return s;
}
template <class T>
int search(T a[], int n, T key) {
    for(int i = 0; i < n; i++)
        if(a[i] == key)
            return i;
    return -1;
}

int main(){
    int a[] = {1,2,34,-1,22,73};
    double d[] = {1.34, 1,390, 0.937, -0.367, 8.2, 6.902};
    char c[] = {'z', 'c', 'v', 'a', 'n', 'd'};
    int size = 6;
    cout<<"minimum element in int: "<<minimum(a,size)<<endl;
    cout<<"minimum element in double: "<<minimum(d,size)<<endl;
    cout<<"minimum element in char: "<<minimum(c,size)<<endl;

    int p = 5;
    int q = 90;
    swap2(p,q);

    min_max(a,size);
    min_max(d,size);
    min_max(c,size);

    cout<<"sum of elements: "<<sum(a,size)<<endl;
    cout<<"sum of elements: "<<sum(d,size)<<endl;

    int x = 5;
    // double y = 4.34;
    // char z = 'a';
    int res1 = search(a,size,x);
    // int res2 = search(a,size,y);
    // int res3 = search(a,size,z);
    if(res1 == 1)
    cout<<"found\n";
    else
    cout<<"not found\n";
}