#include <cstdio>
#include <cmath>
using namespace std;

int main(void) {
	int num, a = 0, result, sum=0, min;
	int x1, y1, r1, x2, y2, r2;
	double dist;
	scanf("%d", &num);

	for (a = 0; a < num; a++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		dist = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
		min = abs(r1 - r2);
		if (x1 == x2 && y1 == y2) {
			if (r1 == r2)
				result = -1;
			else
				result = 0;
		}
		else {
			if (dist< r1 + r2 && dist>min)
				result = 2;
			else if (dist == r1 + r2 || dist == min)
				result = 1;
			else if (dist == 0 || dist>sum || dist<min)
				result = 0;
		}
		printf("%d\n", result);
	}
	return 0;
}