// OoT3D decomp @ 0047dc38  name=FUN_0047dc38  size=92

bool FUN_0047dc38(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  uint *puVar2;

  iVar1 = FUN_002e1ef0();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(DAT_0047dc94 + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    *(undefined2 *)(puVar2 + 0xf) = param_3;
    *(undefined2 *)((int)puVar2 + 0x3e) = param_4;
    *puVar2 = *puVar2 | 0x800000;
  }
  return iVar1 != 0;
}
