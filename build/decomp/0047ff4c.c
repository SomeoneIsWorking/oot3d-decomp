// OoT3D decomp @ 0047ff4c  name=FUN_0047ff4c  size=300

void FUN_0047ff4c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  iVar1 = 0;
  do {
    iVar4 = param_1 + 0x2e0 + iVar1 * 4;
    iVar1 = iVar1 + 1;
    iVar3 = *(int *)(iVar4 + 0x418);
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 0x6c) = 0;
    }
    iVar3 = *(int *)(iVar4 + 0x818);
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 0x6c) = 0;
    }
  } while (iVar1 < 0x100);
  *(undefined1 *)(*(int *)(param_1 + 0xafc) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x6fc) + 0x6c) = 1;
  FUN_00307840(param_1 + 0x2e0,0,1,0x11,1);
  uVar2 = DAT_0048007c;
  iVar1 = DAT_00480078;
  *(undefined4 *)(DAT_00480078 + param_1) = DAT_0048007c;
  *(undefined4 *)(iVar1 + 0x1c + param_1) = uVar2;
  *(undefined4 *)(iVar1 + 0x38 + param_1) = uVar2;
  *(undefined4 *)(iVar1 + 0x54 + param_1) = 0xffffffff;
  FUN_002fd84c(1,0);
  uVar2 = FUN_0030f0ec();
  FUN_0030f0c0(uVar2,DAT_00480080);
  FUN_002d3d44(DAT_00480084);
  uVar2 = FUN_0030f0ec();
  FUN_0030f0c0(uVar2,DAT_00480088);
  FUN_002d3d44(DAT_0048008c);
  iVar1 = 0;
  do {
    FUN_00307840(param_1 + 0x2e0,1,iVar1 + 0x41,iVar1 + 9,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}
