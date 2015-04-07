/* Automatically generated nanopb header */
/* Generated by nanopb-0.2.9.1 at Tue Apr  7 19:57:28 2015. */

#ifndef _PB_STORAGE_PB_H_
#define _PB_STORAGE_PB_H_
#include <pb.h>

#include "types.pb.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
/* Struct definitions */
typedef struct _Storage {
    uint32_t version;
    bool has_node;
    HDNodeType node;
    bool has_mnemonic;
    char mnemonic[241];
    bool has_passphrase_protection;
    bool passphrase_protection;
    bool has_pin_failed_attempts;
    uint32_t pin_failed_attempts;
    bool has_pin;
    char pin[10];
    bool has_language;
    char language[17];
    bool has_label;
    char label[33];
    bool has_imported;
    bool imported;
} Storage;

/* Default values for struct fields */

/* Initializer values for message structs */
#define Storage_init_default                     {0, false, HDNodeType_init_default, false, "", false, 0, false, 0, false, "", false, "", false, "", false, 0}
#define Storage_init_zero                        {0, false, HDNodeType_init_zero, false, "", false, 0, false, 0, false, "", false, "", false, "", false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define Storage_version_tag                      1
#define Storage_node_tag                         2
#define Storage_mnemonic_tag                     3
#define Storage_passphrase_protection_tag        4
#define Storage_pin_failed_attempts_tag          5
#define Storage_pin_tag                          6
#define Storage_language_tag                     7
#define Storage_label_tag                        8
#define Storage_imported_tag                     9

/* Struct field encoding specification for nanopb */
extern const pb_field_t Storage_fields[10];

/* Maximum encoded size of messages (where known) */
#define Storage_size                             (332 + HDNodeType_size)

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
