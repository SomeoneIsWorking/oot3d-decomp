// OoT3D decomp @ 00422dfc  name=FUN_00422dfc  size=112

undefined4 FUN_00422dfc(void)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = DAT_00422e74;
  iVar1 = DAT_00422e70;
  *(undefined4 *)(DAT_00422e70 + 0x18) = DAT_00422e6c;
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  *(undefined2 *)(iVar1 + 4) = 0xff;
  *(undefined2 *)(iVar1 + 6) = 0xff;
  if ((*(int *)(iVar1 + 8) != 0) && (*(char *)(iVar1 + 1) == '\0')) {
    uVar2 = FUN_002fa7d0(*(int *)(iVar1 + 8),DAT_00422e6c,uVar2,0xff,0xff,DAT_00422e78);
    return uVar2;
  }
  return DAT_00422e7c;
}
