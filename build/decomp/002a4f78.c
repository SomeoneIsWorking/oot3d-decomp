// OoT3D decomp @ 002a4f78  name=FUN_002a4f78  size=52

void FUN_002a4f78(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;

  fVar3 = *(float *)(param_1 + 0x2c);
  iVar2 = *(int *)(DAT_002a5144 + param_2);
  if (DAT_002a5148 < (int)(fVar3 - *(float *)(param_1 + 0x84))) {
    fVar3 = fVar3 - DAT_002a514c;
  }
  else {
    fVar3 = fVar3 + DAT_002a514c;
  }
  *(float *)(param_1 + 0x2c) = fVar3;
  fVar3 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0x66c));
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar3 * fRam002a5150;
  fVar3 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0x66c));
  fVar3 = fVar3 * fRam002a5154;
  if (fVar3 < fRam002a5158) {
    fVar3 = -fVar3;
  }
  *(float *)(param_1 + 0x66c) = *(float *)(param_1 + 0x66c) + fVar3 + fRam002a515c;
  uVar1 = FUN_003758b0(*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30),
                       *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28));
  FUN_00375a18(param_1 + 0x36,uVar1,1,600,0);
  FUN_00375a18(param_1 + 0xbc,uRam002a5160,1,600,0);
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x15e;
  *(short *)(param_1 + 0x67e) = *(short *)(param_1 + 0x67e) + *(short *)(param_1 + 0x67c);
  fVar4 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28);
  fVar3 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30);
  if ((int)SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 0x40000000) {
    *(undefined4 *)(param_1 + 0x63c) = 10;
    FUN_00373d40(param_1 + 0x1a4,1);
    *(undefined4 *)(param_1 + 0x644) = uRam002a5164;
    *(undefined2 *)(param_1 + 0x682) = 0x5a;
  }
  if ((*(int *)(iRam002a5168 + 0x10) == 0) &&
     (fVar4 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 8),
     fVar3 = *(float *)(iVar2 + 0x30) - *(float *)(param_1 + 0x10),
     SQRT(fVar4 * fVar4 + fVar3 * fVar3) < *(float *)(param_1 + 0x664))) {
    *(undefined2 *)(param_1 + 0x684) = 600;
    FUN_00323698(param_1);
    *(ushort *)(param_1 + 0x686) = (ushort)*(undefined4 *)(iRam002a516c + param_2) & 1;
  }
  FUN_0037547c(uRam002a5170,param_1 + 0x28,4,DAT_00375c04,DAT_00375c04,DAT_00375c00);
  return;
}
