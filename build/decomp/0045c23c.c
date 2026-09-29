// OoT3D decomp @ 0045c23c  name=FUN_0045c23c  size=548

void FUN_0045c23c(int param_1)

{
  float *pfVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  float fVar5;
  char *pcVar6;
  int iVar7;
  short *psVar8;
  int unaff_r9;
  uint unaff_r10;
  bool bVar9;
  uint in_fpscr;
  uint uVar10;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;

  pcVar6 = DAT_0045c568;
  iVar7 = DAT_0045c564;
  fVar5 = DAT_0045c560;
  uVar10 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x7f44) == DAT_0045c560) << 0x1e;
  bVar9 = SUB41(uVar10 >> 0x1e,0);
  if (!bVar9) {
    unaff_r9 = param_1 + 0x3000;
    unaff_r10 = (uint)*(byte *)(param_1 + 0x325f);
    bVar9 = unaff_r10 == 0;
  }
  if (!bVar9) {
    cVar2 = *DAT_0045c568;
    if (cVar2 == '\0') {
      pfVar1 = (float *)(DAT_0045c568 + 8);
      if (unaff_r10 == 2) {
        *(undefined1 *)(unaff_r9 + 0x25f) = 0;
        *pfVar1 = fVar5;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    bVar3 = DAT_0045c568[4];
    sVar4 = *(short *)(DAT_0045c564 + 0x12);
    psVar8 = (short *)(param_1 + 0x3200);
    if (cVar2 != '\x01') {
      if (cVar2 == '\x02') {
        if (0 < *(short *)(param_1 + 0x31fc)) {
          *(short *)(param_1 + 0x31fc) = *(short *)(param_1 + 0x31fc) + -10;
          *(short *)(param_1 + 0x31fe) = *(short *)(param_1 + 0x31fe) + -10;
        }
        if (0 < *psVar8) {
          *psVar8 = *psVar8 + -10;
        }
        sVar4 = sVar4 + -10;
        *(short *)(iVar7 + 0x12) = sVar4;
        if (sVar4 <= (short)(ushort)bVar3) {
          *(undefined2 *)(param_1 + 0x31fc) = 0;
          *(undefined2 *)(param_1 + 0x31fe) = 0;
          *psVar8 = 0;
          *pcVar6 = '\0';
          if (unaff_r10 != 2) {
            return;
          }
          *(undefined1 *)(unaff_r9 + 0x25f) = 0;
          return;
        }
      }
      goto LAB_0045c4a4;
    }
    DAT_0045c568[1] = -0x38;
    pcVar6[2] = -0x38;
    pcVar6[3] = -1;
    *(short *)(param_1 + 0x31fc) = *(short *)(param_1 + 0x31fc) + 0x50;
    *(short *)(param_1 + 0x31fe) = *(short *)(param_1 + 0x31fe) + 0x50;
    *psVar8 = *psVar8 + 100;
    sVar4 = sVar4 + 100;
    *(short *)(iVar7 + 0x12) = sVar4;
    if (sVar4 < (short)(ushort)bVar3) goto LAB_0045c4a4;
    FUN_003665fc(0xf,0);
    pcVar6[4] = '\0';
    *pcVar6 = *pcVar6 + '\x01';
  }
  if (*pcVar6 == '\0') {
    return;
  }
LAB_0045c4a4:
  local_38 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[1],(byte)(uVar10 >> 0x15) & 3);
  local_34 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[2],(byte)(uVar10 >> 0x15) & 3);
  local_30 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[3],(byte)(uVar10 >> 0x15) & 3);
  local_2c = (float)VectorUnsignedToFloat
                              (*(ushort *)(iVar7 + 0x12) & 0xff,(byte)(uVar10 >> 0x15) & 3);
  local_38 = local_38 * DAT_0045c588;
  local_34 = local_34 * DAT_0045c588;
  local_30 = local_30 * DAT_0045c588;
  local_2c = local_2c * DAT_0045c588;
  if (((*DAT_0045c58c & 1) == 0) && (iVar7 = FUN_003679b4(DAT_0045c58c), iVar7 != 0)) {
    FUN_0036788c(DAT_0045c590);
  }
  FUN_003339e8(DAT_0045c59c,0,&local_38);
  return;
}
