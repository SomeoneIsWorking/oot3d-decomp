// OoT3D decomp @ 00367b14  name=FUN_00367b14  size=220

uint FUN_00367b14(int param_1,int param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == -1) {
    param_2 = (int)*(short *)(DAT_00367bf0 + param_1);
  }
  iVar5 = *(int *)(param_1 + param_2 * 4 + 0xa54);
  iVar2 = FUN_003521f0(iVar5,1,param_3);
  uVar3 = FUN_003521f0(iVar5,2,param_4);
  *(float *)(iVar5 + 0x124) =
       SQRT((*param_4 - *param_3) * (*param_4 - *param_3) +
            (param_4[1] - param_3[1]) * (param_4[1] - param_3[1]) +
            (param_4[2] - param_3[2]) * (param_4[2] - param_3[2]));
  uVar1 = DAT_00367bf4;
  iVar4 = *(int *)(iVar5 + 0xd8);
  if (iVar4 == 0) {
    *(undefined4 *)(iVar5 + 0x134) = DAT_00367bf4;
    *(undefined4 *)(iVar5 + 0x130) = uVar1;
    *(undefined4 *)(iVar5 + 300) = uVar1;
  }
  else {
    *(float *)(iVar5 + 300) = *param_3 - *(float *)(iVar4 + 0x28);
    *(float *)(iVar5 + 0x130) = param_3[1] - *(float *)(iVar4 + 0x2c);
    *(float *)(iVar5 + 0x134) = param_3[2] - *(float *)(iVar4 + 0x30);
  }
  *(undefined4 *)(iVar5 + 0x148) = DAT_00367bf8;
  return uVar3 | iVar2 << 1;
}

