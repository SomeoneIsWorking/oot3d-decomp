// OoT3D decomp @ 003426b0  name=FUN_003426b0  size=96

void FUN_003426b0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  short *psVar2;

  uVar1 = DAT_00342710;
  for (psVar2 = *(short **)(param_1 + 0x20d4); psVar2 != (short *)0x0;
      psVar2 = *(short **)(psVar2 + 0x98)) {
    if (*psVar2 == 0x66) goto LAB_003426e0;
  }
  psVar2 = (short *)0x0;
LAB_003426e0:
  *(int *)(psVar2 + 0x138) = param_3;
  *(undefined4 *)(psVar2 + 0x13e) = uVar1;
  *(undefined4 *)(psVar2 + 0x13c) = uVar1;
  *(undefined4 *)(psVar2 + 0x13a) = uVar1;
  *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 0x2000;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xffffdfff;
  return;
}
