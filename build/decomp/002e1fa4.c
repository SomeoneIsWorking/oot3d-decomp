// OoT3D decomp @ 002e1fa4  name=FUN_002e1fa4  size=104

undefined4 FUN_002e1fa4(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;

  iVar1 = FUN_002e1ef0();
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(DAT_002e200c + param_1) * 4 + 0x10a0);
  *(undefined2 *)((int)puVar2 + param_2 * 2 + 0x24) = param_3;
  if (param_2 == 0) {
    uVar3 = *puVar2 | 0x40;
  }
  else {
    if (param_2 != 1) {
      return 1;
    }
    uVar3 = *puVar2 | 0x80;
  }
  *puVar2 = uVar3;
  return 1;
}
