#include "MyDate.h"

bool operator<(const MyDate& lhs, const MyDate& rhs)
{// return true if lhs date is older than rhs date
	if (lhs.year > rhs.year) return false;
	else
	{// same year
		if (lhs.month > rhs.month) return false;
		else
		{// same month
			if (lhs.day > rhs.day) return false;
		}
	}
	// lhs date has same date or is older than rhs date
	return true;

}