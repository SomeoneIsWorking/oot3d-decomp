// OoT3D decomp @ 003076f4  name=FUN_003076f4  size=124

void FUN_003076f4(int param_1)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  uint extraout_r1_00;
  int iVar3;
  bool bVar4;

  FUN_002e68ac(param_1 + 0x2e0);
  FUN_003445a8(param_1 + 0xcc);
  iVar3 = 0;
  uVar2 = extraout_r1;
  do {
    iVar1 = param_1 + iVar3 * 0x10;
    bVar4 = *(int *)(iVar1 + 0x2c) != 0;
    if (bVar4) {
      uVar2 = (uint)*(byte *)(iVar1 + 0x34);
    }
    if (bVar4 && uVar2 != 0) {
      FUN_0034fc68();
      uVar2 = extraout_r1_00;
    }
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined1 *)(iVar1 + 0x34) = 0;
  } while (iVar3 < 5);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}
