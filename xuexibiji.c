#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main848484(){
	char grade;
	uint32_t score = 80;

		grade = (score >= 90) ? 'A' :
				(score >= 80) ? 'B' :
				(score >= 70) ? 'C' : 'D';

		printf("你的分数是%" PRIu16 ",你的等级是%c",score,grade);
		return 0;
}