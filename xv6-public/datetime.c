#include "user.h"
#include "types.h"
#include "stat.h"
#include "fcntl.h"
#include "date.h"


int main(int argc, char *argv[]) {
  struct rtcdate r;

  if (!datetime(&r)) {
	printf(1, "%d:%d:%d %d-%d-%d\n", r.hour, r.minute, r.second, r.day, r.month, r.year);
  }
  exit();
}