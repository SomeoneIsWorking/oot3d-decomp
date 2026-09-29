// OoT3D decomp @ 003871b0  name=FUN_003871b0  size=416

void FUN_003871b0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  float fVar6;
  float fVar7;

  uVar2 = DAT_0038735c;
  uVar1 = DAT_00387354;
  iVar5 = *(int *)(DAT_00387350 + param_2);
  FUN_0036e168(DAT_00387360,DAT_0038735c,DAT_00387358,DAT_00387354,param_1 + 0x6c);
  FUN_0036e168(*(float *)(param_1 + 0x84) + DAT_00387364,uVar2,DAT_00387368,uVar1,param_1 + 0x2c);
  if (*(short *)(param_1 + 0x684) < 1) {
    *(undefined4 *)(param_1 + 0x63c) = 10;
    FUN_00373d40(param_1 + 0x1a4,1);
    *(undefined4 *)(param_1 + 0x644) = DAT_0038736c;
    *(undefined2 *)(param_1 + 0x682) = 0x3c;
  }
  else {
    *(short *)(param_1 + 0x684) = *(short *)(param_1 + 0x684) + -1;
  }
  if ((*(int *)(DAT_00387370 + 0x10) != 0) ||
     (fVar7 = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 8),
     fVar6 = *(float *)(iVar5 + 0x30) - *(float *)(param_1 + 0x10),
     *(float *)(param_1 + 0x664) <= SQRT(fVar7 * fVar7 + fVar6 * fVar6))) {
    *(undefined4 *)(param_1 + 0x63c) = 0xc;
    uVar3 = DAT_00387378;
    *(undefined4 *)(param_1 + 0x6c) = DAT_00387374;
    *(undefined4 *)(param_1 + 0x644) = uVar3;
  }
  else {
    FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),1,1000,0);
    if (*(short *)(param_1 + 0x686) == 0) {
      sVar4 = *(short *)(param_1 + 0xbe) + -0x1c2;
    }
    else {
      sVar4 = *(short *)(param_1 + 0xbe) + 0x1c2;
    }
    *(short *)(param_1 + 0xbe) = sVar4;
  }
  FUN_003731e0(param_1 + 0x1a4);
  FUN_00375a18(param_1 + 0x67c,4000,1,500,0);
  *(short *)(param_1 + 0x67e) = *(short *)(param_1 + 0x67e) + *(short *)(param_1 + 0x67c);
  FUN_0036e168(DAT_00387380,uVar2,DAT_0038737c,uVar1,param_1 + 0x678);
  FUN_00375bcc(param_1,DAT_00387384);
  return;
}
