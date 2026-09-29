// OoT3D decomp @ 0047dbe0  name=FUN_0047dbe0  size=84

bool FUN_0047dbe0(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  uint *puVar2;

  iVar1 = FUN_002e1ef0();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(DAT_0047dc34 + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    *(undefined2 *)((int)puVar2 + 0x3a) = param_3;
    *puVar2 = *puVar2 | 0x400000;
  }
  return iVar1 != 0;
}
