// OoT3D decomp @ 002d7c28  name=FUN_002d7c28  size=1432

void FUN_002d7c28(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;

  sVar2 = (short)param_2;
  sVar1 = 0xff - sVar2;
  iVar3 = (int)sVar1;
  switch(*(short *)(DAT_002d81f8 + 0x78)) {
  case 1:
  case 2:
  case 8:
    if (*(short *)(DAT_002d81f8 + 0x78) == 8) {
      if (*(short *)(param_1 + 0x2e26) != 0xff) {
        *(short *)(param_1 + 0x2e26) = sVar1;
      }
    }
    else if (*(ushort *)(param_1 + 0x2e26) != 0 &&
             param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e26)) {
      *(short *)(param_1 + 0x2e26) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e24) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e24)) {
      *(short *)(param_1 + 0x2e24) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e28) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e28)) {
      *(short *)(param_1 + 0x2e28) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2a) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2a)) {
      *(short *)(param_1 + 0x2e2a) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2c) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2c)) {
      *(short *)(param_1 + 0x2e2c) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2e) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2e)) {
      *(short *)(param_1 + 0x2e2e) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e30) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e30)) {
      *(short *)(param_1 + 0x2e30) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e32) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e32)) {
      *(short *)(param_1 + 0x2e32) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e34) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e34)) {
      *(short *)(param_1 + 0x2e34) = sVar2;
    }
    break;
  case 3:
    if (*(ushort *)(param_1 + 0x2e24) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e24)) {
      *(short *)(param_1 + 0x2e24) = sVar2;
    }
    FUN_002d041c(param_1,param_2,iVar3);
    if (*(ushort *)(param_1 + 0x2e32) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e32)) {
      *(short *)(param_1 + 0x2e32) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e34) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e34)) {
      *(short *)(param_1 + 0x2e34) = sVar2;
    }
    if (*(short *)(param_1 + 0x2e30) != 0xff) {
      *(short *)(param_1 + 0x2e30) = sVar1;
    }
    break;
  case 4:
    if (*(ushort *)(param_1 + 0x2e26) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e26)) {
      *(short *)(param_1 + 0x2e26) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e24) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e24)) {
      *(short *)(param_1 + 0x2e24) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e28) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e28)) {
      *(short *)(param_1 + 0x2e28) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2a) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2a)) {
      *(short *)(param_1 + 0x2e2a) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2c) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2c)) {
      *(short *)(param_1 + 0x2e2c) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2e) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2e)) {
      *(short *)(param_1 + 0x2e2e) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e30) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e30)) {
      *(short *)(param_1 + 0x2e30) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e32) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e32)) {
      *(short *)(param_1 + 0x2e32) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e34) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e34)) {
      *(short *)(param_1 + 0x2e34) = sVar2;
    }
    if (*(short *)(param_1 + 0x2e24) != 0xff) {
      *(short *)(param_1 + 0x2e24) = sVar1;
    }
    break;
  case 5:
    FUN_002d041c(param_1,param_2,iVar3);
    if (*(ushort *)(param_1 + 0x2e34) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e34)) {
      *(short *)(param_1 + 0x2e34) = sVar2;
    }
    if (*(short *)(param_1 + 0x2e24) != 0xff) {
      *(short *)(param_1 + 0x2e24) = sVar1;
    }
    if (*(short *)(param_1 + 0x2e30) != 0xff) {
      *(short *)(param_1 + 0x2e30) = sVar1;
    }
    if (*(short *)(param_1 + 0x2e32) == 0xff) break;
    goto LAB_002d81cc;
  case 6:
    FUN_002d041c(param_1,param_2,iVar3);
    if (*(short *)(param_1 + 0x2e24) != 0xff) {
      *(short *)(param_1 + 0x2e24) = sVar1;
    }
    if (*(short *)(param_1 + 0x2e30) != 0xff) {
      *(short *)(param_1 + 0x2e30) = sVar1;
    }
    if (*(short *)(param_1 + 0x2e32) != 0xff) {
      *(short *)(param_1 + 0x2e32) = sVar1;
    }
    if ((int)*(short *)(param_1 + 0x104) - 0x51U < 0x14) {
      if (0xa9 < *(ushort *)(param_1 + 0x2e34)) {
        *(undefined2 *)(param_1 + 0x2e34) = 0xaa;
        break;
      }
    }
    else if (*(ushort *)(param_1 + 0x2e34) == 0xff) break;
    *(short *)(param_1 + 0x2e34) = sVar1;
    break;
  case 7:
    if (*(ushort *)(param_1 + 0x2e34) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e34)) {
      *(short *)(param_1 + 0x2e34) = sVar2;
    }
    FUN_002d7974(param_1,iVar3);
    if (*(short *)(param_1 + 0x2e30) != 0xff) {
      *(short *)(param_1 + 0x2e30) = sVar1;
    }
    if (*(short *)(param_1 + 0x2e32) != 0xff) {
      *(short *)(param_1 + 0x2e32) = sVar1;
    }
    break;
  case 9:
    if (*(ushort *)(param_1 + 0x2e26) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e26)) {
      *(short *)(param_1 + 0x2e26) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e24) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e24)) {
      *(short *)(param_1 + 0x2e24) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e28) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e28)) {
      *(short *)(param_1 + 0x2e28) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2a) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2a)) {
      *(short *)(param_1 + 0x2e2a) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2c) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2c)) {
      *(short *)(param_1 + 0x2e2c) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2e) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2e)) {
      *(short *)(param_1 + 0x2e2e) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e34) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e34)) {
      *(short *)(param_1 + 0x2e34) = sVar2;
    }
    if (*(short *)(param_1 + 0x2e30) != 0xff) {
      *(short *)(param_1 + 0x2e30) = sVar1;
    }
    sVar2 = *(short *)(param_1 + 0x2e32);
    goto joined_r0x002d81c8;
  case 10:
    if (*(ushort *)(param_1 + 0x2e24) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e24)) {
      *(short *)(param_1 + 0x2e24) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e28) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e28)) {
      *(short *)(param_1 + 0x2e28) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2a) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2a)) {
      *(short *)(param_1 + 0x2e2a) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2c) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2c)) {
      *(short *)(param_1 + 0x2e2c) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2e) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2e)) {
      *(short *)(param_1 + 0x2e2e) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e30) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e30)) {
      *(short *)(param_1 + 0x2e30) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e32) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e32)) {
      *(short *)(param_1 + 0x2e32) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e34) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e34)) {
      *(short *)(param_1 + 0x2e34) = sVar2;
    }
    if (*(short *)(param_1 + 0x2e26) != 0xff) {
      *(short *)(param_1 + 0x2e26) = sVar1;
    }
    break;
  case 0xb:
    if (*(ushort *)(param_1 + 0x2e26) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e26)) {
      *(short *)(param_1 + 0x2e26) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e24) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e24)) {
      *(short *)(param_1 + 0x2e24) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e28) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e28)) {
      *(short *)(param_1 + 0x2e28) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2a) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2a)) {
      *(short *)(param_1 + 0x2e2a) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2c) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2c)) {
      *(short *)(param_1 + 0x2e2c) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2e) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2e)) {
      *(short *)(param_1 + 0x2e2e) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e34) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e34)) {
      *(short *)(param_1 + 0x2e34) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e32) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e32)) {
      *(short *)(param_1 + 0x2e32) = sVar2;
    }
    if (*(short *)(param_1 + 0x2e30) != 0xff) {
      *(short *)(param_1 + 0x2e30) = sVar1;
    }
    break;
  case 0xc:
    if (*(short *)(param_1 + 0x2e24) != 0xff) {
      *(short *)(param_1 + 0x2e24) = sVar1;
    }
    if (*(short *)(param_1 + 0x2e26) != 0xff) {
      *(short *)(param_1 + 0x2e26) = sVar1;
    }
    if (*(short *)(param_1 + 0x2e34) != 0xff) {
      *(short *)(param_1 + 0x2e34) = sVar1;
    }
    if (*(ushort *)(param_1 + 0x2e28) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e28)) {
      *(short *)(param_1 + 0x2e28) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2a) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2a)) {
      *(short *)(param_1 + 0x2e2a) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2c) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2c)) {
      *(short *)(param_1 + 0x2e2c) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e2e) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e2e)) {
      *(short *)(param_1 + 0x2e2e) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e32) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e32)) {
      *(short *)(param_1 + 0x2e32) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e30) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e30)) {
      *(short *)(param_1 + 0x2e30) = sVar2;
    }
    break;
  case 0xd:
    FUN_002d041c(param_1,param_2,iVar3);
    if (*(ushort *)(param_1 + 0x2e34) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e34)) {
      *(short *)(param_1 + 0x2e34) = sVar2;
    }
    if (*(ushort *)(param_1 + 0x2e24) != 0 && param_2 < (int)(uint)*(ushort *)(param_1 + 0x2e24)) {
      *(short *)(param_1 + 0x2e24) = sVar2;
    }
    if (*(short *)(param_1 + 0x2e30) != 0xff) {
      *(short *)(param_1 + 0x2e30) = sVar1;
    }
    sVar2 = *(short *)(param_1 + 0x2e32);
joined_r0x002d81c8:
    if (sVar2 != 0xff) {
LAB_002d81cc:
      *(short *)(param_1 + 0x2e32) = sVar1;
    }
  }
  if ((*(char *)(DAT_002d81fc + param_1) == '\x01') && (0xfe < *(ushort *)(param_1 + 0x2e34))) {
    *(undefined2 *)(param_1 + 0x2e34) = 0xff;
  }
  return;
}
