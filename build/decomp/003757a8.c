// OoT3D decomp @ 003757a8  name=FUN_003757a8  size=196

void FUN_003757a8(undefined4 param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auStack_c [4];

  fVar2 = DAT_00375878;
  fVar7 = DAT_00375870;
  iVar1 = DAT_0037586c;
  fVar3 = *param_2;
  *(short *)(DAT_0037586c + 2) = (short)(int)fVar3;
  fVar4 = param_2[1];
  *(short *)(iVar1 + 4) = (short)(int)fVar4;
  fVar5 = param_2[2];
  *(short *)(iVar1 + 6) = (short)(int)fVar5;
  uVar6 = VectorSignedToFloat((int)(short)(int)fVar3,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(iVar1 + 0x30) = uVar6;
  uVar6 = VectorSignedToFloat((int)(short)(int)fVar4,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(iVar1 + 0x34) = uVar6;
  uVar6 = VectorSignedToFloat((int)(short)(int)fVar5,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(iVar1 + 0x38) = uVar6;
  fVar3 = DAT_00375874;
  fVar4 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(iVar1 + 0x24) = fVar4 * fVar7 * DAT_00375874;
  fVar7 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(iVar1 + 0x28) = fVar7 * fVar2 * fVar3;
  *(char *)(iVar1 + 0x2c) = (char)param_3;
  FUN_00350660(param_1,auStack_c,3,0,1,iVar1);
  return;
}
