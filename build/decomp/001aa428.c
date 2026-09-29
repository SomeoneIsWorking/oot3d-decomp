// OoT3D decomp @ 001aa428  name=FUN_001aa428  size=324

void FUN_001aa428(int param_1,int param_2)

{
  FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0x1c0));
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 0:
    FUN_00350f34(param_1,param_1 + 0x318,param_1 + 0x31c,param_1 + 800,param_1 + 0x324,
                 param_1 + 0x328,param_1 + 0x32c,param_1 + 0x330,param_1 + 0x334,param_1 + 0x338,
                 param_1 + 0x33c,param_1 + 0x340,param_1 + 0x344,param_1 + 0x348,param_1 + 0x34c,
                 param_1 + 0x350,param_1 + 0x354,param_1 + 0x358,0);
    break;
  case 1:
    FUN_00350f34(param_1,param_1 + 0x2f8,param_1 + 0x2fc,param_1 + 0x300,param_1 + 0x304,
                 param_1 + 0x308,param_1 + 0x30c,0);
    return;
  case 2:
    FUN_00350f34(param_1,param_1 + 0x314,param_1 + 0x310,0);
    return;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    FUN_00350f34(param_1,param_1 + 0x318,param_1 + 0x31c,param_1 + 0x35c,param_1 + 0x360,0);
    return;
  case 0xc:
    FUN_00350f34(param_1,param_1 + 0x364,0);
    return;
  case 0xd:
    FUN_00350f34(param_1,param_1 + 0x368,0);
    return;
  }
  return;
}
