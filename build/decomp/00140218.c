// OoT3D decomp @ 00140218  name=FUN_00140218  size=344

void FUN_00140218(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  short *psVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = *(float *)(param_1 + 0x28);
  fVar5 = *(float *)(param_1 + 0x30);
  if (*(short *)(param_1 + 0x668) != 0) {
    psVar4 = (short *)(*(int *)(*(int *)(DAT_00140378 + param_2) +
                                (short)(*(short *)(param_1 + 0x668) + -1) * 8 + 4) +
                      *(short *)(param_1 + 0x66a) * 6);
    fVar9 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)FUN_003696ec(fVar9 - fVar7,fVar8 - fVar5);
    *(short *)(param_1 + 0x664) = (short)(int)(fVar6 * DAT_0014037c);
    FUN_00359e34(param_1,param_2,2);
    fVar7 = ABS(fVar9 - fVar7);
    iVar1 = (int)fVar7 - DAT_00140380;
    if ((int)fVar7 < DAT_00140380) {
      fVar7 = ABS(fVar8 - fVar5);
      iVar1 = (int)fVar7 - DAT_00140380;
    }
    if ((iVar1 < 0 != SBORROW4((int)fVar7,DAT_00140380)) &&
       (sVar3 = *(short *)(param_1 + 0x66a) + 1, *(short *)(param_1 + 0x66a) = sVar3,
       *(short *)(param_1 + 0x66c) <= sVar3)) {
      *(undefined2 *)(param_1 + 0x66a) = 0;
    }
    FUN_003631d0(param_1,param_2,2);
    return;
  }
  *(float *)(param_1 + 0x638) = fVar7;
  *(float *)(param_1 + 0x62c) = fVar7;
  *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x630) = *(undefined4 *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x640) = fVar5;
  *(float *)(param_1 + 0x634) = fVar5;
  uVar2 = DAT_00140370;
  *(undefined2 *)(param_1 + 0x61c) = 0;
  *(undefined2 *)(param_1 + 0x5da) = 0;
  *(undefined2 *)(param_1 + 0x5dc) = 0;
  *(undefined4 *)(param_1 + 0x680) = uVar2;
  *(undefined4 *)(param_1 + 0x67c) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x60c) = uVar2;
  *(undefined4 *)(param_1 + 0x604) = uVar2;
  *(undefined4 *)(param_1 + 0x600) = uVar2;
  *(undefined4 *)(param_1 + 0x608) = uVar2;
  *(undefined4 *)(param_1 + 0x5d0) = DAT_00140374;
  return;
}

