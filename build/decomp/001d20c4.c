// OoT3D decomp @ 001d20c4  name=FUN_001d20c4  size=236

void FUN_001d20c4(int param_1,undefined4 param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;

  *(undefined2 *)(param_1 + 0x1b0) = 0x19;
  *(undefined2 *)(param_1 + 0x1b2) = 0x28;
  *(undefined2 *)(param_1 + 0x1b4) = 5;
  *(undefined2 *)(param_1 + 0x1b6) = 0x1e;
  fVar6 = DAT_001d21b8;
  piVar1 = DAT_001d21b0;
  iVar3 = *DAT_001d21b0;
  *(int *)(param_1 + 0x1c8) = *(short *)(iVar3 + 0x148c) + 0xff;
  *(int *)(param_1 + 0x1cc) = *(short *)(iVar3 + 0x1494) + 0xff;
  fVar2 = DAT_001d21b4;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x147a),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x1d0) = fVar5 + DAT_001d21b4;
  iVar3 = *piVar1;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x147c),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x1d4) = fVar5 + fVar6;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x147e),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x1d8) = fVar6 + fVar2;
  uVar4 = FUN_00372f38(param_1,param_2,param_1 + 0x1dc,1,0);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(*(int *)(param_1 + 0x1dc) + 0xc);
  uVar4 = FUN_00372f0c(uVar4,1);
  FUN_00372d94(*(undefined4 *)(param_1 + 0x1e0),uVar4);
  *(undefined1 *)(*(int *)(param_1 + 0x1e0) + 0x10) = 1;
  return;
}
