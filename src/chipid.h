#ifndef CHIPID_H
#define CHIPID_H

#include <stdbool.h>

extern char system_id[128];
extern char system_manufacturer[128];
extern char board_id[128];
extern char board_ver[128];
extern char board_manufacturer[128];
extern char board_specific[1024];
extern char ram_specific[1024];
extern char firmware[1024];
// vendor specific data
extern int chip_generation;
extern char chip_id[128];
extern char chip_manufacturer[128];
extern char short_manufacturer[128];
extern char control[128];
extern char sensor_id[128];
extern char sensor_manufacturer[128];
extern int  isp_register;
extern char isp_version[128];
extern char isp_build_number[128];
extern char isp_sequence_number[128];
extern char mpp_info[1024];
extern char nor_chip[128];

bool get_system_id();
int get_isp_version();
int get_mpp_info();

#endif /* CHIPID_H */
