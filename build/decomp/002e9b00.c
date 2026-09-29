// OoT3D decomp @ 002e9b00  name=FUN_002e9b00  size=68

void FUN_002e9b00(int param_1)

{
  undefined4 *puVar1;
  int iVar2;

  iVar2 = DAT_002e9b44;
  puVar1 = (undefined4 *)(DAT_002e9b44 + 0x34);
  if (param_1 != -1) {
    *(uint *)(DAT_002e9b44 + 100) = (uint)*(byte *)(DAT_002e9b48 + param_1);
    FUN_002e112c(*puVar1);
    return;
  }
  if (*(int *)(DAT_002e9b44 + 100) != -1) {
    FUN_002e112c(*puVar1,0x8a);
  }
  *(undefined4 *)(iVar2 + 100) = 0xffffffff;
  return;
}
