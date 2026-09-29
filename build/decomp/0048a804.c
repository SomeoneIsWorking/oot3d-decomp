// OoT3D decomp @ 0048a804  name=FUN_0048a804  size=84

void FUN_0048a804(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = (undefined4 *)FUN_002c304c();
  *puVar1 = DAT_0048a858;
  iVar2 = FUN_00494358(puVar1 + 0x3d);
  *(undefined4 *)(DAT_0048a85c + iVar2 + -0xf4) = param_2;
  iVar2 = FUN_00350820(iVar2 + 0x1fa4,DAT_0048a860,0x10,4);
  *(undefined1 *)(DAT_0048a864 + iVar2 + -0x2098) = 0;
  return;
}
