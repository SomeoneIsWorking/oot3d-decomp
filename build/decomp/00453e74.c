// OoT3D decomp @ 00453e74  name=FUN_00453e74  size=88

undefined4 FUN_00453e74(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;

  iVar1 = FUN_002e1ef0();
  if ((iVar1 != 0) && (param_2 < 2)) {
    puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(DAT_00453ecc + param_1) * 4 + 0x10a0);
    *(short *)((int)puVar2 + 0x1e) = (short)param_2;
    *puVar2 = *puVar2 | 0x40000000;
    return 1;
  }
  return 0;
}
