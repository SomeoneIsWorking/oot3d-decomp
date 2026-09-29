// OoT3D decomp @ 002e1f00  name=FUN_002e1f00  size=76

undefined4 FUN_002e1f00(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;

  iVar1 = FUN_002e1ef0();
  uVar3 = 0;
  if (iVar1 != 0) {
    if (0x7fff < param_2) {
      param_2 = DAT_002e1f4c;
    }
    puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(DAT_002e1f50 + param_1) * 4 + 0x10a0);
    *(short *)(puVar2 + 7) = (short)param_2;
    *puVar2 = *puVar2 | 0x20000000;
    uVar3 = 1;
  }
  return uVar3;
}
