// OoT3D decomp @ 00456ed0  name=FUN_00456ed0  size=144

void FUN_00456ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;

  iVar1 = DAT_00456f60;
  iVar2 = *(int *)(DAT_00456f60 + 0x9c);
  puVar3 = (undefined1 *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x20) * 0x1c);
  *puVar3 = 4;
  *(undefined4 *)(puVar3 + 8) = param_1;
  *(undefined4 *)(puVar3 + 0xc) = param_3;
  *(undefined4 *)(puVar3 + 4) = param_2;
  *(undefined2 *)(puVar3 + 0x10) = param_4;
  *(undefined2 *)(puVar3 + 0x12) = param_5;
  *(undefined2 *)(puVar3 + 0x14) = param_6;
  *(undefined2 *)(puVar3 + 0x16) = param_7;
  FUN_0030e038();
  *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
  if (((*(int *)(iVar1 + 0xa0) == iVar2) && (*(char *)(iVar1 + 0x12) != '\0')) &&
     (*(char *)(iVar1 + 0x11) == '\0')) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    FUN_003027dc();
  }
  FUN_0030dfd8();
  return;
}
