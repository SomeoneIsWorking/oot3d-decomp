// OoT3D decomp @ 003c95bc  name=FUN_003c95bc  size=492

void FUN_003c95bc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  FUN_00375bcc(param_1,DAT_003c97a8);
  uVar3 = DAT_003c97b4;
  uVar2 = DAT_003c97b0;
  uVar1 = DAT_003c97ac;
  FUN_00373500(DAT_003c97b4,DAT_003c97b0,DAT_003c97ac,param_1 + 0x528);
  FUN_003731e0(param_1 + 0x5c0);
  fVar10 = *(float *)(param_1 + 0x508) - *(float *)(param_1 + 0x28);
  fVar5 = *(float *)(param_1 + 0x50c);
  fVar8 = *(float *)(param_1 + 0x2c);
  fVar9 = *(float *)(param_1 + 0x510) - *(float *)(param_1 + 0x30);
  fVar6 = (float)FUN_003696ec(fVar10,fVar9);
  fVar7 = DAT_003c97b8;
  fVar11 = (float)VectorSignedToFloat((int)(short)(int)(fVar6 * DAT_003c97b8),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar6 = SQRT(fVar10 * fVar10 + fVar9 * fVar9);
  fVar5 = (float)FUN_003696ec(fVar5 - fVar8,fVar6);
  fVar7 = (float)VectorSignedToFloat((int)(short)(int)(fVar5 * fVar7),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00370084(param_1 + 0x34,(int)(short)(int)fVar7,10,(int)(short)(int)*(float *)(param_1 + 0x520)
              );
  FUN_00370084(param_1 + 0x36,(int)(short)(int)fVar11,10,
               (int)(short)(int)*(float *)(param_1 + 0x520));
  FUN_00370084(param_1 + 0xbe,(int)(short)(int)fVar11,10,
               (int)(short)(int)*(float *)(param_1 + 0x520));
  FUN_00370084(param_1 + 0xbc,(int)(short)(int)fVar7,10,(int)(short)(int)*(float *)(param_1 + 0x520)
              );
  FUN_00373500(DAT_003c97c0,uVar2,DAT_003c97bc,param_1 + 0x520);
  FUN_00373500(uVar1,uVar2,uVar2,param_1 + 0x6c);
  FUN_00365860(param_1);
  FUN_0036b96c(param_1);
  if ((*(short *)(param_1 + 0x1d0) == 0) || ((int)fVar6 < DAT_003c97c4)) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003c97c8;
    if ((*(int *)(param_1 + 0x124) == 0) ||
       (*(int *)(*(int *)(param_1 + 0x124) + 0x1a4) != DAT_003c97cc)) {
      uVar4 = 0x5a;
    }
    else {
      uVar4 = 0x3c;
    }
    *(undefined2 *)(param_1 + 0x1d0) = uVar4;
    *(undefined4 *)(param_1 + 0x520) = uVar3;
  }
  return;
}
