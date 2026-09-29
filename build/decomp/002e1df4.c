// OoT3D decomp @ 002e1df4  name=FUN_002e1df4  size=68

bool FUN_002e1df4(int param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;

  iVar1 = FUN_002e1ef0();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(DAT_002e1e38 + param_1) * 4 + 0x10a0);
    *(undefined2 *)((int)puVar2 + 0x16) = param_2;
    *puVar2 = *puVar2 | 0x4000000;
  }
  return iVar1 != 0;
}
