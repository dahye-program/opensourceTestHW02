#pragma once
#include "Triangle.h"

struct Triangle Triangle_area(struct Triangle t) {
	struct Triangle result;
	result.area = t.width*t.height / 2;
	return result;
}