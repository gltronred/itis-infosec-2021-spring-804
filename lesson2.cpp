#include <cstdio>
#include <cstdint>
#include <cstring>

const int N=10001;

uint8_t dec(char c) {
  if ('0' <= c && c <= '9') return c-'0';
  if ('a' <= c && c <= 'f') return c-'a'+10;
  // error!
  return 0;
}

void hex_to_bin(char* s, uint8_t* b) {
  int n = strlen(s);
  for (int i=0, j=0; i<n; i+=2, j++) {
    b[j] = dec(s[i])*16 + dec(s[i+1]);
  }
}

void bin_to_hex(int n, uint8_t* b, char* s) {

}

int main() {
  char* s = new char[N];
  scanf("%s",s);

  int n = strlen(s);
  int m = n/2;
  uint8_t* b = new uint8_t[m];

  hex_to_bin(s,b);

  for (int i=0; i<m; i++)
    printf("%02x",b[i]);
    // printf("%d ",b[i]);
  printf("\n");

  char* t = new char[2*m+1];
  bin_to_hex(m,b,t);

  printf("%s\n",t);

  return 0;
}
