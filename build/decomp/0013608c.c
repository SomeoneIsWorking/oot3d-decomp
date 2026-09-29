// OoT3D decomp @ 0013608c  name=FUN_0013608c  size=608

void FUN_0013608c(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;

  fVar9 = DAT_00136374;
  iVar6 = *(int *)(param_2 + 0x20ac);
  if (*(short *)(param_1 + 0x234) != 0) {
    *(short *)(param_1 + 0x234) = *(short *)(param_1 + 0x234) + -1;
  }
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x234),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)FUN_003727f0(fVar8 * fVar9 * DAT_00136378 * DAT_0013637c);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x240),(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x230) << 0xd,
                                      (byte)(in_fpscr >> 0x15) & 3);
  sVar2 = (short)(int)(fVar8 + fVar10 * (DAT_00136380 - fVar9));
  *(short *)(param_1 + 0x36) = sVar2;
  *(short *)(param_1 + 0xbe) = sVar2 + *(char *)(param_1 + 0x230) * -0x4000;
  iVar3 = DAT_001363b0;
  uVar4 = DAT_00136390;
  if (*(short *)(param_1 + 0x234) < 8) {
    FUN_0036e168(DAT_00136390,DAT_0013638c,DAT_00136388,DAT_00136384,param_1 + 0x6c);
    iVar3 = FUN_003731e0(param_1 + 0x1a4);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      iVar3 = DAT_00136394;
      *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) & 0xfc;
      if ((*(uint *)(iVar3 + iVar6) & 0x80) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      uVar4 = 8;
      if (*(short *)(param_1 + 0x1c) == 1) {
        uVar4 = 0xf;
      }
      FUN_0036df58(param_2,param_1 + 0x28,uVar4);
      FUN_003672b8(param_1);
    }
  }
  else {
    fVar9 = *(float *)(param_1 + 0x6c) * DAT_001363ac;
    *(float *)(param_1 + 0x6c) = fVar9;
    uVar4 = DAT_001363b8;
    if (iVar3 < (int)fVar9) {
      fVar9 = DAT_001363b4;
    }
    *(float *)(param_1 + 0x6c) = fVar9;
    FUN_00373264(param_1,uVar4);
  }
  if ((*(byte *)(param_1 + 0xefc) & 2) != 0) {
    *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) & 0xfc;
    FUN_00375bcc(param_1,DAT_001363bc);
    iVar7 = *(int *)(param_2 + 0x20ac);
    iVar3 = (**(code **)(DAT_001363c0 + param_2))(param_2,iVar7);
    cVar1 = '\0';
    if (iVar3 != 0) {
      *(int *)(iVar7 + 0x124) = param_1;
      cVar1 = *(char *)(iVar7 + 0xb7);
    }
    iVar7 = DAT_001363c4;
    if ((iVar3 != 0 && cVar1 != '\0') &&
       (*(byte *)(param_1 + 0xefe) = *(byte *)(param_1 + 0xefe) & 0xfe,
       *(int *)(iVar7 + *(short *)(param_1 + 0x1c) * 4) == 6)) {
      *(byte *)(*(int *)(param_1 + 0x128) + 0xefe) =
           *(byte *)(*(int *)(param_1 + 0x128) + 0xefe) & 0xfe;
    }
    sVar2 = *(short *)(param_1 + 0x234);
    if (5 < sVar2) {
      sVar2 = 5;
    }
    *(short *)(param_1 + 0x234) = sVar2;
  }
  fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
  fVar9 = DAT_001363c8;
  *(float *)(param_1 + 0x28) =
       *(float *)(param_1 + 0x28) + fVar8 * *(float *)(param_1 + 0x6c) * DAT_001363c8;
  fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
  iVar3 = DAT_00136394;
  *(float *)(param_1 + 0x30) =
       *(float *)(param_1 + 0x30) + fVar8 * *(float *)(param_1 + 0x6c) * fVar9;
  if ((*(uint *)(iVar3 + iVar6) & 0x80) != 0) {
    *(undefined2 *)(DAT_001363cc + iVar6) = 0;
    uVar4 = *(undefined4 *)(param_1 + 0x2c);
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar6 + 0x2c) = uVar4;
    *(undefined4 *)(iVar6 + 0x30) = uVar5;
    *(undefined2 *)(iVar6 + 0xbe) = *(undefined2 *)(param_1 + 0xbe);
  }
  return;
}
