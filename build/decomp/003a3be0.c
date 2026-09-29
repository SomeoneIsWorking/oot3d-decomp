// OoT3D decomp @ 003a3be0  name=FUN_003a3be0  size=372

void FUN_003a3be0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  bool bVar7;
  uint in_fpscr;

  *(undefined4 *)(param_1 + 100) = DAT_003a3d54;
  FUN_00376864();
  puVar6 = (ushort *)0x0;
  iVar3 = FUN_0037571c(param_2);
  uVar2 = DAT_003a3d5c;
  uVar1 = DAT_003a3d58;
  if (iVar3 != 0) {
    puVar6 = *(ushort **)(param_2 + 0x22e8);
  }
  if (puVar6 != (ushort *)0x0) {
    uVar4 = (uint)*puVar6;
    bVar7 = uVar4 == 4;
    if (bVar7) {
      uVar4 = *(uint *)(param_1 + 0xbd8);
    }
    if (bVar7 && uVar4 == 0) {
      uVar5 = FUN_0036ae14(param_1 + 0x1a4,8);
      VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00353020(uVar2,param_1 + 0x1a4,DAT_003a3d64,2);
      *(undefined4 *)(param_1 + 0xbd8) = 1;
    }
  }
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  uVar5 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_003a3d68;
  FUN_00376340(DAT_003a3d74,DAT_003a3d70,DAT_003a3d6c,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar5;
  if (*(int *)(param_1 + 0xbd8) == 0) {
    iVar3 = FUN_0036e5e0(DAT_003a3d78,uVar2,param_1 + 0x1a4);
    if ((iVar3 != 0) || (iVar3 = FUN_0036e5e0(DAT_003a3d7c,uVar2,param_1 + 0x1a4), iVar3 != 0)) {
      FUN_0037547c(0x1000004,param_1 + 0x28,4,DAT_003a3d84,DAT_003a3d84,DAT_003a3d80);
    }
  }
  if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
    *(undefined4 *)(param_1 + 0xbbc) = 0xd;
    *(undefined4 *)(param_1 + 0xbc4) = uVar1;
    *(undefined4 *)(param_1 + 100) = uVar1;
  }
  return;
}
