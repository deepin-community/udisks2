#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.udisks_daemon_resources"), aligned (8)))
#else
# define SECTION
#endif

#ifdef _MSC_VER
static const SECTION union { const guint8 data[2082]; const double alignment; void * const ptr;}  udisks_daemon_resources_resource_data = { {
  0107, 0126, 0141, 0162, 0151, 0141, 0156, 0164, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0030, 0000, 0000, 0000, 0310, 0000, 0000, 0000, 0000, 0000, 0000, 0050, 0006, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0003, 0000, 0000, 0000, 
  0004, 0000, 0000, 0000, 0005, 0000, 0000, 0000, 0113, 0120, 0220, 0013, 0002, 0000, 0000, 0000, 
  0310, 0000, 0000, 0000, 0004, 0000, 0114, 0000, 0314, 0000, 0000, 0000, 0320, 0000, 0000, 0000, 
  0052, 0215, 0111, 0075, 0004, 0000, 0000, 0000, 0320, 0000, 0000, 0000, 0010, 0000, 0114, 0000, 
  0330, 0000, 0000, 0000, 0334, 0000, 0000, 0000, 0324, 0265, 0002, 0000, 0377, 0377, 0377, 0377, 
  0334, 0000, 0000, 0000, 0001, 0000, 0114, 0000, 0340, 0000, 0000, 0000, 0344, 0000, 0000, 0000, 
  0263, 0024, 0213, 0103, 0001, 0000, 0000, 0000, 0344, 0000, 0000, 0000, 0005, 0000, 0114, 0000, 
  0354, 0000, 0000, 0000, 0360, 0000, 0000, 0000, 0326, 0374, 0147, 0005, 0000, 0000, 0000, 0000, 
  0360, 0000, 0000, 0000, 0014, 0000, 0114, 0000, 0374, 0000, 0000, 0000, 0000, 0001, 0000, 0000, 
  0033, 0315, 0310, 0043, 0003, 0000, 0000, 0000, 0000, 0001, 0000, 0000, 0032, 0000, 0166, 0000, 
  0040, 0001, 0000, 0000, 0041, 0010, 0000, 0000, 0157, 0162, 0147, 0057, 0004, 0000, 0000, 0000, 
  0125, 0104, 0151, 0163, 0153, 0163, 0062, 0057, 0003, 0000, 0000, 0000, 0057, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0144, 0141, 0164, 0141, 0057, 0000, 0000, 0000, 0005, 0000, 0000, 0000, 
  0146, 0162, 0145, 0145, 0144, 0145, 0163, 0153, 0164, 0157, 0160, 0057, 0001, 0000, 0000, 0000, 
  0142, 0165, 0151, 0154, 0164, 0151, 0156, 0137, 0155, 0157, 0165, 0156, 0164, 0137, 0157, 0160, 
  0164, 0151, 0157, 0156, 0163, 0056, 0143, 0157, 0156, 0146, 0000, 0000, 0000, 0000, 0000, 0000, 
  0361, 0006, 0000, 0000, 0000, 0000, 0000, 0000, 0133, 0144, 0145, 0146, 0141, 0165, 0154, 0164, 
  0163, 0135, 0012, 0141, 0154, 0154, 0157, 0167, 0075, 0145, 0170, 0145, 0143, 0054, 0156, 0157, 
  0145, 0170, 0145, 0143, 0054, 0156, 0157, 0144, 0145, 0166, 0054, 0156, 0157, 0163, 0165, 0151, 
  0144, 0054, 0141, 0164, 0151, 0155, 0145, 0054, 0156, 0157, 0141, 0164, 0151, 0155, 0145, 0054, 
  0156, 0157, 0144, 0151, 0162, 0141, 0164, 0151, 0155, 0145, 0054, 0162, 0145, 0154, 0141, 0164, 
  0151, 0155, 0145, 0054, 0163, 0164, 0162, 0151, 0143, 0164, 0141, 0164, 0151, 0155, 0145, 0054, 
  0154, 0141, 0172, 0171, 0164, 0151, 0155, 0145, 0054, 0162, 0157, 0054, 0162, 0167, 0054, 0163, 
  0171, 0156, 0143, 0054, 0144, 0151, 0162, 0163, 0171, 0156, 0143, 0054, 0156, 0157, 0154, 0157, 
  0141, 0144, 0054, 0141, 0143, 0154, 0054, 0156, 0157, 0163, 0171, 0155, 0146, 0157, 0154, 0154, 
  0157, 0167, 0012, 0012, 0166, 0146, 0141, 0164, 0137, 0144, 0145, 0146, 0141, 0165, 0154, 0164, 
  0163, 0075, 0165, 0151, 0144, 0075, 0044, 0125, 0111, 0104, 0054, 0147, 0151, 0144, 0075, 0044, 
  0107, 0111, 0104, 0054, 0163, 0150, 0157, 0162, 0164, 0156, 0141, 0155, 0145, 0075, 0155, 0151, 
  0170, 0145, 0144, 0054, 0165, 0164, 0146, 0070, 0075, 0061, 0054, 0163, 0150, 0157, 0167, 0145, 
  0170, 0145, 0143, 0054, 0146, 0154, 0165, 0163, 0150, 0012, 0166, 0146, 0141, 0164, 0137, 0141, 
  0154, 0154, 0157, 0167, 0075, 0165, 0151, 0144, 0075, 0044, 0125, 0111, 0104, 0054, 0147, 0151, 
  0144, 0075, 0044, 0107, 0111, 0104, 0054, 0146, 0154, 0165, 0163, 0150, 0054, 0165, 0164, 0146, 
  0070, 0054, 0163, 0150, 0157, 0162, 0164, 0156, 0141, 0155, 0145, 0054, 0165, 0155, 0141, 0163, 
  0153, 0054, 0144, 0155, 0141, 0163, 0153, 0054, 0146, 0155, 0141, 0163, 0153, 0054, 0143, 0157, 
  0144, 0145, 0160, 0141, 0147, 0145, 0054, 0151, 0157, 0143, 0150, 0141, 0162, 0163, 0145, 0164, 
  0054, 0165, 0163, 0145, 0146, 0162, 0145, 0145, 0054, 0163, 0150, 0157, 0167, 0145, 0170, 0145, 
  0143, 0012, 0012, 0043, 0040, 0143, 0157, 0155, 0155, 0157, 0156, 0040, 0157, 0160, 0164, 0151, 
  0157, 0156, 0163, 0040, 0146, 0157, 0162, 0040, 0142, 0157, 0164, 0150, 0040, 0164, 0150, 0145, 
  0040, 0156, 0141, 0164, 0151, 0166, 0145, 0040, 0153, 0145, 0162, 0156, 0145, 0154, 0040, 0144, 
  0162, 0151, 0166, 0145, 0162, 0040, 0141, 0156, 0144, 0040, 0145, 0170, 0146, 0141, 0164, 0055, 
  0146, 0165, 0163, 0145, 0012, 0145, 0170, 0146, 0141, 0164, 0137, 0144, 0145, 0146, 0141, 0165, 
  0154, 0164, 0163, 0075, 0165, 0151, 0144, 0075, 0044, 0125, 0111, 0104, 0054, 0147, 0151, 0144, 
  0075, 0044, 0107, 0111, 0104, 0054, 0151, 0157, 0143, 0150, 0141, 0162, 0163, 0145, 0164, 0075, 
  0165, 0164, 0146, 0070, 0054, 0145, 0162, 0162, 0157, 0162, 0163, 0075, 0162, 0145, 0155, 0157, 
  0165, 0156, 0164, 0055, 0162, 0157, 0012, 0145, 0170, 0146, 0141, 0164, 0137, 0141, 0154, 0154, 
  0157, 0167, 0075, 0165, 0151, 0144, 0075, 0044, 0125, 0111, 0104, 0054, 0147, 0151, 0144, 0075, 
  0044, 0107, 0111, 0104, 0054, 0144, 0155, 0141, 0163, 0153, 0054, 0145, 0162, 0162, 0157, 0162, 
  0163, 0054, 0146, 0155, 0141, 0163, 0153, 0054, 0151, 0157, 0143, 0150, 0141, 0162, 0163, 0145, 
  0164, 0054, 0156, 0141, 0155, 0145, 0143, 0141, 0163, 0145, 0054, 0165, 0155, 0141, 0163, 0153, 
  0012, 0012, 0043, 0040, 0156, 0164, 0146, 0163, 0063, 0054, 0040, 0156, 0164, 0146, 0163, 0055, 
  0063, 0147, 0040, 0141, 0156, 0144, 0040, 0164, 0150, 0145, 0040, 0154, 0145, 0147, 0141, 0143, 
  0171, 0040, 0156, 0164, 0146, 0163, 0040, 0153, 0145, 0162, 0156, 0145, 0154, 0040, 0144, 0162, 
  0151, 0166, 0145, 0162, 0040, 0157, 0160, 0164, 0151, 0157, 0156, 0163, 0012, 0156, 0164, 0146, 
  0163, 0137, 0144, 0145, 0146, 0141, 0165, 0154, 0164, 0163, 0075, 0165, 0151, 0144, 0075, 0044, 
  0125, 0111, 0104, 0054, 0147, 0151, 0144, 0075, 0044, 0107, 0111, 0104, 0054, 0167, 0151, 0156, 
  0144, 0157, 0167, 0163, 0137, 0156, 0141, 0155, 0145, 0163, 0012, 0156, 0164, 0146, 0163, 0137, 
  0141, 0154, 0154, 0157, 0167, 0075, 0165, 0151, 0144, 0075, 0044, 0125, 0111, 0104, 0054, 0147, 
  0151, 0144, 0075, 0044, 0107, 0111, 0104, 0054, 0165, 0155, 0141, 0163, 0153, 0054, 0144, 0155, 
  0141, 0163, 0153, 0054, 0146, 0155, 0141, 0163, 0153, 0054, 0154, 0157, 0143, 0141, 0154, 0145, 
  0054, 0156, 0157, 0162, 0145, 0143, 0157, 0166, 0145, 0162, 0054, 0151, 0147, 0156, 0157, 0162, 
  0145, 0137, 0143, 0141, 0163, 0145, 0054, 0167, 0151, 0156, 0144, 0157, 0167, 0163, 0137, 0156, 
  0141, 0155, 0145, 0163, 0054, 0143, 0157, 0155, 0160, 0162, 0145, 0163, 0163, 0151, 0157, 0156, 
  0054, 0156, 0157, 0143, 0157, 0155, 0160, 0162, 0145, 0163, 0163, 0151, 0157, 0156, 0054, 0142, 
  0151, 0147, 0137, 0167, 0162, 0151, 0164, 0145, 0163, 0054, 0156, 0154, 0163, 0054, 0156, 0157, 
  0150, 0151, 0144, 0144, 0145, 0156, 0054, 0163, 0171, 0163, 0137, 0151, 0155, 0155, 0165, 0164, 
  0141, 0142, 0154, 0145, 0054, 0163, 0160, 0141, 0162, 0163, 0145, 0054, 0163, 0150, 0157, 0167, 
  0155, 0145, 0164, 0141, 0054, 0160, 0162, 0145, 0141, 0154, 0154, 0157, 0143, 0012, 0012, 0151, 
  0163, 0157, 0071, 0066, 0066, 0060, 0137, 0144, 0145, 0146, 0141, 0165, 0154, 0164, 0163, 0075, 
  0165, 0151, 0144, 0075, 0044, 0125, 0111, 0104, 0054, 0147, 0151, 0144, 0075, 0044, 0107, 0111, 
  0104, 0054, 0151, 0157, 0143, 0150, 0141, 0162, 0163, 0145, 0164, 0075, 0165, 0164, 0146, 0070, 
  0054, 0155, 0157, 0144, 0145, 0075, 0060, 0064, 0060, 0060, 0054, 0144, 0155, 0157, 0144, 0145, 
  0075, 0060, 0065, 0060, 0060, 0012, 0151, 0163, 0157, 0071, 0066, 0066, 0060, 0137, 0141, 0154, 
  0154, 0157, 0167, 0075, 0165, 0151, 0144, 0075, 0044, 0125, 0111, 0104, 0054, 0147, 0151, 0144, 
  0075, 0044, 0107, 0111, 0104, 0054, 0156, 0157, 0162, 0157, 0143, 0153, 0054, 0156, 0157, 0152, 
  0157, 0154, 0151, 0145, 0164, 0054, 0151, 0157, 0143, 0150, 0141, 0162, 0163, 0145, 0164, 0054, 
  0155, 0157, 0144, 0145, 0054, 0144, 0155, 0157, 0144, 0145, 0012, 0012, 0165, 0144, 0146, 0137, 
  0144, 0145, 0146, 0141, 0165, 0154, 0164, 0163, 0075, 0165, 0151, 0144, 0075, 0044, 0125, 0111, 
  0104, 0054, 0147, 0151, 0144, 0075, 0044, 0107, 0111, 0104, 0054, 0151, 0157, 0143, 0150, 0141, 
  0162, 0163, 0145, 0164, 0075, 0165, 0164, 0146, 0070, 0012, 0165, 0144, 0146, 0137, 0141, 0154, 
  0154, 0157, 0167, 0075, 0165, 0151, 0144, 0075, 0044, 0125, 0111, 0104, 0054, 0147, 0151, 0144, 
  0075, 0044, 0107, 0111, 0104, 0054, 0151, 0157, 0143, 0150, 0141, 0162, 0163, 0145, 0164, 0054, 
  0165, 0164, 0146, 0070, 0054, 0165, 0155, 0141, 0163, 0153, 0054, 0155, 0157, 0144, 0145, 0054, 
  0144, 0155, 0157, 0144, 0145, 0054, 0165, 0156, 0150, 0151, 0144, 0145, 0054, 0165, 0156, 0144, 
  0145, 0154, 0145, 0164, 0145, 0012, 0012, 0150, 0146, 0163, 0160, 0154, 0165, 0163, 0137, 0144, 
  0145, 0146, 0141, 0165, 0154, 0164, 0163, 0075, 0165, 0151, 0144, 0075, 0044, 0125, 0111, 0104, 
  0054, 0147, 0151, 0144, 0075, 0044, 0107, 0111, 0104, 0054, 0156, 0154, 0163, 0075, 0165, 0164, 
  0146, 0070, 0012, 0150, 0146, 0163, 0160, 0154, 0165, 0163, 0137, 0141, 0154, 0154, 0157, 0167, 
  0075, 0165, 0151, 0144, 0075, 0044, 0125, 0111, 0104, 0054, 0147, 0151, 0144, 0075, 0044, 0107, 
  0111, 0104, 0054, 0143, 0162, 0145, 0141, 0164, 0157, 0162, 0054, 0164, 0171, 0160, 0145, 0054, 
  0165, 0155, 0141, 0163, 0153, 0054, 0163, 0145, 0163, 0163, 0151, 0157, 0156, 0054, 0160, 0141, 
  0162, 0164, 0054, 0144, 0145, 0143, 0157, 0155, 0160, 0157, 0163, 0145, 0054, 0156, 0157, 0144, 
  0145, 0143, 0157, 0155, 0160, 0157, 0163, 0145, 0054, 0146, 0157, 0162, 0143, 0145, 0054, 0156, 
  0154, 0163, 0012, 0012, 0142, 0164, 0162, 0146, 0163, 0137, 0141, 0154, 0154, 0157, 0167, 0075, 
  0143, 0157, 0155, 0160, 0162, 0145, 0163, 0163, 0054, 0143, 0157, 0155, 0160, 0162, 0145, 0163, 
  0163, 0055, 0146, 0157, 0162, 0143, 0145, 0054, 0144, 0141, 0164, 0141, 0143, 0157, 0167, 0054, 
  0156, 0157, 0144, 0141, 0164, 0141, 0143, 0157, 0167, 0054, 0144, 0141, 0164, 0141, 0163, 0165, 
  0155, 0054, 0156, 0157, 0144, 0141, 0164, 0141, 0163, 0165, 0155, 0054, 0141, 0165, 0164, 0157, 
  0144, 0145, 0146, 0162, 0141, 0147, 0054, 0156, 0157, 0141, 0165, 0164, 0157, 0144, 0145, 0146, 
  0162, 0141, 0147, 0054, 0144, 0145, 0147, 0162, 0141, 0144, 0145, 0144, 0054, 0144, 0145, 0166, 
  0151, 0143, 0145, 0054, 0144, 0151, 0163, 0143, 0141, 0162, 0144, 0054, 0156, 0157, 0144, 0151, 
  0163, 0143, 0141, 0162, 0144, 0054, 0163, 0165, 0142, 0166, 0157, 0154, 0054, 0163, 0165, 0142, 
  0166, 0157, 0154, 0151, 0144, 0054, 0163, 0160, 0141, 0143, 0145, 0137, 0143, 0141, 0143, 0150, 
  0145, 0012, 0012, 0146, 0062, 0146, 0163, 0137, 0141, 0154, 0154, 0157, 0167, 0075, 0144, 0151, 
  0163, 0143, 0141, 0162, 0144, 0054, 0156, 0157, 0144, 0151, 0163, 0143, 0141, 0162, 0144, 0054, 
  0143, 0157, 0155, 0160, 0162, 0145, 0163, 0163, 0137, 0141, 0154, 0147, 0157, 0162, 0151, 0164, 
  0150, 0155, 0054, 0143, 0157, 0155, 0160, 0162, 0145, 0163, 0163, 0137, 0154, 0157, 0147, 0137, 
  0163, 0151, 0172, 0145, 0054, 0143, 0157, 0155, 0160, 0162, 0145, 0163, 0163, 0137, 0145, 0170, 
  0164, 0145, 0156, 0163, 0151, 0157, 0156, 0054, 0141, 0154, 0154, 0157, 0143, 0137, 0155, 0157, 
  0144, 0145, 0012, 0012, 0170, 0146, 0163, 0137, 0141, 0154, 0154, 0157, 0167, 0075, 0144, 0151, 
  0163, 0143, 0141, 0162, 0144, 0054, 0156, 0157, 0144, 0151, 0163, 0143, 0141, 0162, 0144, 0054, 
  0151, 0156, 0157, 0144, 0145, 0063, 0062, 0054, 0154, 0141, 0162, 0147, 0145, 0151, 0157, 0054, 
  0167, 0163, 0171, 0156, 0143, 0012, 0012, 0162, 0145, 0151, 0163, 0145, 0162, 0146, 0163, 0137, 
  0141, 0154, 0154, 0157, 0167, 0075, 0150, 0141, 0163, 0150, 0145, 0144, 0137, 0162, 0145, 0154, 
  0157, 0143, 0141, 0164, 0151, 0157, 0156, 0054, 0156, 0157, 0137, 0165, 0156, 0150, 0141, 0163, 
  0150, 0145, 0144, 0137, 0162, 0145, 0154, 0157, 0143, 0141, 0164, 0151, 0157, 0156, 0054, 0156, 
  0157, 0142, 0157, 0162, 0144, 0145, 0162, 0054, 0156, 0157, 0164, 0141, 0151, 0154, 0012, 0012, 
  0145, 0170, 0164, 0062, 0137, 0144, 0145, 0146, 0141, 0165, 0154, 0164, 0163, 0075, 0145, 0162, 
  0162, 0157, 0162, 0163, 0075, 0162, 0145, 0155, 0157, 0165, 0156, 0164, 0055, 0162, 0157, 0012, 
  0145, 0170, 0164, 0062, 0137, 0141, 0154, 0154, 0157, 0167, 0075, 0145, 0162, 0162, 0157, 0162, 
  0163, 0075, 0162, 0145, 0155, 0157, 0165, 0156, 0164, 0055, 0162, 0157, 0012, 0012, 0145, 0170, 
  0164, 0063, 0137, 0144, 0145, 0146, 0141, 0165, 0154, 0164, 0163, 0075, 0145, 0162, 0162, 0157, 
  0162, 0163, 0075, 0162, 0145, 0155, 0157, 0165, 0156, 0164, 0055, 0162, 0157, 0012, 0145, 0170, 
  0164, 0063, 0137, 0141, 0154, 0154, 0157, 0167, 0075, 0145, 0162, 0162, 0157, 0162, 0163, 0075, 
  0162, 0145, 0155, 0157, 0165, 0156, 0164, 0055, 0162, 0157, 0012, 0012, 0145, 0170, 0164, 0064, 
  0137, 0144, 0145, 0146, 0141, 0165, 0154, 0164, 0163, 0075, 0145, 0162, 0162, 0157, 0162, 0163, 
  0075, 0162, 0145, 0155, 0157, 0165, 0156, 0164, 0055, 0162, 0157, 0012, 0145, 0170, 0164, 0064, 
  0137, 0141, 0154, 0154, 0157, 0167, 0075, 0145, 0162, 0162, 0157, 0162, 0163, 0075, 0162, 0145, 
  0155, 0157, 0165, 0156, 0164, 0055, 0162, 0157, 0012, 0000, 0000, 0050, 0165, 0165, 0141, 0171, 
  0051
} };
#else /* _MSC_VER */
static const SECTION union { const guint8 data[2082]; const double alignment; void * const ptr;}  udisks_daemon_resources_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\310\000\000\000\000\000\000\050\006\000\000\000"
  "\000\000\000\000\000\000\000\000\001\000\000\000\003\000\000\000"
  "\004\000\000\000\005\000\000\000\113\120\220\013\002\000\000\000"
  "\310\000\000\000\004\000\114\000\314\000\000\000\320\000\000\000"
  "\052\215\111\075\004\000\000\000\320\000\000\000\010\000\114\000"
  "\330\000\000\000\334\000\000\000\324\265\002\000\377\377\377\377"
  "\334\000\000\000\001\000\114\000\340\000\000\000\344\000\000\000"
  "\263\024\213\103\001\000\000\000\344\000\000\000\005\000\114\000"
  "\354\000\000\000\360\000\000\000\326\374\147\005\000\000\000\000"
  "\360\000\000\000\014\000\114\000\374\000\000\000\000\001\000\000"
  "\033\315\310\043\003\000\000\000\000\001\000\000\032\000\166\000"
  "\040\001\000\000\041\010\000\000\157\162\147\057\004\000\000\000"
  "\125\104\151\163\153\163\062\057\003\000\000\000\057\000\000\000"
  "\000\000\000\000\144\141\164\141\057\000\000\000\005\000\000\000"
  "\146\162\145\145\144\145\163\153\164\157\160\057\001\000\000\000"
  "\142\165\151\154\164\151\156\137\155\157\165\156\164\137\157\160"
  "\164\151\157\156\163\056\143\157\156\146\000\000\000\000\000\000"
  "\361\006\000\000\000\000\000\000\133\144\145\146\141\165\154\164"
  "\163\135\012\141\154\154\157\167\075\145\170\145\143\054\156\157"
  "\145\170\145\143\054\156\157\144\145\166\054\156\157\163\165\151"
  "\144\054\141\164\151\155\145\054\156\157\141\164\151\155\145\054"
  "\156\157\144\151\162\141\164\151\155\145\054\162\145\154\141\164"
  "\151\155\145\054\163\164\162\151\143\164\141\164\151\155\145\054"
  "\154\141\172\171\164\151\155\145\054\162\157\054\162\167\054\163"
  "\171\156\143\054\144\151\162\163\171\156\143\054\156\157\154\157"
  "\141\144\054\141\143\154\054\156\157\163\171\155\146\157\154\154"
  "\157\167\012\012\166\146\141\164\137\144\145\146\141\165\154\164"
  "\163\075\165\151\144\075\044\125\111\104\054\147\151\144\075\044"
  "\107\111\104\054\163\150\157\162\164\156\141\155\145\075\155\151"
  "\170\145\144\054\165\164\146\070\075\061\054\163\150\157\167\145"
  "\170\145\143\054\146\154\165\163\150\012\166\146\141\164\137\141"
  "\154\154\157\167\075\165\151\144\075\044\125\111\104\054\147\151"
  "\144\075\044\107\111\104\054\146\154\165\163\150\054\165\164\146"
  "\070\054\163\150\157\162\164\156\141\155\145\054\165\155\141\163"
  "\153\054\144\155\141\163\153\054\146\155\141\163\153\054\143\157"
  "\144\145\160\141\147\145\054\151\157\143\150\141\162\163\145\164"
  "\054\165\163\145\146\162\145\145\054\163\150\157\167\145\170\145"
  "\143\012\012\043\040\143\157\155\155\157\156\040\157\160\164\151"
  "\157\156\163\040\146\157\162\040\142\157\164\150\040\164\150\145"
  "\040\156\141\164\151\166\145\040\153\145\162\156\145\154\040\144"
  "\162\151\166\145\162\040\141\156\144\040\145\170\146\141\164\055"
  "\146\165\163\145\012\145\170\146\141\164\137\144\145\146\141\165"
  "\154\164\163\075\165\151\144\075\044\125\111\104\054\147\151\144"
  "\075\044\107\111\104\054\151\157\143\150\141\162\163\145\164\075"
  "\165\164\146\070\054\145\162\162\157\162\163\075\162\145\155\157"
  "\165\156\164\055\162\157\012\145\170\146\141\164\137\141\154\154"
  "\157\167\075\165\151\144\075\044\125\111\104\054\147\151\144\075"
  "\044\107\111\104\054\144\155\141\163\153\054\145\162\162\157\162"
  "\163\054\146\155\141\163\153\054\151\157\143\150\141\162\163\145"
  "\164\054\156\141\155\145\143\141\163\145\054\165\155\141\163\153"
  "\012\012\043\040\156\164\146\163\063\054\040\156\164\146\163\055"
  "\063\147\040\141\156\144\040\164\150\145\040\154\145\147\141\143"
  "\171\040\156\164\146\163\040\153\145\162\156\145\154\040\144\162"
  "\151\166\145\162\040\157\160\164\151\157\156\163\012\156\164\146"
  "\163\137\144\145\146\141\165\154\164\163\075\165\151\144\075\044"
  "\125\111\104\054\147\151\144\075\044\107\111\104\054\167\151\156"
  "\144\157\167\163\137\156\141\155\145\163\012\156\164\146\163\137"
  "\141\154\154\157\167\075\165\151\144\075\044\125\111\104\054\147"
  "\151\144\075\044\107\111\104\054\165\155\141\163\153\054\144\155"
  "\141\163\153\054\146\155\141\163\153\054\154\157\143\141\154\145"
  "\054\156\157\162\145\143\157\166\145\162\054\151\147\156\157\162"
  "\145\137\143\141\163\145\054\167\151\156\144\157\167\163\137\156"
  "\141\155\145\163\054\143\157\155\160\162\145\163\163\151\157\156"
  "\054\156\157\143\157\155\160\162\145\163\163\151\157\156\054\142"
  "\151\147\137\167\162\151\164\145\163\054\156\154\163\054\156\157"
  "\150\151\144\144\145\156\054\163\171\163\137\151\155\155\165\164"
  "\141\142\154\145\054\163\160\141\162\163\145\054\163\150\157\167"
  "\155\145\164\141\054\160\162\145\141\154\154\157\143\012\012\151"
  "\163\157\071\066\066\060\137\144\145\146\141\165\154\164\163\075"
  "\165\151\144\075\044\125\111\104\054\147\151\144\075\044\107\111"
  "\104\054\151\157\143\150\141\162\163\145\164\075\165\164\146\070"
  "\054\155\157\144\145\075\060\064\060\060\054\144\155\157\144\145"
  "\075\060\065\060\060\012\151\163\157\071\066\066\060\137\141\154"
  "\154\157\167\075\165\151\144\075\044\125\111\104\054\147\151\144"
  "\075\044\107\111\104\054\156\157\162\157\143\153\054\156\157\152"
  "\157\154\151\145\164\054\151\157\143\150\141\162\163\145\164\054"
  "\155\157\144\145\054\144\155\157\144\145\012\012\165\144\146\137"
  "\144\145\146\141\165\154\164\163\075\165\151\144\075\044\125\111"
  "\104\054\147\151\144\075\044\107\111\104\054\151\157\143\150\141"
  "\162\163\145\164\075\165\164\146\070\012\165\144\146\137\141\154"
  "\154\157\167\075\165\151\144\075\044\125\111\104\054\147\151\144"
  "\075\044\107\111\104\054\151\157\143\150\141\162\163\145\164\054"
  "\165\164\146\070\054\165\155\141\163\153\054\155\157\144\145\054"
  "\144\155\157\144\145\054\165\156\150\151\144\145\054\165\156\144"
  "\145\154\145\164\145\012\012\150\146\163\160\154\165\163\137\144"
  "\145\146\141\165\154\164\163\075\165\151\144\075\044\125\111\104"
  "\054\147\151\144\075\044\107\111\104\054\156\154\163\075\165\164"
  "\146\070\012\150\146\163\160\154\165\163\137\141\154\154\157\167"
  "\075\165\151\144\075\044\125\111\104\054\147\151\144\075\044\107"
  "\111\104\054\143\162\145\141\164\157\162\054\164\171\160\145\054"
  "\165\155\141\163\153\054\163\145\163\163\151\157\156\054\160\141"
  "\162\164\054\144\145\143\157\155\160\157\163\145\054\156\157\144"
  "\145\143\157\155\160\157\163\145\054\146\157\162\143\145\054\156"
  "\154\163\012\012\142\164\162\146\163\137\141\154\154\157\167\075"
  "\143\157\155\160\162\145\163\163\054\143\157\155\160\162\145\163"
  "\163\055\146\157\162\143\145\054\144\141\164\141\143\157\167\054"
  "\156\157\144\141\164\141\143\157\167\054\144\141\164\141\163\165"
  "\155\054\156\157\144\141\164\141\163\165\155\054\141\165\164\157"
  "\144\145\146\162\141\147\054\156\157\141\165\164\157\144\145\146"
  "\162\141\147\054\144\145\147\162\141\144\145\144\054\144\145\166"
  "\151\143\145\054\144\151\163\143\141\162\144\054\156\157\144\151"
  "\163\143\141\162\144\054\163\165\142\166\157\154\054\163\165\142"
  "\166\157\154\151\144\054\163\160\141\143\145\137\143\141\143\150"
  "\145\012\012\146\062\146\163\137\141\154\154\157\167\075\144\151"
  "\163\143\141\162\144\054\156\157\144\151\163\143\141\162\144\054"
  "\143\157\155\160\162\145\163\163\137\141\154\147\157\162\151\164"
  "\150\155\054\143\157\155\160\162\145\163\163\137\154\157\147\137"
  "\163\151\172\145\054\143\157\155\160\162\145\163\163\137\145\170"
  "\164\145\156\163\151\157\156\054\141\154\154\157\143\137\155\157"
  "\144\145\012\012\170\146\163\137\141\154\154\157\167\075\144\151"
  "\163\143\141\162\144\054\156\157\144\151\163\143\141\162\144\054"
  "\151\156\157\144\145\063\062\054\154\141\162\147\145\151\157\054"
  "\167\163\171\156\143\012\012\162\145\151\163\145\162\146\163\137"
  "\141\154\154\157\167\075\150\141\163\150\145\144\137\162\145\154"
  "\157\143\141\164\151\157\156\054\156\157\137\165\156\150\141\163"
  "\150\145\144\137\162\145\154\157\143\141\164\151\157\156\054\156"
  "\157\142\157\162\144\145\162\054\156\157\164\141\151\154\012\012"
  "\145\170\164\062\137\144\145\146\141\165\154\164\163\075\145\162"
  "\162\157\162\163\075\162\145\155\157\165\156\164\055\162\157\012"
  "\145\170\164\062\137\141\154\154\157\167\075\145\162\162\157\162"
  "\163\075\162\145\155\157\165\156\164\055\162\157\012\012\145\170"
  "\164\063\137\144\145\146\141\165\154\164\163\075\145\162\162\157"
  "\162\163\075\162\145\155\157\165\156\164\055\162\157\012\145\170"
  "\164\063\137\141\154\154\157\167\075\145\162\162\157\162\163\075"
  "\162\145\155\157\165\156\164\055\162\157\012\012\145\170\164\064"
  "\137\144\145\146\141\165\154\164\163\075\145\162\162\157\162\163"
  "\075\162\145\155\157\165\156\164\055\162\157\012\145\170\164\064"
  "\137\141\154\154\157\167\075\145\162\162\157\162\163\075\162\145"
  "\155\157\165\156\164\055\162\157\012\000\000\050\165\165\141\171"
  "\051" };
#endif /* !_MSC_VER */

static GStaticResource static_resource = { udisks_daemon_resources_resource_data.data, sizeof (udisks_daemon_resources_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *udisks_daemon_resources_get_resource (void);
GResource *udisks_daemon_resources_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}