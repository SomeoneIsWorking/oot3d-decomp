// OoT3D decomp @ 002e1ea8  name=FUN_002e1ea8  size=68

bool FUN_002e1ea8(int param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;

  iVar1 = FUN_002e1ef0();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(DAT_002e1eec + param_1) * 4 + 0x10a0);
    *(undefined2 *)(puVar2 + 6) = param_2;
    *puVar2 = *puVar2 | 0x8000000;
  }
  return iVar1 != 0;
}
