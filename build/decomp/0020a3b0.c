// OoT3D decomp @ 0020a3b0  name=FUN_0020a3b0  size=652

void FUN_0020a3b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  
  uVar2 = DAT_0020a640;
  if (*(int *)(param_1 + 0x2b0) != DAT_0020a63c) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0xc) + 0xc) =
         *(undefined4 *)(param_1 + 0x2ac);
    *(undefined4 *)(*(int *)(param_1 + 0x2a8) + 0xc) = uVar2;
    uVar10 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x33b),(byte)(in_fpscr >> 0x15) & 3);
    if (*DAT_0020a644 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x2a8) + 8) = uVar10;
      FUN_003586ec();
    }
    FUN_00373bec(*(undefined4 *)(param_1 + 0x2a8));
    uVar10 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1cc));
    if (*(char *)(*(int *)(param_1 + 0x124) + 0x93f) == '\0') {
      local_44 = *DAT_0020a648;
      iStack_40 = DAT_0020a648[1];
      iStack_3c = DAT_0020a648[2];
      iStack_38 = DAT_0020a648[3];
      FUN_003589cc(uVar10,4);
      FUN_00358964(uVar10,4,&local_44);
    }
    else {
      FUN_00341c18(uVar10,4);
      FUN_00373bec(*(undefined4 *)(param_1 + 0x2a4));
    }
    local_44 = 0;
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0020a650,DAT_0020a64c,param_1);
    fVar7 = DAT_0020a664;
    fVar6 = DAT_0020a660;
    fVar5 = DAT_0020a65c;
    fVar4 = DAT_0020a658;
    fVar3 = DAT_0020a654;
    iVar9 = 0;
    do {
      iVar1 = (short)iVar9 * 0x3200;
      fVar11 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 700),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)FUN_002cfca0((int)(short)(int)(fVar11 + fVar12 * fVar3));
      iVar8 = param_1 + iVar9 * 4;
      fVar12 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar8 + 0x4a4) = fVar5 + fVar11 * fVar4;
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 700),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)FUN_002cfca0((int)(short)(int)(fVar12 + fVar11 * fVar6));
      fVar12 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar8 + 0x640) = fVar5 + fVar11 * fVar4;
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 700),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)FUN_00338f60((int)(short)(int)(fVar12 + fVar11 * fVar7));
      iVar9 = (int)(short)((short)iVar9 + 1);
      *(float *)(iVar8 + 0x7dc) = fVar5 + fVar11 * fVar4;
    } while (iVar9 < 10);
    iStack_40 = param_1 + 0x4a4;
    local_44 = param_1 + 0x42c;
    iStack_3c = 0;
    FUN_00335904(param_1,param_2,param_1 + 0x4cc,param_1 + 0x3b4,param_1 + 0x33c);
    iStack_40 = param_1 + 0x640;
    local_44 = param_1 + 0x5c8;
    iStack_3c = 1;
    FUN_00335904(param_1,param_2,param_1 + 0x668,param_1 + 0x550,param_1 + 0x4d8);
    iStack_40 = param_1 + 0x7dc;
    local_44 = param_1 + 0x764;
    iStack_3c = 2;
    FUN_00335904(param_1,param_2,param_1 + 0x804,param_1 + 0x6ec,param_1 + 0x674);
  }
  *(undefined4 *)(param_1 + 0x2ac) = uVar2;
  return;
}

