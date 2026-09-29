// OoT3D decomp @ 004276ec  name=FUN_004276ec  size=196

void FUN_004276ec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = 0;
  do {
    iVar3 = param_1 + 0x2e0 + iVar1 * 4;
    iVar1 = iVar1 + 1;
    iVar2 = *(int *)(iVar3 + 0x418);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x6c) = 0;
    }
    iVar2 = *(int *)(iVar3 + 0x818);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x6c) = 0;
    }
  } while (iVar1 < 0x100);
  *(undefined1 *)(*(int *)(param_1 + 0xafc) + 0x6c) = 0;
  FUN_00444cb8();
  iVar2 = DAT_004277b4;
  iVar1 = DAT_004277b0;
  iVar4 = 0;
  *(int *)(DAT_004277b0 + param_1) = DAT_004277b4;
  iVar3 = iVar2 + 7;
  *(int *)(iVar1 + 0x1c + param_1) = iVar3;
  *(int *)(iVar1 + 0x38 + param_1) = iVar3;
  *(int *)(iVar1 + 0x54 + param_1) = iVar2;
  do {
    FUN_00307840(param_1 + 0x2e0,1,iVar4 + 0x41,iVar4 + 9,1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  *(undefined1 *)(param_1 + 8) = 0xc;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}
