// OoT3D decomp @ 00280e40  name=FUN_00280e40  size=396

void FUN_00280e40(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_0037632c(param_1,param_1 + 0x1a4,param_3,param_4,param_4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  FUN_00376340(DAT_00280fd0,DAT_00280fd4,DAT_00280fd0,param_2,param_1,5);
  if (((*(ushort *)(param_1 + 0x978) & 2) == 0) &&
     (iVar3 = FUN_00370734(param_1 + 0x1fc), iVar3 != 0)) {
    *(ushort *)(param_1 + 0x978) = *(ushort *)(param_1 + 0x978) | 2;
  }
  (**(code **)(param_1 + 0x98c))(param_1,param_2);
  iVar3 = FUN_0036bc98(param_1,param_2);
  if (iVar3 == 0) {
    *(short *)(DAT_00280fe8 + param_1) = (short)DAT_00280fe4;
    uVar2 = DAT_00280ff0;
    if (*(int *)(param_1 + 0x98) < DAT_00280fec) {
      FUN_00375a18(param_1 + 0x96c,0,6,DAT_00280ff0,100);
      FUN_00375a18(param_1 + 0x96e,0,6,uVar2,100);
      FUN_0036bb28(DAT_00280ff4,param_1,param_2);
    }
  }
  else {
    if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = DAT_00280fd8;
      FUN_00369674(param_1,8);
    }
    *(undefined4 *)(param_1 + 0x98c) = DAT_00280fdc;
    *(undefined4 *)(param_1 + 0x13c) = DAT_00280fe0;
  }
  FUN_00376864(param_1);
  if ((*(short *)(param_1 + 0x96a) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x96a) + -1, *(short *)(param_1 + 0x96a) = sVar1, sVar1 != 0)) {
    *(short *)(param_1 + 0x968) = *(short *)(param_1 + 0x96a);
    if (2 < *(short *)(param_1 + 0x96a)) {
      *(undefined2 *)(param_1 + 0x968) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x3c);
}
