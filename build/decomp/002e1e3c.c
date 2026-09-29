// OoT3D decomp @ 002e1e3c  name=FUN_002e1e3c  size=104

undefined4 FUN_002e1e3c(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;

  iVar1 = FUN_002e1ef0();
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(DAT_002e1ea4 + param_1) * 4 + 0x10a0);
  *(undefined2 *)((int)puVar2 + param_2 * 2 + 0x28) = param_3;
  if (param_2 == 0) {
    uVar3 = *puVar2 | 0x100;
  }
  else {
    if (param_2 != 1) {
      return 1;
    }
    uVar3 = *puVar2 | 0x200;
  }
  *puVar2 = uVar3;
  return 1;
}
