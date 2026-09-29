// OoT3D decomp @ 002c2fb4  name=FUN_002c2fb4  size=60

void FUN_002c2fb4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;

  *param_1 = DAT_002c2ff0;
  param_1[1] = 0;
  param_1[2] = 0;
  piVar2 = (int *)FUN_002d342c(param_1 + 3);
  iVar1 = DAT_002c2ff4;
  piVar2[-3] = DAT_002c2ff4;
  *piVar2 = iVar1 + 0x20;
  *(undefined1 *)(piVar2 + 0x94) = 0;
  *(undefined1 *)((int)piVar2 + 0x251) = 1;
  return;
}
