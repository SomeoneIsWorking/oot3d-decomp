// OoT3D decomp @ 002699c8  name=FUN_002699c8  size=204

void FUN_002699c8(int param_1,int param_2)

{
  short sVar1;
  int iVar2;

  FUN_0037632c(param_1,param_1 + 0x1a4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  FUN_00376340(DAT_00269a98,DAT_00269a9c,DAT_00269a98,param_2,param_1,5);
  if (((*(ushort *)(param_1 + 0xa48) & 2) == 0) &&
     (iVar2 = FUN_00370734(param_1 + 0x1fc), iVar2 != 0)) {
    *(ushort *)(param_1 + 0xa48) = *(ushort *)(param_1 + 0xa48) | 2;
  }
  (**(code **)(param_1 + 0xa4c))(param_1,param_2);
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
