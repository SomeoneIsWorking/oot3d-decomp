// OoT3D decomp @ 003a28f8  name=FUN_003a28f8  size=272

void FUN_003a28f8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  undefined4 uVar6;

  uVar6 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_003a2a08;
  FUN_00376340(DAT_003a2a14,DAT_003a2a10,DAT_003a2a0c,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar6;
  iVar3 = FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  uVar2 = DAT_003a2a20;
  uVar1 = DAT_003a2a1c;
  uVar6 = DAT_003a2a18;
  iVar5 = *(int *)(param_1 + 0xbd0);
  if ((iVar5 == 0) || (*(int *)(iVar5 + 0x4cc) != 4)) {
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x4cc) == 5)) {
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,0x15);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00353020(uVar2,uVar1,uVar4,uVar6,param_1 + 0x1a4,DAT_003a2a28,2);
      *(undefined4 *)(param_1 + 0xbd4) = *(undefined4 *)(param_1 + 0x98);
      *(undefined4 *)(param_1 + 0xbbc) = 0x15;
    }
  }
  else if (iVar3 != 0) {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,0x14);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(uVar2,uVar1,uVar4,uVar6,param_1 + 0x1a4,DAT_003a2a24,0);
    return;
  }
  return;
}
