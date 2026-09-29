// OoT3D decomp @ 003b77e4  name=FUN_003b77e4  size=356

void FUN_003b77e4(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r3;
  int iVar5;
  bool bVar6;
  uint in_fpscr;
  undefined8 unaff_d8;

  sVar1 = *(short *)(*(int *)(DAT_003b7b20 + param_2) + 0xbe) - *(short *)(param_1 + 0xbe);
  if (sVar1 < 0) {
    sVar1 = -sVar1;
  }
  iVar5 = (int)sVar1;
  iVar3 = FUN_0035f228(param_2,param_1);
  if ((iVar3 != 0) && (DAT_003b7b34 <= iVar5)) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (DAT_003b7b34 <= iVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (iVar5 < 0x3e81) {
    if (32000 < (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 16000U) {
      uVar4 = *(uint *)(param_2 + 0x5bf4);
      bVar6 = (uVar4 & 1) != 0;
      if (bVar6) {
        uVar4 = (uint)*(ushort *)(param_1 + 0x1c);
      }
      if (bVar6 && uVar4 != 3) {
        *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x92);
        FUN_0035f090(param_1);
        return;
      }
      if (DAT_003b7b3c <= (uint)(*(int *)(param_1 + 0x98) + DAT_003b7b28)) {
        uVar2 = FUN_0036ae14(param_1 + 0x1e0,6);
        uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(DAT_0035efd8,DAT_0035efdc,uVar2,DAT_0035efd8,param_1 + 0x264,6,2,extraout_r3,
                     unaff_d8);
        FUN_0036e734(param_1 + 0x1e0,2);
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      iVar3 = FUN_0036f18c(param_1,DAT_003b7b40);
      if ((iVar3 != 0) && (iVar3 = FUN_0035f228(param_2,param_1), iVar3 == 0)) {
        FUN_0035eff0(param_1);
        return;
      }
      return;
    }
    if (*(int *)(param_1 + 0x98) < DAT_003b7b2c) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0(param_1,param_2);
}
