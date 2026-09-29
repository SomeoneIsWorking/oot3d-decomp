// OoT3D decomp @ 003470b8  name=FUN_003470b8  size=92

void FUN_003470b8(int param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;

  psVar3 = DAT_00347114;
  iVar4 = *(int *)(param_1 + 0x20ac);
  sVar1 = (short)(int)*(float *)(iVar4 + 0x28);
  *DAT_00347114 = sVar1;
  sVar2 = (short)(int)*(float *)(iVar4 + 0x30);
  psVar3[1] = sVar2;
  iVar4 = DAT_00347118 - *(short *)(iVar4 + 0xbe);
  psVar3[2] = (short)((int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x16)) >> 10);
  FUN_002d04a8((int)sVar1,(int)sVar2);
  return;
}
