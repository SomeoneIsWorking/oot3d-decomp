// OoT3D decomp @ 00133ff8  name=FUN_00133ff8  size=1096

void FUN_00133ff8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  float fVar4;
  undefined2 uVar5;
  short sVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  int extraout_r1;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float *local_38;

  fVar12 = DAT_00134488;
  fVar4 = DAT_00134328;
  piVar3 = DAT_00134324;
  uVar2 = DAT_00134320;
  uVar1 = DAT_0013431c;
  iVar10 = *(int *)(DAT_00134318 + param_2);
  local_40 = 0;
  local_3c = 0;
  switch(*(undefined1 *)(param_1 + 0xc4a)) {
  case 0:
    iVar9 = FUN_003769d8(param_2 + 0x28a0);
    if (iVar9 == 2) {
      uVar5 = FUN_00367d74(param_2);
      *(undefined2 *)(param_1 + 0xefe) = uVar5;
      FUN_00320d7c(param_2,0,1);
      FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0xefe),7);
      local_38 = (float *)(param_1 + 0xee8);
      FUN_0035c6b0(*(undefined4 *)(param_1 + 0xc40));
      sVar6 = FUN_003758b0(local_38[2] - *(float *)(param_1 + 0x30),
                           *local_38 - *(float *)(param_1 + 0x28));
      local_44 = (int)(short)(sVar6 + 0xe38);
      fVar11 = (float)FUN_002cfca0();
      fVar12 = DAT_0013432c;
      *(float *)(param_1 + 0xedc) = *(float *)(param_1 + 0x28) + fVar11 * DAT_0013432c;
      fVar11 = (float)FUN_00338f60(local_44);
      *(float *)(param_1 + 0xee4) = *(float *)(param_1 + 0x30) + fVar11 * fVar12;
      *(float *)(param_1 + 0xee0) = *(float *)(param_1 + 0x2c) + DAT_00134330;
      *(undefined4 *)(param_1 + 0xee8) = *(undefined4 *)(param_1 + 0x28);
      *(float *)(param_1 + 0xeec) = *(float *)(param_1 + 0x2c) + DAT_00134334;
      *(float *)(param_1 + 0xef0) = *(float *)(param_1 + 0x30);
      FUN_00367b14(param_2,(int)*(short *)(param_1 + 0xefe),local_38,param_1 + 0xedc);
      FUN_00370778(param_2);
      FUN_003717ac(param_1 + 0x1a4,DAT_00134338,2);
      uVar2 = DAT_0013433c;
      *(undefined4 *)(param_1 + 0x1e4) = DAT_0013433c;
      *(undefined1 *)(param_1 + 0xc48) = 1;
      FUN_0035c628(param_1,*(undefined4 *)(param_1 + 0xc40),1,&local_44);
      fVar12 = DAT_00134340;
      *(undefined2 *)(param_1 + 0x36) = (undefined2)local_44;
      *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
      *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x70) = uVar1;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0xef6) = (short)(int)(fVar12 / fVar11 + fVar4);
      *(undefined2 *)(param_1 + 0xbc8) = (undefined2)local_40;
      *(undefined2 *)(param_1 + 0xbca) = local_40._2_2_;
      *(undefined2 *)(param_1 + 0xbcc) = (undefined2)local_3c;
      FUN_0035fb94(param_1 + 0xbce,&local_40);
      *(char *)(param_1 + 0xc4a) = *(char *)(param_1 + 0xc4a) + '\x02';
      *(undefined2 *)(iVar10 + 0x36) = *(undefined2 *)(param_1 + 0x36);
      *(undefined2 *)(iVar10 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
      fVar12 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
      fVar4 = DAT_00134344;
      *(float *)(iVar10 + 0x28) = *(float *)(param_1 + 0x28) + fVar12 * DAT_00134344;
      fVar12 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
      *(float *)(iVar10 + 0x30) = *(float *)(param_1 + 0x30) + fVar12 * fVar4;
      FUN_0036e980(param_2,param_1,8);
      FUN_0035c528(DAT_00134348);
      return;
    }
    break;
  case 2:
    if (*(short *)(param_1 + 0xef6) != 0) {
      sVar6 = *(short *)(param_1 + 0xef6) + -1;
      iVar10 = (int)sVar6;
      *(short *)(param_1 + 0xef6) = sVar6;
      if (iVar10 != 0) {
        if ((iVar10 / 8) * 8 - iVar10 == 0) {
          FUN_00375bcc(param_1,uVar2);
        }
        FUN_00376864(param_1);
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    uVar7 = *(ushort *)(param_1 + 0x1c) & 0xfc00;
    if (((((uVar7 != 0x400 && uVar7 != 0x800) && uVar7 != 0x1000) && uVar7 != 0x1400) &&
        uVar7 != 0x2400) && uVar7 != 0x2c00) {
      *(undefined1 *)(param_1 + 0xc4a) = 3;
    }
    *(char *)(param_1 + 0xc4a) = *(char *)(param_1 + 0xc4a) + '\x01';
    break;
  case 3:
    sVar8 = *(short *)(param_1 + 0xef6) + 1;
    *(short *)(param_1 + 0xef6) = sVar8;
    sVar6 = *(short *)(*piVar3 + 0x110);
    fVar11 = (float)VectorSignedToFloat((int)sVar6,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00368d94((int)sVar8,(int)(fVar12 / fVar11 + fVar4));
    fVar12 = DAT_0013448c;
    if ((extraout_r1 == 0) &&
       (fVar11 = (float)VectorSignedToFloat((int)sVar6,(byte)(in_fpscr >> 0x15) & 3),
       (int)sVar8 < (int)(DAT_0013448c / fVar11 + fVar4))) {
      FUN_00375bcc(param_1,uVar2);
    }
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fVar12 / fVar11 + fVar4) == (int)*(short *)(param_1 + 0xef6)) {
      FUN_00375bcc(param_1,DAT_00134490);
    }
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_00134494 / fVar12 + fVar4) <= (int)*(short *)(param_1 + 0xef6)) {
      FUN_00375c44(param_2,param_1 + 0x28,0x14,DAT_00134498);
      goto switchD_00134044_caseD_4;
    }
    break;
  case 4:
switchD_00134044_caseD_4:
    FUN_003725e0(param_2);
    FUN_00320d7c(param_2,0,7);
    FUN_0036963c(param_2,(int)*(short *)(param_1 + 0xefe));
    FUN_0036e980(param_2,param_1,7);
    FUN_00374428(param_1);
    return;
  }
  return;
}
