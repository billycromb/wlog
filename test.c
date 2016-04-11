#include "wlog.h"

int main(int __unused argc, char ** __unused argv) {
  LOG("Logging works");
  DLOG("So does debug logging");
  ELOG("This should go to %s", "stderr");
  EDLOG("So should this but only if DEBUG is defined");
}
