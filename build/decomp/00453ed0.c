// OoT3D decomp @ 00453ed0  name=FUN_00453ed0  size=68

bool FUN_00453ed0(int param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;

  iVar1 = FUN_002e1ef0();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(DAT_00453f14 + param_1) * 4 + 0x10a0);
    *(undefined2 *)(puVar2 + 4) = param_2;
    *puVar2 = *puVar2 | 0x4000;
  }
  return iVar1 != 0;
}
