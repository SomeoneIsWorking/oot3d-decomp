// OoT3D decomp @ 002e1f54  name=FUN_002e1f54  size=76

undefined4 FUN_002e1f54(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;

  iVar1 = FUN_002e1ef0();
  uVar3 = 0;
  if (iVar1 != 0) {
    if (0x8000 < param_2) {
      param_2 = 0x8000;
    }
    puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(DAT_002e1fa0 + param_1) * 4 + 0x10a0);
    *(short *)((int)puVar2 + 0x22) = (short)param_2;
    *puVar2 = *puVar2 | 0x80000000;
    uVar3 = 1;
  }
  return uVar3;
}
