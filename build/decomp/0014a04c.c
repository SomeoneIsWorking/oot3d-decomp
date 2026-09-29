// OoT3D decomp @ 0014a04c  name=FUN_0014a04c  size=1224

void FUN_0014a04c(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;

  fVar1 = DAT_0014a3c8;
  if ((*(byte *)(param_1 + 0xd05) & 0x80) == 0) {
    if ((((*(byte *)(param_1 + 0xc2d) & 2) != 0) && (4 < *(int *)(param_1 + 0xbe8))) &&
       (*(short *)(param_1 + 0xc0e) < 2)) {
      *(byte *)(param_1 + 0xc2d) = *(byte *)(param_1 + 0xc2d) & 0xfd;
      if (*(char *)(param_1 + 0xb9) == '\x06') goto LAB_0014a484;
      *(char *)(param_1 + 0xbfa) = *(char *)(param_1 + 0xb9);
      FUN_00375fd0(param_1,param_1 + 0xc34,1);
      FUN_003ff758(param_1 + 0x28,DAT_0014a3cc);
      if (*(char *)(param_1 + 0xb9) == '\x01' || *(char *)(param_1 + 0xb9) == '\x0f') {
        if (*(int *)(param_1 + 0xbe8) != 0xf) {
          FUN_00375ed8(param_1,0,0x78,0,0x50);
          FUN_00375eb8(param_1);
          if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
            *(float *)(param_1 + 0x6c) = fVar1;
          }
          if (((*(char *)(param_1 + 0xbfa) == '\x0f') && (*(int *)(param_1 + 0xbe8) != 0xc)) ||
             (FUN_0037422c(fVar1,param_1 + 0x1e0,5), *(char *)(param_1 + 0xbfa) == '\x0f')) {
            *(undefined2 *)(param_1 + 0xbf8) = 0x36;
          }
          FUN_00375bcc(param_1,DAT_0014a3d0);
          *(undefined4 *)(param_1 + 0xbf0) = DAT_0014a3d4;
          *(undefined4 *)(param_1 + 0xbe8) = 0xf;
        }
      }
      else {
        FUN_00375ed8(param_1,0x400000,0xff,0,0x10);
        iVar6 = FUN_00375eb8(param_1);
        uVar2 = DAT_0014a3d8;
        if (iVar6 == 0) {
          if (((int)*(short *)(param_1 + 0xc10) != 0) &&
             (iVar6 = FUN_0036df58(param_2,param_1 + 0x28,(int)*(short *)(param_1 + 0xc10) | 0x11),
             iVar6 != 0)) {
            uVar4 = FUN_003758b0(*(float *)(param_1 + 0x10) - *(float *)(iVar6 + 0x30),
                                 *(float *)(param_1 + 8) - *(float *)(iVar6 + 0x28));
            *(undefined2 *)(iVar6 + 0x36) = uVar4;
            uVar3 = DAT_0014a3e0;
            *(undefined4 *)(iVar6 + 0x6c) = DAT_0014a3dc;
            FUN_00372244(param_2 + 0x5fcc,0x1e,uVar3);
          }
          FUN_00374a58(uVar2,param_1 + 0x1e0,4);
          *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
          *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
          if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
            *(undefined2 *)(param_1 + 0xc14) = 1;
          }
          else {
            *(undefined4 *)(param_1 + 0x6c) = DAT_0014a3e4;
            *(undefined2 *)(param_1 + 0xc14) = 0;
          }
          *(undefined4 *)(param_1 + 0xbe8) = 1;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          FUN_00375bcc(param_1,DAT_0014a3e8);
          *(undefined4 *)(param_1 + 0xbf0) = DAT_0014a3ec;
          FUN_00375b70(param_2,param_1);
        }
        else {
          FUN_00374a58(DAT_0014a3d8,param_1 + 0x1e0,5);
          if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
            *(undefined2 *)(param_1 + 0xc14) = 1;
          }
          else {
            *(undefined4 *)(param_1 + 0x6c) = uVar2;
            *(undefined2 *)(param_1 + 0xc14) = 0;
          }
          *(undefined2 *)(param_1 + 0xbf6) = 0;
          *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
          FUN_00375bcc(param_1,DAT_0014a3f0);
          *(undefined4 *)(param_1 + 0xbf0) = DAT_0014a3f4;
          *(undefined4 *)(param_1 + 0xbe8) = 2;
        }
      }
    }
  }
  else {
    *(byte *)(param_1 + 0xd05) = *(byte *)(param_1 + 0xd05) & 0x7f;
    *(byte *)(param_1 + 0xc2d) = *(byte *)(param_1 + 0xc2d) & 0xfd;
  }
  if (*(char *)(param_1 + 0xb9) == '\x06') goto LAB_0014a484;
  FUN_00376864(param_1);
  FUN_00376340(DAT_0014a400,DAT_0014a3fc,DAT_0014a3f8,param_2,param_1,0x1d);
  (**(code **)(param_1 + 0xbf0))(param_1,param_2);
  fVar9 = DAT_0014a404;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar9;
  iVar6 = *(int *)(param_1 + 0xbe8);
  if (iVar6 == 5) {
    iVar6 = (int)*(short *)(param_1 + 0xbf6);
    if (iVar6 != 0) {
      fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      if (iVar6 < 1) {
        fVar9 = fVar9 * DAT_0014a408 * DAT_0014a40c - DAT_0014a410;
      }
      else {
        fVar9 = DAT_0014a410 + fVar9 * DAT_0014a408 * DAT_0014a40c;
      }
      fVar9 = (float)FUN_002cfca0((int)(short)((short)(int)fVar9 * (short)DAT_0014a414));
      *(short *)(param_1 + 0xde6) = (short)(int)(fVar9 * DAT_0014a418);
      goto LAB_0014a484;
    }
  }
  else {
    if (iVar6 == 0xf) goto LAB_0014a484;
    if (iVar6 == 7 || iVar6 == 0xc) {
      *(undefined2 *)(param_1 + 0xde6) = 0;
      goto LAB_0014a484;
    }
  }
  FUN_00375a18(param_1 + 0xde6,(int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe))
               ,1,500,0);
  sVar5 = *(short *)(param_1 + 0xde6);
  uVar7 = DAT_0014a590;
  if (((int)sVar5 < (int)DAT_0014a590) ||
     (uVar7 = DAT_0014a590 ^ (int)DAT_0014a590 >> 0xd, (int)uVar7 < (int)sVar5)) {
    sVar5 = (short)uVar7;
  }
  *(short *)(param_1 + 0xde6) = sVar5;
