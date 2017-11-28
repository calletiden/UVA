#include <stdio.h>
#include <string.h>

/* struct node {
  struct node *a; // 0
  struct node *b;
  struct node *c;
  struct node *d;
  struct node *e;
  struct node *f;
  struct node *g;
  struct node *h;
  struct node *i;
  struct node *j; // 9
}; */

int get_inversion_cnt(char str[], int len) {
  /* count inversions... */
  int inv = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = i; j < len; j++) {
      if (str[i] > str[j]) {
        /* inversion! */
        inv++;
      }
    }
  }
  return inv;
}

int main() {
  /* create the root of the tree */
  // struct node root = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  /* find out how many datasets there are */
  int M;
  scanf("%d", &M);

  int n, m;
  for (int i = 0; i < M; i++) {
    scanf("%d %d", &n, &m);

    char sequences[m][n + 1];
    int inversions_in_each[m];
    char str[n];
    for (int j = 0; j < m; j++) {
      scanf("%s", str);
      strcpy(sequences[j], str);
      inversions_in_each[j] = get_inversion_cnt(str, n);
    }
  }

  return 0;
}
