// OoT3D decomp @ 0030a784  name=FUN_0030a784  size=168

undefined4 FUN_0030a784(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;

  uVar2 = FUN_00304350(*(undefined4 *)(param_1 + 4),param_3);
  piVar3 = (int *)FUN_0048bbb4(uVar2,param_4);
  iVar4 = FUN_0048bba8(*(undefined4 *)(param_1 + 4));
  iVar4 = iVar4 + *piVar3 * 8;
  *param_2 = *(undefined4 *)(iVar4 + 4);
  param_2[1] = *(undefined4 *)(iVar4 + 8);
  uVar2 = FUN_0048bca0(piVar3);
  param_2[5] = uVar2;
  uVar2 = FUN_0048bbe8(piVar3);
  FUN_00304380(param_2 + 2,uVar2);
  uVar1 = FUN_0048bc28(piVar3);
  *(undefined1 *)((int)param_2 + 0xd) = uVar1;
  uVar1 = FUN_0048bc78(piVar3);
  *(undefined1 *)((int)param_2 + 0xe) = uVar1;
  uVar1 = FUN_0048bc50(piVar3);
  *(undefined1 *)((int)param_2 + 0xf) = uVar1;
  uVar1 = FUN_0048bd10(piVar3);
  *(undefined1 *)(param_2 + 4) = uVar1;
  return 1;
}
