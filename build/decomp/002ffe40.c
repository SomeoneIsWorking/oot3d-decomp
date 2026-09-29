// OoT3D decomp @ 002ffe40  name=FUN_002ffe40  size=308

void FUN_002ffe40(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;

  puVar2 = (uint *)*DAT_002fff74;
  param_1 = param_1 & ~puVar2[2];
  if ((param_1 & 1) != 0) {
    *puVar2 = *puVar2 | 0x100000;
  }
  if ((param_1 & 2) != 0) {
    *puVar2 = *puVar2 | 0x10000;
  }
  if ((param_1 & 4) != 0) {
    *puVar2 = *puVar2 | 0x1800000;
  }
  if ((param_1 & 8) != 0) {
    *puVar2 = *puVar2 | 0x600000;
  }
  if ((param_1 & 0x10) != 0) {
    *puVar2 = *puVar2 | 0x10000;
  }
  if ((param_1 & 0x20) != 0) {
    *puVar2 = *puVar2 | 0x80000;
  }
  if ((param_1 & 0x40) != 0) {
    puVar1 = puVar2 + 0x43;
    puVar3 = puVar2 + 100;
    *puVar2 = *puVar2 | DAT_002fff78;
    puVar2[0x43] = 0;
    iVar4 = 0x10;
    puVar2[100] = 0;
    do {
      puVar1[1] = 0;
      puVar3[1] = 0;
      puVar1 = puVar1 + 2;
      *puVar1 = 0;
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + 2;
      *puVar3 = 0;
    } while (iVar4 != 0);
  }
  if ((param_1 & 0x80) != 0) {
    *puVar2 = *puVar2 | 0x1c00;
  }
  if ((param_1 & 0x100) != 0) {
    *puVar2 = *puVar2 | 1;
  }
  if ((param_1 & 0x200) != 0) {
    *puVar2 = *puVar2 | 0x80c2;
  }
  if ((param_1 & 0x400) != 0) {
    *puVar2 = *puVar2 | 4;
  }
  if ((param_1 & 0x800) != 0) {
    *puVar2 = *puVar2 | 0x100;
  }
  if ((param_1 & 0x1000) != 0) {
    *puVar2 = *puVar2 | 0x200;
  }
  puVar2[1] = puVar2[1] | param_1;
  return;
}
