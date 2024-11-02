# define UINT16_MAX  65535
#define OPC(i) ((i)>>12)
#define NOPS 16

typedef void (*op_ex_f)(uint16_t instructions)

uint16_t PC_START = 0x3000; // start location.
uint16_t mem[UINT16_MAX+1] = {0}; // writing zero to all memory locations array. of 16 bit integer.

static inline uint16_t mr(uint16_t address) { return mem[address]; }
static inline void mw(uint16_t address, uint16_t val) { mem [address] = val; }

enum regist { R0 = 0, R1, R2, R3, R4, R5, R6, R7, RPC, RCNT };
uint16_t reg[RCNT] = {0};

