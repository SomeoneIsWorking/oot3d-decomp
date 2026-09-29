// OoT3D decomp @ 0020d8b4  name=FUN_0020d8b4  size=636

undefined4 FUN_0020d8b4(undefined4 param_1,undefined4 param_2,float *param_3,float *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;

  fVar7 = DAT_0020db50;
  fVar9 = DAT_0020db40;
  fVar3 = DAT_0020db3c;
  fVar2 = DAT_0020db38;
  fVar10 = DAT_0020db34;
  piVar1 = DAT_0020db30;
  pfVar6 = param_4 + 1;
  if (*(short *)(param_4 + 0xe) == 0) {
    fVar7 = param_4[2];
    fVar8 = param_4[3];
    *param_3 = *pfVar6;
    param_3[1] = fVar7;
    param_3[2] = fVar8;
    param_3[0xb] = *param_3 - *(float *)((int)*param_4 + 0x28);
    param_3[0xc] = param_3[1] - *(float *)((int)*param_4 + 0x2c);
    fVar7 = DAT_0020db44;
    param_3[0xd] = param_3[2] - *(float *)((int)*param_4 + 0x30);
    param_3[3] = fVar9;
    param_3[4] = fVar9;
    param_3[5] = fVar9;
    param_3[6] = fVar9;
    param_3[7] = fVar9;
    param_3[8] = fVar9;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(short *)(param_3 + 0x18) = (short)(int)(fVar7 / fVar9 + fVar10);
    param_3[0xf] = *param_4;
    param_3[9] = DAT_0020db48;
    param_3[10] = fVar2;
    uVar4 = DAT_0020db4c;
    *(short *)(param_3 + 0x17) = (short)(int)(param_4[4] * fVar3);
    *(ushort *)(param_3 + 0x13) = (ushort)*(byte *)(param_4 + 0xb);
    *(ushort *)((int)param_3 + 0x4e) = (ushort)*(byte *)((int)param_4 + 0x2d);
    *(ushort *)(param_3 + 0x14) = (ushort)*(byte *)((int)param_4 + 0x2e);
    *(ushort *)((int)param_3 + 0x52) = (ushort)*(byte *)((int)param_4 + 0x2f);
    *(ushort *)(param_3 + 0x15) = (ushort)*(byte *)(param_4 + 0xc);
    *(ushort *)((int)param_3 + 0x56) = (ushort)*(byte *)((int)param_4 + 0x31);
    *(ushort *)(param_3 + 0x16) = (ushort)*(byte *)((int)param_4 + 0x32);
    *(undefined2 *)((int)param_3 + 0x5a) = 1;
    fVar10 = (float)FUN_003738a8(uVar4);
    *(short *)(param_3 + 0x12) = (short)(int)fVar10;
  }
  else {
    if (*(short *)(param_4 + 0xe) != 1) {
      return 0;
    }
    fVar9 = param_4[2];
    fVar8 = param_4[3];
    *param_3 = *pfVar6;
    param_3[1] = fVar9;
    param_3[2] = fVar8;
    fVar9 = param_4[2];
    fVar8 = param_4[3];
    param_3[0xb] = *pfVar6;
    param_3[0xc] = fVar9;
    param_3[0xd] = fVar8;
    fVar9 = param_4[6];
    fVar8 = param_4[7];
    param_3[3] = param_4[5];
    param_3[4] = fVar9;
    param_3[5] = fVar8;
    fVar9 = param_4[9];
    fVar8 = param_4[10];
    param_3[6] = param_4[8];
    param_3[7] = fVar9;
    param_3[8] = fVar8;
    fVar9 = DAT_0020db54;
    fVar8 = (float)VectorSignedToFloat(param_4[0xd],(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    uVar5 = (undefined2)(int)((fVar8 * fVar7) / fVar11 + fVar10);
    *(undefined2 *)(param_3 + 0x18) = uVar5;
    param_3[9] = fVar9;
    param_3[10] = fVar2;
    *(undefined2 *)(param_3 + 0x11) = uVar5;
    *(short *)(param_3 + 0x17) = (short)(int)(param_4[4] * fVar3);
    uVar5 = FUN_003758b0(param_4[7],param_4[5]);
    *(undefined2 *)((int)param_3 + 0x46) = uVar5;
    *(undefined2 *)(param_3 + 0x12) = 0;
    *(ushort *)(param_3 + 0x13) = (ushort)*(byte *)(param_4 + 0xb);
    *(ushort *)((int)param_3 + 0x4e) = (ushort)*(byte *)((int)param_4 + 0x2d);
    *(ushort *)(param_3 + 0x14) = (ushort)*(byte *)((int)param_4 + 0x2e);
    *(ushort *)((int)param_3 + 0x52) = (ushort)*(byte *)((int)param_4 + 0x2f);
    *(ushort *)(param_3 + 0x15) = (ushort)*(byte *)(param_4 + 0xc);
    *(ushort *)((int)param_3 + 0x56) = (ushort)*(byte *)((int)param_4 + 0x31);
    *(ushort *)(param_3 + 0x16) = (ushort)*(byte *)((int)param_4 + 0x32);
    *(undefined2 *)((int)param_3 + 0x5a) = 0;
  }
  fVar10 = (float)FUN_0033a904(param_1,0,1,0x12);
  param_3[0x1b] = fVar10;
  param_3[0x1e] = 1.4013e-45;
  return 1;
}
