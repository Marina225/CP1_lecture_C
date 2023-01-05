#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  // Read input
  int n = 3;
int t=0;
  int x[] = {1, 3, 2};
  int v[] = {-100, 2, 3};

  // Initialize result
  int result = 0;

  // Iterate over all pairs of points
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      // Calculate minimum distance between points i and j
      int distance = abs(x[i] - x[j]) - (v[i] - v[j]) * t;
      if (distance > 0) {
        // Points i and j will never meet
        result += distance;
      }
      else {
        // Points i and j will meet at some point in time
        result += 0;
      }
    }
  }

  // Print result
  printf("%d\n", result);

  return 0;
}



/*
int main() {
  // Read input
	int t=1;
  int n = 3;

  int x[] = {1, 3, 2};
  int v[] = {-100, 2, 3};

  // Initialize result
  int result = 0;

  // Iterate over all pairs of points
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      // Calculate minimum distance between points i and j
      int distance = abs(x[i] - x[j]) - (v[i] - v[j]) * t;
      if (distance > 0) {
        // Points i and j will never meet
        result += distance;
      }
      else {
        // Points i and j will meet at some point in time
        result += 0;
      }
    }
  }

  // Print result
  printf("%d\n", result);

  return 0;
}



/*
int main() {
	int t=0;
  // Read input
  int n;
  scanf("%d", &n);

  int x[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &x[i]);
  }

  int v[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  // Initialize result
  int result = 0;

  // Iterate over all pairs of points
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      // Calculate minimum distance between points i and j
      int distance = abs(x[i] - x[j]) - (v[i] - v[j]) * t;
      if (distance > 0) {
        // Points i and j will never meet
        result += distance;
      }
      else {
        // Points i and j will meet at some point in time
        result += 0;
      }
    }
  }

  // Print result
  printf("%d\n", result);

  return 0;
}


/*
int main() {
  // Read input
  int n;
  scanf("%d", &n);

  int x[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &x[i]);
  }

  int v[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
int t=0;
  // Initialize result
  int result = 0;

  // Iterate over all pairs of points
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      // Calculate minimum distance between points i and j
      int distance = abs(x[i] - x[j]) - (v[i] - v[j]) * t;
      if (distance > 0) {
        // Points i and j will never meet
        result += distance;
      }
    }
  }

  // Print result
  printf("%d\n", result);

  return 0;
}


/*
int main()
{
// Read the number of test cases
int t;
scanf("%d", &t);

// Process each test case
while (t--) {
// Read the number of points and the coordinates of the points
int n;
scanf("%d", &n);
int x[n];
for (int i = 0; i < n; i++) {
scanf("%d", &x[i]);
}

// Check if the points can be moved to form a consecutive segment of integers
int min = x[0], max = x[n - 1];
if (max - min + 1 == n) {
  printf("YES\n");
} else {
  printf("NO\n");
}

}

return 0;
}
*/

