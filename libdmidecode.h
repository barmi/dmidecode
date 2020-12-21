//
// Created by skshin on 2020/12/04.
//

#ifndef LIBDMIDECODE_H_
#define LIBDMIDECODE_H_

#define DMI_NO_ERROR                    0
#define DMI_ERROR_NOT_PRESENT           101
#define DMI_ERROR_NOT_SETTABLE          102
#define DMI_ERROR_EFI_NO_SMBIOS         103
#define DMI_ERROR_EFI_MEM_CHUNK_NULL    104
#define DMI_ERROR_MEM_CHUNK_NULL        105

#define DMI_ERROR_INVALID_OPT_STRING    254
#define DMI_ERROR_COMPILER_COMPATIBLE   255

char* dmidecode_get_baseboard_serial_number(void);
int   dmidecode_get_last_error(void);

#endif //LIBDMIDECODE_H_
