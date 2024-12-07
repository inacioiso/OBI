#include <iostream>
#define MAX 500
using namespace std;

int main() {
  int m,n,p, cont=0;
  int arr[MAX][MAX];
  
  cin >> m >> n;

  for(int i =0; i < m; i++) {
    for(int j=0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  cin >> p;

  for (int i=0; i < p; i++) {
      int a,b;
      cin >> a >> b;

      if (arr[a][b] > 0){
        arr[a][b]--;
        cont++;
    }
  }

  cout << cont;
  
}