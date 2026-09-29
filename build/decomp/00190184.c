// OoT3D decomp @ 00190184  name=FUN_00190184  size=236

void FUN_00190184(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;

  FUN_003510b0(param_1,DAT_00190270);
  *(undefined4 *)(param_1 + 0xa0) = DAT_00190274;
  FUN_00372f38(param_1,param_2,0);
  FUN_0034fe20(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x2c4,3);
  FUN_00372d4c(DAT_00190280,DAT_00190278,param_1 + 0xbc,DAT_0019027c);
  iVar2 = DAT_00190288;
  fVar1 = DAT_00190284;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar1;
  *(undefined1 *)(param_1 + 0xb6) = 0xfe;
  *(undefined1 *)(param_1 + 0xb7) = 8;
  *(undefined2 *)(iVar2 + param_1) = 0xc000;
  FUN_00350eb8(param_2,param_1 + 0x3a0);
  FUN_00350d48(param_2,param_1 + 0x3a0,param_1,DAT_0019028c,param_1 + 0x3c0);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  FUN_003479ec(param_1);
  return;
}
