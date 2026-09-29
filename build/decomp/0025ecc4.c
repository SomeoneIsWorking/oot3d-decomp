// OoT3D decomp @ 0025ecc4  name=FUN_0025ecc4  size=152

void FUN_0025ecc4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  if (*(code **)(param_1 + 0x1bc) != (code *)0x0) {
    (**(code **)(param_1 + 0x1bc))(param_1,param_2);
  }
  if ((*(byte *)(param_1 + 0x1b8) & 4) == 0) {
    if (((*(byte *)(param_1 + 0x1c3) & 4) == 0) ||
       (iVar1 = *(int *)(param_2 + 0xa54), *(short *)(DAT_0025ed5c + iVar1) != 0x3f))
    goto LAB_0025ed30;
    uVar2 = 3;
  }
  else {
    if ((*(byte *)(param_1 + 0x1c3) & 4) != 0) goto LAB_0025ed30;
    iVar1 = *(int *)(param_2 + 0xa54);
    uVar2 = 0x3f;
  }
  FUN_0033885c(iVar1,uVar2);
LAB_0025ed30:
  iVar1 = DAT_0025ed60;
  *(undefined1 *)(param_1 + 0x1c3) = *(undefined1 *)(param_1 + 0x1b8);
  if (*(char *)(iVar1 + param_2) == '\x05' || *(char *)(iVar1 + param_2) == '\x19') {
    return;
  }
  FUN_00374428(param_1);
  return;
}
