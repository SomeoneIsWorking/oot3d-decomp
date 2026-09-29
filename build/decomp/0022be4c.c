// OoT3D decomp @ 0022be4c  name=FUN_0022be4c  size=1032

void FUN_0022be4c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_64;
  float local_60;
  float local_5c;
  float local_54;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;

  FUN_00372224(&local_64,param_1 + 0x148);
  fVar7 = DAT_0022c22c;
  iVar1 = DAT_0022c228;
  if (*(char *)(param_1 + 0x1ac) == '\0') {
    FUN_003713fc(DAT_0022c22c,DAT_0022c22c,DAT_0022c23c,&local_64,1);
    if (*(short *)(param_1 + 0x1ae) == -1) {
      *(undefined1 *)(*(int *)(param_1 + 0x250) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x250),&local_64);
      FUN_00372170(*(undefined4 *)(param_1 + 0x250),0);
    }
    else {
      iVar2 = 0;
      do {
        if ((*(ushort *)(param_1 + 0x1ae) & *(ushort *)(iVar1 + iVar2 * 2)) != 0) {
          iVar3 = param_1 + iVar2 * 4;
          *(undefined1 *)(*(int *)(iVar3 + 600) + 0xac) = 1;
          FUN_003721e0(*(undefined4 *)(iVar3 + 600),&local_64);
          FUN_00372170(*(undefined4 *)(iVar3 + 600),0);
        }
        iVar2 = (int)(short)((short)iVar2 + 1);
      } while (iVar2 < 0xb);
    }
    if (*(short *)(param_1 + 0x1f0) != 0) {
      fVar5 = fVar7;
      if (*(char *)(param_1 + 0x1ec) == '\0') {
        fVar5 = DAT_0022c240;
      }
      FUN_003713fc(fVar7,fVar5 + DAT_0022c244,DAT_0022c248,&local_64,1);
      FUN_00371234(*(undefined4 *)(DAT_0022c24c + (uint)*(byte *)(param_1 + 0x1ec) * 4),&local_64,1)
      ;
      local_64 = local_64 * fVar7;
      local_54 = local_54 * fVar7;
      local_44 = local_44 * fVar7;
      local_60 = local_60 * DAT_0022c250;
      local_50 = local_50 * DAT_0022c250;
      local_40 = local_40 * DAT_0022c250;
      local_5c = local_5c * DAT_0022c254;
      local_4c = local_4c * DAT_0022c254;
      local_3c = local_3c * DAT_0022c254;
      *(undefined1 *)(*(int *)(param_1 + 0x254) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x254),&local_64);
      FUN_00372170(*(undefined4 *)(param_1 + 0x254),0);
      return;
    }
  }
  else {
    FUN_003713fc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),&local_64,0);
    fVar5 = *(float *)(param_1 + 0x54);
    fVar8 = *(float *)(param_1 + 0x58);
    fVar9 = *(float *)(param_1 + 0x5c);
    local_64 = local_64 * fVar5;
    local_54 = local_54 * fVar5;
    local_44 = local_44 * fVar5;
    local_60 = local_60 * fVar8;
    local_50 = local_50 * fVar8;
    local_40 = local_40 * fVar8;
    local_5c = local_5c * fVar9;
    local_4c = local_4c * fVar9;
    local_3c = local_3c * fVar9;
    FUN_00369014(*(undefined4 *)(param_1 + 0x1e0),&local_64,1);
    FUN_00371234(*(undefined4 *)(param_1 + 0x1e8),&local_64,1);
    FUN_003713fc(fVar7,*(undefined4 *)(param_1 + 0xc4),fVar7,&local_64,1);
    fVar8 = DAT_0022c234;
    fVar5 = DAT_0022c230;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_003735e8(fVar9 * DAT_0022c230 * DAT_0022c234,&local_64,1);
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbc),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_00369014(fVar9 * fVar5 * fVar8,&local_64,1);
    fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x1c0));
    fVar9 = ABS(fVar9 * *(float *)(param_1 + 0x1d8));
    fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x1c4));
    fVar6 = ABS(fVar6 * *(float *)(param_1 + 0x1d4));
    uVar4 = in_fpscr & 0xfffffff | (uint)(fVar6 <= fVar9) << 0x1d;
    if (!SUB41(uVar4 >> 0x1d,0)) {
      fVar9 = fVar6;
    }
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1dc),(byte)(uVar4 >> 0x15) & 3);
    FUN_003713fc(fVar7,fVar7,-fVar6 * fVar9,&local_64,1);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c0),(byte)(uVar4 >> 0x15) & 3);
    FUN_00369014(fVar7 * fVar5 * fVar8,&local_64,1);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c4),(byte)(uVar4 >> 0x15) & 3);
    FUN_003735e8(fVar7 * fVar5 * fVar8,&local_64,1);
    FUN_003713fc(*(undefined4 *)(param_1 + 0x1b4),*(undefined4 *)(param_1 + 0x1b8),
                 *(float *)(param_1 + 0x1bc) - DAT_0022c238,&local_64,1);
    iVar2 = 0;
    do {
      if ((*(ushort *)(param_1 + 0x1ae) & *(ushort *)(iVar1 + iVar2 * 2)) != 0) {
        iVar3 = param_1 + iVar2 * 4;
        *(undefined1 *)(*(int *)(iVar3 + 600) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(iVar3 + 600),&local_64);
        FUN_00372170(*(undefined4 *)(iVar3 + 600),0);
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 0xb);
  }
  return;
}
