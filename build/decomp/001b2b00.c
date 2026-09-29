// OoT3D decomp @ 001b2b00  name=FUN_001b2b00  size=700

void FUN_001b2b00(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined4 local_74 [6];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];

  fVar8 = DAT_001b2dbc;
  if ((1 < *(short *)(param_1 + 0xc0e)) && (iVar2 = FUN_003731e0(param_1 + 0x1e0), iVar2 != 0)) {
    if (*(short *)(param_1 + 0xc0e) == 2) {
      FUN_00375c08(fVar8,DAT_001b2dc8,DAT_001b2dc4,DAT_001b2dc0,param_1 + 0x1e0,1,3);
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      *(short *)(param_1 + 0xc0e) = *(short *)(param_1 + 0xc0e) + 1;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xbfc) + -1;
      *(int *)(param_1 + 0xbfc) = iVar2;
      if (iVar2 == 0) {
        bVar6 = *(char *)(*(byte *)(DAT_001b2dcc + 10) + DAT_001b2dd0) != -1;
        uVar3 = DAT_001b2dd0;
        if (bVar6) {
          uVar3 = (uint)*(byte *)(*(byte *)(DAT_001b2dcc + 0xb) + DAT_001b2dd0);
        }
        if (bVar6 && uVar3 != 0xff) {
          if ((*(ushort *)(DAT_001b2dd8 + 4) & 0x80) == 0) {
            FUN_003716f0(param_2,0x3b4,0x14,0x26);
          }
          else {
            FUN_003716f0(param_2,DAT_001b2ddc,0x14,0x26);
          }
        }
        else {
          FUN_003716f0(param_2,DAT_001b2dd4,0x14,0x26);
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0xbe8) != 0) || (*(short *)(param_1 + 0xc14) == 0)) {
    FUN_0035e3a4(param_1 + 0xa1c,0,*(undefined1 *)(param_1 + 0xc16));
    FUN_0035e330(param_1 + 0xa1c);
    local_74[0] = 0;
    FUN_0035e240(param_1 + 0x1e0,param_1 + 0x148,DAT_001b2de4,DAT_001b2de0,param_1);
    iVar2 = DAT_001b2de8;
    if (*(int *)(param_1 + 0xbe8) == 6) {
      iVar4 = 0;
      iVar5 = DAT_001b2de8 + 0x24;
      do {
        FUN_003735ac(auStack_50 + iVar4 * 0xc,param_1 + 0x148,iVar2 + iVar4 * 0xc);
        FUN_003735ac(local_74 + iVar4 * 3,param_1 + 0x148,iVar5 + iVar4 * 0xc);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      FUN_00362434(param_1 + 0xcf4,0,auStack_50,auStack_44,auStack_38);
      FUN_00362434(param_1 + 0xcf4,1,local_74,local_74 + 3,auStack_5c);
    }
    if (*(short *)(param_1 + 0xbf8) != 0) {
      *(short *)(param_1 + 0x11a) = *(short *)(param_1 + 0x11a) + 1;
      sVar1 = *(short *)(param_1 + 0xbf8) + -1;
      iVar2 = (int)sVar1;
      *(short *)(param_1 + 0xbf8) = sVar1;
      iVar4 = (int)((ulonglong)((longlong)DAT_001b2dec * (longlong)iVar2) >> 0x20);
      if (iVar2 + (iVar4 - (iVar4 >> 0x1f)) * -6 == 0) {
        fVar7 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
        local_74[3] = 0xf5;
        local_74[4] = 0xff;
        local_74[0] = 0x96;
        if (iVar2 < 1) {
          fVar8 = fVar7 * DAT_001b2df0 * DAT_001b2df4 - fVar8;
        }
        else {
          fVar8 = fVar8 + fVar7 * DAT_001b2df0 * DAT_001b2df4;
        }
        local_74[1] = 0xfa;
        local_74[2] = 0xeb;
        FUN_00347d24(DAT_001b2df8,param_2,param_1,param_1 + ((int)fVar8 >> 2) * 6 + 0x1a4,0x96,0x96)
        ;
      }
    }
  }
  return;
}
