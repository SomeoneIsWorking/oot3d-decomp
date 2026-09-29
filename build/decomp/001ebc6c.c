// OoT3D decomp @ 001ebc6c  name=FUN_001ebc6c  size=144

void FUN_001ebc6c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;

  iVar1 = DAT_001ebd00;
  FUN_0034b3dc(DAT_001ebcfc,param_2,0x95,param_1,DAT_001ebd00,param_4);
  FUN_0048961c((uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf4) + iVar1);
  FUN_0036055c(param_1,param_2,DAT_001ebd04,0);
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x20000000;
  *(short *)(param_2 + 0x2280) = (short)(int)*(float *)(param_2 + 0x2c);
  FUN_00371808(param_1,DAT_001ebd08,0x28,param_2,0);
  return;
}
