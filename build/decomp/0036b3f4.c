// OoT3D decomp @ 0036b3f4  name=FUN_0036b3f4  size=204

undefined4 FUN_0036b3f4(int param_1,undefined4 param_2,short *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_002bbbcc(param_4,param_1,param_2,param_3);
  if (iVar2 != 0) {
    sVar1 = FUN_00368fec(*(undefined4 *)(param_4 + *(short *)(DAT_0036b4cc + param_4) * 4 + 0xa54));
    *param_3 = sVar1 + *param_3;
    return 1;
  }
  *param_3 = *(short *)(param_1 + 0xbe);
  iVar2 = *(int *)(param_1 + 0x16f8);
  if (iVar2 == 0) {
    if ((*(uint *)(param_1 + 0x1710) & DAT_0036b4c4) == 0) {
      return 0;
    }
    sVar1 = *(short *)(DAT_0036b4c8 + param_1);
  }
  else {
    if (*(char *)(DAT_0036b4c0 + param_4) == '\0') {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x1714) & 0x40) != 0) {
      return 0;
    }
    sVar1 = FUN_003758b0(*(float *)(iVar2 + 0x44) - *(float *)(param_1 + 0x30),
                         *(float *)(iVar2 + 0x3c) - *(float *)(param_1 + 0x28));
  }
  *param_3 = sVar1;
  return 0;
}

