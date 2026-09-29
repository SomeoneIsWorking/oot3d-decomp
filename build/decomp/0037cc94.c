// OoT3D decomp @ 0037cc94  name=FUN_0037cc94  size=160

void FUN_0037cc94(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;

  FUN_00376864();
  iVar2 = *DAT_0037cd34;
  *(short *)(param_1 + 0x1c4) = *(short *)(param_1 + 0x1c4) + *(short *)(iVar2 + 0x1478);
  *(short *)(param_1 + 0x1c6) = *(short *)(param_1 + 0x1c6) + *(short *)(iVar2 + 0x147a) + 1000;
  *(short *)(param_1 + 0x1c8) = *(short *)(param_1 + 0x1c8) + *(short *)(iVar2 + 0x147c) + 3000;
  FUN_0031ef28(param_1,param_2);
  if ((*(int *)(param_1 + 0x1d0) == 0) || (*(char *)(*(int *)(param_1 + 0x1d0) + 0xa10) != '\x02'))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  FUN_00374428(param_1);
  return;
}
