// OoT3D decomp @ 0035b1cc  name=FUN_0035b1cc  size=248

uint FUN_0035b1cc(int param_1,int param_2,float *param_3,float *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;

  if (param_2 == -1) {
    param_2 = (int)*(short *)(DAT_0035b2c4 + param_1);
  }
  iVar6 = *(int *)(param_1 + param_2 * 4 + 0xa54);
  iVar2 = FUN_003521f0(iVar6,1,param_3);
  uVar3 = FUN_003521f0(iVar6,2,param_4);
  uVar4 = FUN_003521f0(iVar6,4,param_5);
  *(float *)(iVar6 + 0x124) =
       SQRT((*param_4 - *param_3) * (*param_4 - *param_3) +
            (param_4[1] - param_3[1]) * (param_4[1] - param_3[1]) +
            (param_4[2] - param_3[2]) * (param_4[2] - param_3[2]));
  uVar1 = DAT_0035b2c8;
  iVar5 = *(int *)(iVar6 + 0xd8);
  if (iVar5 == 0) {
    *(undefined4 *)(iVar6 + 0x134) = DAT_0035b2c8;
    *(undefined4 *)(iVar6 + 0x130) = uVar1;
    *(undefined4 *)(iVar6 + 300) = uVar1;
  }
  else {
    *(float *)(iVar6 + 300) = *param_3 - *(float *)(iVar5 + 0x28);
    *(float *)(iVar6 + 0x130) = param_3[1] - *(float *)(iVar5 + 0x2c);
    *(float *)(iVar6 + 0x134) = param_3[2] - *(float *)(iVar5 + 0x30);
  }
  *(undefined4 *)(iVar6 + 0x148) = DAT_0035b2cc;
  return uVar4 | (uVar3 | iVar2 << 1) << 1;
}
