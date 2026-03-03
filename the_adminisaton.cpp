#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main()
{
	//manager1 总是可以访问所有权限
	//inter3 需要完成任务数量大于10且需要manager的许可
	//employee2 需要完成任务数量大于5
	uint32_t role = 4;
	uint32_t completed_tasks = 13;

	bool allowance = false;
	bool manager_allowed = true;

	switch (role)
	{
	case 1:
		allowance = true;
		break;
	case 2:
	{
		if (completed_tasks >= 5)
		allowance = true;
		break;
	}
	case 3:
	{
		if (completed_tasks >= 10 && manager_allowed)
		allowance = true;
		break;
	}

	default:
		allowance = false;
		break;

	}
	if (allowance) {
		puts("允许访问");
	}
	else {
		puts("拒绝访问");
	}
}