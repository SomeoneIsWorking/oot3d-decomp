// OoT3D decomp @ 0019f930  name=FUN_0019f930  size=400

void FUN_0019f930(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 in_s3;
  undefined4 extraout_s3;
  undefined1 auStack_24 [4];
  float local_20;

  if (*(short *)(param_1 + 0x626) != 0) {
    FUN_00345420(param_1,param_2);
    in_s3 = extraout_s3;
  }
  fVar3 = DAT_0019fac8;
  piVar2 = DAT_0019fac4;
  fVar9 = DAT_0019fac0;
  *(float *)(param_1 + 0x6c) = DAT_0019fac0;
  uVar6 = DAT_0019fae0;
  uVar5 = DAT_0019fad4;
  uVar4 = DAT_0019fad0;
  uVar7 = DAT_0019facc;
  uVar1 = *(ushort *)(param_1 + 0x90);
  if ((uVar1 & 0x20) == 0) {
    bVar8 = (uVar1 & 8) == 0;
    if (bVar8) {
      in_s3 = DAT_0019fae4;
    }
    *(undefined4 *)(param_1 + 0x70) = DAT_0019fae0;
    if (bVar8) {
      *(undefined4 *)(param_1 + 0x6c) = in_s3;
    }
    else {
      *(undefined4 *)(param_1 + 100) = uVar7;
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      *(undefined4 *)(param_1 + 0x70) = uVar5;
    }
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 100) = uVar5;
      *(undefined4 *)(param_1 + 0x70) = uVar6;
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5de) = (short)(int)(DAT_0019fae8 / fVar9 + fVar3);
      *(undefined2 *)(param_1 + 0x5da) = 0;
      uVar7 = DAT_0019faec;
      if (*(short *)(param_1 + 0x626) == 0) {
        uVar7 = DAT_0019faf0;
      }
      *(undefined4 *)(param_1 + 0x5d0) = uVar7;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = DAT_0019fad4;
    if (DAT_0019fad8 < *(int *)(param_1 + 0x88)) {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar9;
    }
    if (*(short *)(param_1 + 0x5da) == 0) {
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5da) = (short)(int)(DAT_0019fadc / fVar9 + fVar3);
      FUN_0036df4c(auStack_24,param_1 + 0x28);
      local_20 = local_20 + *(float *)(param_1 + 0x88);
      FUN_00362068(param_2,auStack_24,100,500,0x1e);
    }
    if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
      *(undefined4 *)(param_1 + 100) = uVar7;
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
    }
  }
  FUN_003631d0(param_1,param_2,2);
  return;
}
