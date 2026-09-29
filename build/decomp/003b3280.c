// OoT3D decomp @ 003b3280  name=FUN_003b3280  size=368

void FUN_003b3280(int param_1,int param_2)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  iVar4 = *(int *)(DAT_003b33f0 + param_2);
  FUN_00317884(param_1);
  FUN_0036e168(DAT_003b3400,DAT_003b33fc,DAT_003b33f8,DAT_003b33f4,param_1 + 0x6c);
  uVar1 = DAT_003b3408;
  fVar7 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x10);
  if (DAT_003b3404 < (int)(fVar7 * fVar7 + fVar5 * fVar5)) {
    uVar3 = FUN_003758b0(*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30),
                         *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28));
    FUN_003529d4(param_1 + 0x36,uVar3,uVar1);
  }
  else {
    if ((*(uint *)(param_2 + 0xf8) & 0x40) == 0) {
      sVar2 = *(short *)(param_1 + 0x92) + 0x7000;
    }
    else {
      sVar2 = *(short *)(param_1 + 0x92) + -0x7000;
    }
    fVar5 = (float)FUN_002cfca0((int)sVar2);
    fVar7 = DAT_003b340c;
    fVar8 = *(float *)(iVar4 + 0x28);
    fVar5 = fVar5 * DAT_003b340c;
    fVar6 = (float)FUN_00338f60((int)sVar2);
    uVar3 = FUN_003758b0((*(float *)(iVar4 + 0x30) + fVar6 * fVar7) - *(float *)(param_1 + 0x30),
                         (fVar8 + fVar5) - *(float *)(param_1 + 0x28));
    FUN_003529d4(param_1 + 0x36,uVar3,uVar1);
  }
  fVar7 = DAT_003b3414;
  fVar5 = DAT_003b3410;
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  fVar7 = fVar7 + *(float *)(param_1 + 0x6c) * fVar5;
  if (DAT_003b3418 < (int)fVar7) {
    fVar7 = DAT_003b341c;
  }
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003b3420 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x254) = fVar7 * fVar5 * DAT_003b3424;
  FUN_003731e0(param_1 + 0x214);
  uVar1 = DAT_00339d70;
  if (0 < *(short *)(DAT_003b3428 + param_1)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = DAT_00339d70;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(5,0x23);
}
