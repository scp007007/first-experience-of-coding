#include <stdio.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#define CANDIDATE_VOTES 4

int main12121211() {
	uint32_t total_votes = 0;
	uint32_t votes[CANDIDATE_VOTES] = { 0 };
	uint32_t max_votes = 0;
	uint32_t min_votes = 0;

	votes[0] += 4;
	votes[1] += 7;
	votes[2] += 9;
	votes[3] += 19;

	for (uint32_t index = 0; index < CANDIDATE_VOTES; index++)
	{
		total_votes += votes[index];

		if (max_votes < votes[index])
		{
			max_votes = votes[index];
		}

		if (min_votes > votes[index])
		{
			min_votes = votes[index];
		}
	}
	for (uint32_t index = 0; index < CANDIDATE_VOTES; index++)
	{
		printf("候选人%u的票数是%u\n",index + 1,votes[index]);
	}
	printf("候选人的总票数是%" PRIu32 "\n",total_votes);

	printf("\n最高的候选人票数是%" PRIu32 "\n", max_votes);

	printf("最低的候选人票数是%" PRIu32 "\n", min_votes);
}