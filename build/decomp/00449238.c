// OoT3D decomp @ 00449238  name=FUN_00449238  size=452

void FUN_00449238(int param_1)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  FUN_00454a1c(param_1 + 0x7fd8);
  puVar2 = UNK_00449404;
  uVar5 = *(uint *)(UNK_004493fc + 0x5b8);
  cVar1 = *(char *)(UNK_004493fc + 0x5bc);
  fStack_24 = (float)VectorUnsignedToFloat(uVar5 >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
  fStack_20 = (float)VectorUnsignedToFloat((uVar5 << 8) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
  fStack_1c = (float)VectorUnsignedToFloat((uVar5 << 0x10) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
  fStack_18 = (float)VectorUnsignedToFloat(uVar5 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
  fStack_24 = fStack_24 * UNK_00449400;
  fStack_20 = fStack_20 * UNK_00449400;
  fStack_1c = fStack_1c * UNK_00449400;
  fStack_18 = fStack_18 * UNK_00449400;
  if (((*UNK_00449404 & 1) == 0) && (iVar4 = FUN_003679b4(UNK_00449404), iVar4 != 0)) {
    FUN_0036788c(UNK_00449408);
  }
  uVar3 = UNK_00449414;
  FUN_003339e8(UNK_00449414,4,&fStack_24,0);
  if (cVar1 == '\0') {
    if ((*puVar2 & 1) != 0) goto LAB_00449368;
    iVar4 = FUN_003679b4(UNK_00449404);
  }
  else {
    fStack_24 = UNK_00449418;
    if (*(float *)(param_1 + 0x7f38) != UNK_00449418) {
      return;
    }
    fStack_1c = UNK_00449418;
    fStack_20 = UNK_00449418;
    fStack_18 = UNK_0044941c;
    if ((*puVar2 & 1) != 0) goto LAB_00449368;
    iVar4 = FUN_003679b4(UNK_00449404);
  }
  if (iVar4 != 0) {
    FUN_0036788c(UNK_00449408);
  }
LAB_00449368:
  FUN_003339e8(uVar3,6,&fStack_24,0);
  return;
}

