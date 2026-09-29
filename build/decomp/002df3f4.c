// OoT3D decomp @ 002df3f4  name=FUN_002df3f4  size=184

void FUN_002df3f4(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                 uint param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;

  iVar1 = DAT_002df4ac;
  iVar2 = *(int *)(DAT_002df4ac + 0x9c);
  puVar3 = (undefined1 *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x20) * 0x1c);
  *puVar3 = 3;
  *(undefined4 *)(puVar3 + 4) = param_1;
  *(undefined4 *)(puVar3 + 8) = param_2;
  *(undefined2 *)(puVar3 + 0x10) = param_3;
  *(short *)(puVar3 + 0xc) = (short)*(undefined4 *)(puVar3 + 0x10);
  *(undefined2 *)(puVar3 + 0x12) = param_4;
  *(short *)(puVar3 + 0xe) = (short)((uint)*(undefined4 *)(puVar3 + 0x10) >> 0x10);
  *(uint *)(puVar3 + 0x14) =
       (param_5 & 7) << 3 | *(uint *)(puVar3 + 0x14) & 0xfffff800 | param_5 & 7 | 0x900;
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
