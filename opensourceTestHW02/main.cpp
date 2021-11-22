#include<stdio.h>
#include "Triangle.h"

int main(int argc, char* argv[]) {
	struct Triangle t, result;
	t.height = 4;
	t.width = 6;

	result = Triangle_area(t);
	printf("%lf\n", result.area);

	return 0;
}