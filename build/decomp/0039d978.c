// OoT3D decomp @ 0039d978  name=FUN_0039d978  size=300

void FUN_0039d978(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  uVar2 = DAT_0039db10;
  iVar6 = *(int *)(DAT_0039db0c + param_2);
  FUN_0036e168(DAT_0039db10,DAT_0039db18,DAT_0039db14,DAT_0039db10,param_1 + 0x6c);
  iVar5 = FUN_00370734(param_1 + 0x1e0);
  iVar4 = DAT_0039db20;
  iVar3 = DAT_0039db1c;
  uVar1 = DAT_0039db1c * 2;
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    if ((((*(ushort *)(param_1 + 0x90) & 8) == 0) ||
        (uVar1 < (uint)(iVar3 + (short)(*(short *)(param_1 + 0x82) - *(short *)(param_1 + 0xbe)))))
       || (iVar4 <= *(int *)(param_1 + 0x98))) {
      iVar5 = FUN_00328e08(param_2,param_1);
      if (iVar5 != 0) {
        return;
      }
      FUN_003b77e4(param_1,param_2);
    }
    else {
      FUN_0031eb78(param_1);
    }
  }
  if (*(char *)(iVar6 + 0x2227) == '\0') {
    return;
  }
  if ((((*(ushort *)(param_1 + 0x90) & 8) != 0) &&
      ((uint)(iVar3 + (short)(*(short *)(param_1 + 0x82) - *(short *)(param_1 + 0xbe))) <= uVar1))
     && (*(int *)(param_1 + 0x98) < iVar4)) {
    FUN_0031eb78(param_1);
    *(undefined1 *)(DAT_0039db2c + param_1) = 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
