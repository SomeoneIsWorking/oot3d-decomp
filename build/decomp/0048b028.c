// OoT3D decomp @ 0048b028  name=FUN_0048b028  size=100

void FUN_0048b028(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = (undefined4 *)FUN_002c304c();
  *puVar1 = DAT_0048b08c;
  iVar2 = FUN_004942f8(puVar1 + 0x3d);
  *(undefined4 *)(iVar2 + 0xa0) = param_2;
  puVar1 = (undefined4 *)FUN_002c2ff8(iVar2 + 0xa4);
  *puVar1 = DAT_0048b090;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xc] = 0xffffffff;
  puVar1[9] = 0;
  puVar1[0xd] = 0;
  iVar2 = FUN_002c2fb4(puVar1 + 0xf);
  *(undefined1 *)(iVar2 + 0x276) = 0;
  return;
}
