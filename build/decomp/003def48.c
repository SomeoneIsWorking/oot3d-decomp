// OoT3D decomp @ 003def48  name=FUN_003def48  size=816

void FUN_003def48(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float local_34 [2];
  float local_2c;

  iVar7 = *(int *)(DAT_003df288 + param_2);
  FUN_003731e0(param_1 + 0x1a4);
  fVar8 = DAT_003df290;
  iVar6 = FUN_003736fc(DAT_003df290,DAT_003df28c,param_1 + 0x1a4);
  if (iVar6 != 0) {
    FUN_00375bcc(param_1,DAT_003df294);
  }
  fVar3 = DAT_003df298;
  if (*(short *)(param_1 + 0xa4e) < 0) {
    sVar5 = *(short *)(param_1 + 0xbe) + (ushort)*(byte *)(param_1 + 0xa4c) * 0x200;
    *(short *)(param_1 + 0xbe) = sVar5;
    *(ushort *)(param_1 + 0x36) = sVar5 + (ushort)*(byte *)(param_1 + 0xa4c) * -0x4000;
    fVar8 = (float)FUN_002cfca0();
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar8 * fVar3;
    fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar8 * fVar3;
    sVar5 = *(short *)(param_1 + 0xa4e) + 1;
    *(short *)(param_1 + 0xa4e) = sVar5;
    if (sVar5 == 0) {
      *(short *)(param_1 + 0xa4e) = (short)DAT_003df29c;
    }
    FUN_0036279c(param_1,param_2);
  }
  else {
    fVar9 = (float)FUN_00363e64(iVar7,param_1 + 8);
    sVar5 = (short)(int)((fVar9 - DAT_003df2a0) * DAT_003df2a4);
    iVar6 = (int)sVar5;
    FUN_0036c5d8(param_1,local_34,iVar7 + 0x28);
    if ((DAT_003df2a8 < (int)ABS(local_34[0])) ||
       (((uVar1 = in_fpscr & 0xfffffff | (uint)(local_2c < fVar8) << 0x1f |
                  (uint)(local_2c == fVar8) << 0x1e,
         in_fpscr = uVar1 | (uint)(NAN(local_2c) || NAN(fVar8)) << 0x1c,
         bVar2 = (byte)(uVar1 >> 0x18),
         !(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1) &&
         (iVar7 = FUN_0036f18c(param_1,0x1b00), iVar7 == 0)) &&
        (iVar7 = FUN_0036f2f8(param_1,0x2000,param_2), iVar7 == 0)))) {
      iVar6 = (int)(short)(sVar5 + -0x80);
      if (*(short *)(param_1 + 0xa4e) != 0) {
        *(short *)(param_1 + 0xa4e) = *(short *)(param_1 + 0xa4e) + -1;
      }
    }
    if ((*(int *)(param_1 + 0x98) < DAT_003df2ac) &&
       (iVar7 = FUN_0036f18c(param_1,0x6000), iVar7 == 0)) {
      if (*(short *)(param_1 + 0xa50) != 0) {
        *(short *)(param_1 + 0xa50) = *(short *)(param_1 + 0xa50) + -1;
      }
      if (*(int *)(param_1 + 0x98) < DAT_003df2b0) {
        iVar6 = (int)(short)((short)iVar6 + 0x20);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0xa50) = 0x78;
    }
    iVar6 = iVar6 + 0xcb;
    if (*(char *)(param_1 + 0xb7) == '\x01') {
      fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      iVar6 = (int)(fVar9 * DAT_003df2b4);
    }
    sVar5 = (short)iVar6 * (short)*(char *)(param_1 + 0xa4c) + *(short *)(param_1 + 0xbe);
    *(short *)(param_1 + 0xbe) = sVar5;
    *(short *)(param_1 + 0x36) = sVar5 + *(char *)(param_1 + 0xa4c) * -0x4000;
    fVar9 = (float)FUN_002cfca0();
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar9 * fVar3;
    fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar9 * fVar3;
    FUN_0036279c(param_1,param_2);
    uVar4 = DAT_003df2c8;
    if (*(short *)(param_1 + 0xa50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if (*(short *)(param_1 + 0xa4e) == 0) {
      FUN_00375c08(DAT_003df2c4,fVar8,fVar8,DAT_003df2c0,param_1 + 0x1a4,0);
      *(undefined1 *)(param_1 + 0xa4d) = 1;
      *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0xbe) + -0x8000;
      *(ushort *)(param_1 + 0xa52) = (ushort)*(byte *)(param_1 + 0xa4c) << 9;
      *(byte *)(param_1 + 0xa65) = *(byte *)(param_1 + 0xa65) & 0xfe;
      *(byte *)(param_1 + 0xad4) = *(byte *)(param_1 + 0xad4) | 1;
      *(undefined4 *)(param_1 + 0xa48) = uVar4;
      return;
    }
    if (*(char *)(param_1 + 0xa4d) != '\0') {
      sVar5 = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
      if (sVar5 < 0) {
        sVar5 = -sVar5;
      }
      if ((int)sVar5 - 0x3f01U < DAT_003df388) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
    }
  }
  return;
}
