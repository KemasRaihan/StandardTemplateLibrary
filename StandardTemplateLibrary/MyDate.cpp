#include "MyDate.h"

bool operator<(const MyDate& lhs, const MyDate& rhs)
{// return true if lhs date is older than rhs date
	if (lhs.year > rhs.year) return false;
	else
	{// same year or younger
		if (lhs.month > rhs.month) return false;
		else
		{// same month or younger 
			// lhs is younger
			if (lhs.day > rhs.day) return false;
		}
	}
	// lhs date has same date or is older than rhs date
	return true;

}