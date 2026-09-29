// OoT3D decomp @ 002df380  name=FUN_002df380  size=112

void FUN_002df380(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;

  iVar1 = DAT_002df3f0;
  iVar3 = *(int *)(DAT_002df3f0 + 0x9c);
  puVar2 = (undefined1 *)(*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0x20) * 0x1c);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = param_2;
  *(undefined4 *)(puVar2 + 8) = param_1;
  *(undefined4 *)(puVar2 + 0xc) = param_3;
  FUN_0030e038();
  *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
  if (((*(int *)(iVar1 + 0xa0) == iVar3) && (*(char *)(iVar1 + 0x12) != '\0')) &&
     (*(char *)(iVar1 + 0x11) == '\0')) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    FUN_003027dc();
  }
  FUN_0030dfd8();
  return;
}
