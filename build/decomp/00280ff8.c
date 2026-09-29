// OoT3D decomp @ 00280ff8  name=FUN_00280ff8  size=296

void FUN_00280ff8(int param_1,int param_2)

{
  short sVar1;
  int iVar2;

  FUN_0037632c(param_1,param_1 + 0x1a4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  FUN_00376340(DAT_00281124,DAT_00281128,DAT_00281124,param_2,param_1,5);
  if (((*(ushort *)(param_1 + 0xa48) & 2) == 0) &&
     (iVar2 = FUN_00370734(param_1 + 0x1fc), iVar2 != 0)) {
    *(ushort *)(param_1 + 0xa48) = *(ushort *)(param_1 + 0xa48) | 2;
  }
  (**(code **)(param_1 + 0xa4c))(param_1,param_2);
  iVar2 = FUN_0036bc98(param_1,param_2);
  if (iVar2 == 0) {
    *(short *)(DAT_00281138 + param_1) = (short)DAT_00281134;
    if (*(int *)(param_1 + 0x98) < DAT_0028113c) {
      FUN_0036bb28(DAT_00281140,param_1,param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa4c) = DAT_0028112c;
    *(undefined4 *)(param_1 + 0x13c) = DAT_00281130;
  }
  FUN_00376864(param_1);
  if ((*(short *)(param_1 + 0xa3a) != 0) &&
     (sVar1 = *(short *)(param_1 + 0xa3a) + -1, *(short *)(param_1 + 0xa3a) = sVar1, sVar1 != 0)) {
    *(short *)(param_1 + 0xa38) = *(short *)(param_1 + 0xa3a);
    if (2 < *(short *)(param_1 + 0xa3a)) {
      *(undefined2 *)(param_1 + 0xa38) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x3c);
}
