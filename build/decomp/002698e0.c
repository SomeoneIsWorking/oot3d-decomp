// OoT3D decomp @ 002698e0  name=FUN_002698e0  size=220

void FUN_002698e0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;

  *(ushort *)(param_1 + 0x978) = *(ushort *)(param_1 + 0x978) | 0x10;
  FUN_0037632c(param_1,param_1 + 0x1a4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  FUN_00376340(DAT_002699c0,DAT_002699c4,DAT_002699c0,param_2,param_1,5);
  if (((*(ushort *)(param_1 + 0x978) & 2) == 0) &&
     (iVar2 = FUN_00370734(param_1 + 0x1fc), iVar2 != 0)) {
    *(ushort *)(param_1 + 0x978) = *(ushort *)(param_1 + 0x978) | 2;
  }
  (**(code **)(param_1 + 0x98c))(param_1,param_2);
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
