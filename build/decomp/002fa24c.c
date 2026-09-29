// OoT3D decomp @ 002fa24c  name=FUN_002fa24c  size=88

bool FUN_002fa24c(int param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;

  *(char *)(param_1 + 0x22) = (char)param_2;
  iVar1 = DAT_0044a9e0;
  iVar2 = FUN_002e1ef0();
  if (iVar2 != 0) {
    puVar3 = *(uint **)(iVar1 + (uint)*(ushort *)(DAT_00453e70 + iVar1) * 4 + 0x10a0);
    *(undefined2 *)((int)puVar3 + 0x1a) = param_2;
    *puVar3 = *puVar3 | 0x10000000;
  }
  return iVar2 != 0;
}
