// OoT3D decomp @ 0020d6b4  name=FUN_0020d6b4  size=196

undefined4
FUN_0020d6b4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 unaff_r4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;

  fVar2 = DAT_0020d78c;
  fVar8 = DAT_0020d784;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  *param_3 = *param_4;
  param_3[1] = uVar4;
  param_3[2] = uVar5;
  uVar4 = param_4[4];
  uVar5 = param_4[5];
  param_3[3] = param_4[3];
  param_3[4] = uVar4;
  param_3[5] = uVar5;
  uVar4 = DAT_0020d778;
  uVar5 = param_4[7];
  uVar6 = param_4[8];
  param_3[6] = param_4[6];
  param_3[7] = uVar5;
  param_3[8] = uVar6;
  param_3[10] = uVar4;
  param_3[9] = DAT_0020d77c;
  fVar1 = DAT_0020d788;
  iVar3 = *DAT_0020d780;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_3 + 0x18) = (short)(int)(fVar8 / fVar7 + DAT_0020d788);
  *(undefined2 *)(param_3 + 0x12) = *(undefined2 *)((int)param_4 + 0x26);
  *(undefined2 *)((int)param_3 + 0x4a) = *(undefined2 *)(param_4 + 9);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)((int)param_3 + 0x46) = (short)(int)(fVar2 / fVar8 + fVar1);
  *(undefined2 *)(param_3 + 0x11) = unaff_r4;
  FUN_0034ea48(param_3[0x19],DAT_0020d790);
  return 1;
}
