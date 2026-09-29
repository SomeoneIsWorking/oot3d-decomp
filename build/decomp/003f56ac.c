// OoT3D decomp @ 003f56ac  name=FUN_003f56ac  size=720

void FUN_003f56ac(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;

  fVar5 = DAT_003f5990;
  uVar4 = DAT_003f598c;
  fVar3 = DAT_003f5988;
  iVar9 = *(int *)(DAT_003f597c + param_2);
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003f5980 + 0x110),
                                      (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_003f5984 / fVar10 + DAT_003f5988) < (int)*(short *)(param_1 + 0x480)) {
    if (*(int *)(iVar9 + 100) < DAT_003f5994) {
      *(undefined4 *)(iVar9 + 0x70) = DAT_003f598c;
    }
    else {
      *(float *)(iVar9 + 0x70) = DAT_003f5990;
    }
  }
  else {
    *(short *)(param_1 + 0x480) = *(short *)(param_1 + 0x480) + 1;
  }
  uVar8 = *(short *)(param_1 + 0x462) + 1;
  *(ushort *)(param_1 + 0x462) = uVar8;
  iVar7 = DAT_003f599c;
  if (((int)*DAT_003f5998 < (int)(uint)uVar8) && (*(short *)(DAT_003f599c + 0xa0) == -0x11)) {
    iVar6 = FUN_0035b164();
    if (iVar6 == 1) {
      FUN_0034536c(param_2);
    }
    else {
      sVar1 = *(short *)(param_2 + 0x104);
      uVar2 = (undefined2)DAT_003f59a0;
      if (sVar1 == 0x12) {
        iVar6 = FUN_00350cf4(0x25);
        if (iVar6 == 0) {
          FUN_0034cbf8(0x25);
          FUN_00376a78(param_2,0x6d);
          FUN_003716f0(param_2,DAT_003f59a4,0x14,7);
          *(undefined2 *)(iVar7 + 0xa0) = uVar2;
        }
        else {
          FUN_003716f0(param_2,DAT_003f59a8,0x14,7);
          *(undefined2 *)(iVar7 + 0xa0) = 0;
        }
      }
      else if (sVar1 == 0x11) {
        iVar6 = FUN_00350cf4(7);
        if (iVar6 == 0) {
          FUN_0034cbf8(7);
          FUN_0034cbf8(9);
          FUN_00376a78(param_2,0x6c);
          FUN_003716f0(param_2,0xee,0x14,7);
          *(undefined2 *)(iVar7 + 0xa0) = uVar2;
        }
        else {
          FUN_003716f0(param_2,0x457,0x14);
          *(undefined2 *)(iVar7 + 0xa0) = 0;
        }
      }
      else if (sVar1 == 0x13) {
        FUN_003716f0(param_2,0x10e,0x14,7);
        *(undefined2 *)(iVar7 + 0xa0) = 0;
      }
      *(undefined1 *)(DAT_003f59ac + 0x5ab) = 3;
    }
  }
  iVar7 = FUN_0036c950(param_1 + 0x360,param_2);
  if ((iVar7 != 0) &&
     (iVar7 = *(int *)(*(int *)(param_1 + 0x36c) + 0xc), *(float *)(iVar7 + 8) == fVar5)) {
    FUN_00372d94(iVar7,*(undefined4 *)(param_1 + 0x448));
  }
  fVar10 = DAT_003f59b0;
  FUN_003591e4(*(float *)(iVar9 + 0x28) + DAT_003f59b0,*(float *)(iVar9 + 0x2c) + DAT_003f59b0,
               *(float *)(iVar9 + 0x30) + DAT_003f59b0,param_1 + 0x498,0x75,0x7f,0x7f,0xff,0);
  FUN_003591e4(*(float *)(iVar9 + 0x28) - fVar10,*(float *)(iVar9 + 0x2c) - fVar10,
               *(float *)(iVar9 + 0x30) - fVar10,param_1 + 0x4b4,0x75,0x7f,0x7f,0xff,0);
  FUN_0036e168(fVar5,fVar3,DAT_003f59b4,uVar4,param_1 + 0xc4);
  return;
}
