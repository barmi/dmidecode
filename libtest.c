//
// Created by skshin on 2020/12/04.
//

#include <stdio.h>
#include "libdmidecode.h"

int test_main(int argc, char * const argv[]);

int main(/*int argc, char * const argv[]*/)
{
  // dmidecode 와 동일
  //test_main(argc, argv);
  char *board_serial = dmidecode_get_baseboard_serial_number();
  int dmi_error = dmidecode_get_last_error();

  printf("board serial : %s\n", board_serial);
  printf("error : %d\n", dmi_error);

  return 0;
}
