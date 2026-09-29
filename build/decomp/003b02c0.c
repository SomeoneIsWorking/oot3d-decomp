// OoT3D decomp @ 003b02c0  name=FUN_003b02c0  size=140

void FUN_003b02c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = DAT_003b034c;
  iVar2 = FUN_0036bc98();
  if (iVar2 == 0) {
    *(short *)(DAT_003b0350 + -4000 + param_1) = (short)DAT_003b0350;
    uVar1 = DAT_003b035c;
    if (((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x2150U <=
         DAT_003b0354) && (*(int *)(param_1 + 0x98) < DAT_003b0358)) {
      *(ushort *)(param_1 + 0x704) = *(ushort *)(param_1 + 0x704) | 1;
      FUN_0036bb28(uVar1,param_1,param_2);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x708) = uVar1;
  }
  return;
}
