// OoT3D decomp @ 0038469c  name=FUN_0038469c  size=396

void FUN_0038469c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_fpscr;

  FUN_00376340(DAT_00384910,DAT_0038490c,DAT_0038490c,param_2,param_1,5);
  iVar4 = FUN_00370734(param_1 + 0x1a4);
  FUN_0031dae4(param_1,param_2);
  uVar1 = DAT_00384918;
  uVar6 = DAT_00384914;
  iVar5 = FUN_0036e5e0(DAT_00384918,DAT_00384914);
  uVar3 = DAT_00384920;
  uVar2 = DAT_0038491c;
  if ((iVar5 == 0) && (iVar5 = FUN_0036e5e0(DAT_00384924,uVar6,param_1 + 0x1a4), iVar5 == 0)) {
    if (iVar4 != 0) {
      uVar6 = FUN_0036ae14(param_1 + 0x1a4,3);
      uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00353020(uVar3,uVar2,uVar6,uVar2,param_1 + 0x1a4,DAT_00384954,2);
      *(undefined4 *)(param_1 + 0x3fc) = 0x10;
    }
    return;
  }
  FUN_0036e5e0(uVar1,uVar3,param_1 + 0x1a4);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
