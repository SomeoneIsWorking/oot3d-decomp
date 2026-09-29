// OoT3D decomp @ 002408dc  name=FUN_002408dc  size=356

void FUN_002408dc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  FUN_003510b0(param_1,DAT_00240ac4);
  FUN_003532e8(param_1,3);
  FUN_00372f38(param_1,param_2,param_1 + 0x278,0x19,0,uVar3);
  uVar3 = FUN_0036a924(param_1,param_2,1,0x37);
  *(undefined4 *)(param_1 + 0x274) = uVar3;
  uVar1 = FUN_00363c10(param_2 + 0x3a58,1);
  if (((uVar1 & 0xff) < 0x13) &&
     (iVar2 = param_2 + (uVar1 & 0xff) * 0x80, *(int *)(DAT_00240ac8 + iVar2) != 0)) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  uVar3 = FUN_00372f0c(iVar2 + 0x10,0x22);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x274) + 0xc),uVar3);
  uVar3 = DAT_00240acc;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x274) + 0xc) + 0x10) = 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x274) + 0xc) + 0xc) = uVar3;
  uVar3 = FUN_00353fd4(param_1,param_2,0x12);
  uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  FUN_00353dd0(param_2,param_1 + 0x1c4);
  FUN_00353d24(param_2,param_1 + 0x1c4,param_1,DAT_00240ad0);
  FUN_00353dd0(param_2,param_1 + 0x21c);
  FUN_00353d24(param_2,param_1 + 0x21c,param_1,DAT_00240ad4);
  *(undefined1 *)(param_1 + 0x19b) = 2;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