LAB_0014a484:
  FUN_0037632c(param_1);
  iVar6 = param_2 + 0x5c78;
  FUN_003762a4(param_2,iVar6,param_1 + 0xc1c);
  if ((4 < *(int *)(param_1 + 0xbe8)) && (*(short *)(param_1 + 0xc0e) < 2)) {
    bVar8 = *(short *)(DAT_0014a594 + param_1) != 0;
    uVar7 = 0;
    if (bVar8) {
      uVar7 = *(uint *)(param_1 + 0x11c);
    }
    if (!bVar8 || (uVar7 & 0x400000) == 0) {
      FUN_00376168(param_2,iVar6,param_1 + 0xc1c);
    }
  }
  bVar8 = false;
  if (*(int *)(param_1 + 0xbe8) == 6) {
    bVar8 = *(float *)(param_1 + 0x21c) == fVar1;
  }
  if (bVar8) {
    FUN_00376168(param_2,iVar6,param_1 + 0xcf4);
  }
  if (0 < *(short *)(param_1 + 0xc0c)) {
    FUN_003761f0(param_2,iVar6,param_1 + 0xc74);
  }
  if (*(char *)(param_1 + 0xc16) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(byte *)(param_1 + 0xc16) = *(char *)(param_1 + 0xc16) + 1U & 3;
  return;
}
