// OoT3D decomp @ 0025b240  name=FUN_0025b240  size=288

undefined4 FUN_0025b240(float *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  undefined1 auStack_24 [20];

  iVar2 = DAT_0025b360;
  psVar3 = *(short **)
            (*(int *)(DAT_0025b360 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar5 = (float)VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar5 * DAT_0025b364;
  sVar1 = psVar3[2];
  *(short *)(param_1 + 1) = sVar1;
  *(int *)(iVar2 + -0x140) = (int)sVar1;
  uVar4 = (uint)*(ushort *)((int)param_1 + 0x1a6);
  if (uVar4 == 0) {
    uVar4 = 1;
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
  }
  fVar5 = param_1[0x3c];
  if (fVar5 != 0.0) {
    uVar4 = *(uint *)((int)fVar5 + 0x13c);
  }
  if (fVar5 != 0.0 && uVar4 != 0) {
    FUN_00338790(auStack_24);
    FUN_00371738(param_1 + 0x3d,auStack_24,0x12);
    FUN_00367df4(*param_1,*param_1,DAT_0025b368,param_1 + 0x3d,param_1 + 0x20);
    param_1[0x4b] = param_1[0x20] - param_1[0x37];
    param_1[0x4c] = param_1[0x21] - param_1[0x38];
    param_1[0x4d] = param_1[0x22] - param_1[0x39];
    fVar5 = (float)FUN_00338a90(param_1 + 0x20,param_1 + 0x23);
    param_1[0x49] = fVar5;
    param_1[0x48] = DAT_0025b36c;
    if (0 < *(short *)(param_1 + 0x6a)) {
      *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + -1;
    }
  }
  else {
    param_1[0x3c] = 0.0;
  }
  return 1;
}
