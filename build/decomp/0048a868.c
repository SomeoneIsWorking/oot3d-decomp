// OoT3D decomp @ 0048a868  name=FUN_0048a868  size=120

void FUN_0048a868(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = (undefined4 *)FUN_002c304c();
  *puVar1 = DAT_0048a8e0;
  iVar2 = FUN_00494410(puVar1 + 0x3d);
  *(undefined4 *)(iVar2 + 0xfc) = param_2;
  puVar1 = (undefined4 *)FUN_002c2ff8(iVar2 + 0x10c);
  *puVar1 = DAT_0048a8e4;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xc] = 0xffffffff;
  puVar1[9] = 0;
  puVar1[0xd] = 0;
  iVar2 = FUN_00350820(puVar1 + 0xe,DAT_0048a8e8,8,4);
  iVar2 = FUN_002c2fb4(iVar2 + 0x20);
  *(undefined1 *)(iVar2 + 0x262) = 0;
  return;
}
