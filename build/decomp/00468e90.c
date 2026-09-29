// OoT3D decomp @ 00468e90  name=FUN_00468e90  size=232

void FUN_00468e90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = 0;
  iVar4 = param_1 + 0x918;
  do {
    iVar3 = iVar4 + iVar1 * 4;
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
  *(undefined1 *)(*(int *)(param_1 + 0xd34) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0xd38) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x1134) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1118) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x1518) + 0x6c) = 1;
  iVar1 = *(int *)(param_1 + 1000);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 1000) = iVar1;
  FUN_002fd71c(param_1,iVar1,0,param_4,param_4);
  FUN_00307840(iVar4,0,0xfa,0xf,1);
  FUN_00307840(iVar4,1,0xfa,0xf,1);
  FUN_0036ec40(0,DAT_00468f78);
  *(undefined4 *)(param_1 + 0x3ec) = 0xffffffff;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}
