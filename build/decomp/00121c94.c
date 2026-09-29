// OoT3D decomp @ 00121c94  name=FUN_00121c94  size=236

void FUN_00121c94(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;

  uVar1 = DAT_00121df4;
  if (((*DAT_00121df0 & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_00121df0), puVar2 = DAT_00121df8, iVar3 != 0)) {
    *DAT_00121df8 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  iVar3 = FUN_003705a0(uVar1,DAT_00121dfc,param_1 + 0x54);
  if (iVar3 != 0) {
    FUN_0036e980(param_2,param_1,7);
    FUN_00374428(param_1);
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x36) + -0x8000));
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
