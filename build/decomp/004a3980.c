// OoT3D decomp @ 004a3980  name=FUN_004a3980  size=84

bool FUN_004a3980(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  uint *puVar2;

  iVar1 = FUN_002e1ef0();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(DAT_004a39d4 + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    *(undefined2 *)((int)puVar2 + 0xa2) = param_3;
    *puVar2 = *puVar2 | 0x10000000;
  }
  return iVar1 != 0;
}
