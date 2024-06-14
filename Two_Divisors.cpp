#include <iostream>
#include <numeric>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int l = lcm(a, b);
        if (a == 1)
        {
            cout << b * b << endl;
        }
        else if (l != a && l != b)
        {
            cout << l << endl;
        }
        else
        cout << min(l*2,a*b) << endl;
    }
    return 0;
}
// #include <iostream>
// #include <vector>
// #include <cmath>

// #define maxn 1e7+10

// int smallestPrime[(int)maxn];

// std::vector<int> primes;

// void primeFactorization(){

//     primes.push_back(2);

//     smallestPrime[0] = smallestPrime[1] = 1;
//     for ( int i = 2 ; i < maxn ; i += 2 )
//         smallestPrime[i] = 2;

//     for ( int i = 3 ; i <  maxn ; i += 2 ) {
//         if ( smallestPrime[i] == 0 ){
//             smallestPrime[i] = i;
//             primes.push_back(i);
//             for ( int j = i ; j*(long long)i <  maxn ; j += 2 ) {
//                 if(smallestPrime[ i*j ] == 0)
//                     smallestPrime[ i*j ] = i;
//             }
//         }
//     }
// }

// int main(){

//     primeFactorization();

//     int n;
//     std::cin>>n;

//     int arr[1000000];
//     for(int i=0;i<n;i++){
//         std::cin>>arr[i];
//     }

//     int d1[1000000];
//     int d2[1000000];

//     for(int i=0;i<n;i++){

//         int tmp = arr[i];
//         int p1 = smallestPrime[tmp];
//         int k1 = 0;
//         while(tmp > 1 && p1 == smallestPrime[tmp])
//             tmp /= smallestPrime[tmp],++k1;

//         d1[i] = pow(p1, k1);
        
//         d2[i] = arr[i]/d1[i];

//         if(d1[i]==1 || d2[i]==1){
//             d1[i]=-1;d2[i]=-1;
//         }

//     }

//     for(int i=0;i<n;i++){
//         std::cout<<d1[i]<<" ";
//     }

//     std::cout<<std::endl;


//     for(int i=0;i<n;i++){
//         std::cout<<d2[i]<<" ";
//     }

//     return 0;
// }