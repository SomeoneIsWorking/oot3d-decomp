// OoT3D decomp @ 002ded74  name=FUN_002ded74  size=208

void FUN_002ded74(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint extraout_r1;
  uint uVar3;
  uint extraout_r1_00;
  int iVar4;
  bool bVar5;

  uVar1 = FUN_00313b60();
  FUN_002db984(uVar1,0x1e);
  FUN_00343280(param_1 + 0x1440,0x800);
  uVar1 = DAT_002dee44;
  *(undefined4 *)(param_1 + 0x1c40) = DAT_002dee44;
  *(undefined4 *)(param_1 + 0x1c44) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_002e68ac(param_1 + 0x600);
  iVar4 = 0;
  do {
    FUN_003445a8(param_1 + iVar4 * 0x54 + 0x130);
    iVar2 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(param_1 + iVar2 + 0x5c8) = 0;
  } while (iVar4 < 0xe);
  iVar4 = 0;
  uVar3 = extraout_r1;
  do {
    iVar2 = param_1 + iVar4 * 0x10;
    bVar5 = *(int *)(iVar2 + 0x14) != 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(iVar2 + 0x1c);
    }
    if (bVar5 && uVar3 != 0) {
      FUN_0034fc68();
      uVar3 = extraout_r1_00;
    }
    *(undefined4 *)(iVar2 + 0x14) = 0;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined1 *)(iVar2 + 0x1c) = 0;
  } while (iVar4 < 0x12);
  FUN_00343280(param_1 + 0x1440,0x800);
  *(undefined4 *)(param_1 + 0x1c40) = uVar1;
  *(undefined4 *)(param_1 + 0x1c44) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}
