// OoT3D decomp @ 002a6da8  name=FUN_002a6da8  size=404

void FUN_002a6da8(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;

  fVar1 = DAT_002a6f50;
  fVar6 = DAT_002a6f4c;
  iVar4 = *(int *)(DAT_002a6f48 + param_2);
  FUN_0036e168(DAT_002a6f58,DAT_002a6f54,param_1 + 0x6c);
  fVar2 = DAT_002a6f60;
  FUN_0036e168(*(float *)(iVar4 + 0x2c) + *(float *)(param_1 + 0x4b8) + DAT_002a6f5c,DAT_002a6f64,
               *(float *)(param_1 + 0x6c) * DAT_002a6f60,fVar6,param_1 + 0x2c);
  FUN_0037547c(DAT_002a6f70,param_1 + 0x28,4,DAT_002a6f6c,DAT_002a6f6c,DAT_002a6f68);
  if (((*(byte *)(param_1 + 0x4d0) & 2) != 0) &&
     (*(byte *)(param_1 + 0x4d0) = *(byte *)(param_1 + 0x4d0) & 0xfd,
     *(int *)(param_1 + 0x4c4) == iVar4)) {
    *(undefined2 *)(param_1 + 0x4a8) = 1;
  }
  if (*(short *)(param_1 + 0x4ac) != 0) {
    *(short *)(param_1 + 0x4ac) = *(short *)(param_1 + 0x4ac) + -0xf;
  }
  fVar5 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0x4b4));
  if (fVar5 != fVar6) {
    fVar6 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0x4b4));
    *(float *)(param_1 + 0x2c) =
         *(float *)(param_1 + 0x2c) +
         fVar6 * (*(float *)(param_1 + 0x4bc) + *(float *)(param_1 + 0x6c) * fVar2);
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + *(short *)(param_1 + 0x4b0);
    *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) + fVar1;
    if (*(short *)(param_1 + 0x4a6) != 0) {
      *(short *)(param_1 + 0x4a6) = *(short *)(param_1 + 0x4a6) + -1;
    }
    uVar3 = FUN_003758b0(*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30),
                         *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28));
    FUN_00375a18(param_1 + 0x36,uVar3,1,DAT_002a6f78,0);
    if (*(short *)(param_1 + 0x4a6) == 0) {
      *(undefined4 *)(param_1 + 0x1a4) = 7;
      *(undefined2 *)(param_1 + 0x4a6) = 300;
      *(undefined4 *)(param_1 + 0x1ac) = DAT_002a6f7c;
    }
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
