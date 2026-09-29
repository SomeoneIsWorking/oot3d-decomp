// OoT3D decomp @ 00122b7c  name=FUN_00122b7c  size=1116

void FUN_00122b7c(int param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;

  fVar8 = DAT_00122e8c;
  fVar18 = DAT_00122e88;
  uVar7 = DAT_00122e84;
  uVar6 = DAT_00122e80;
  uVar5 = DAT_00122e7c;
  fVar13 = DAT_00122e78;
  fVar19 = DAT_00122e74;
  uVar2 = *(ushort *)(param_1 + 0x206);
  if (*(char *)(param_1 + 0x203) == '\0') {
    *(float *)(param_1 + 0x24c) = DAT_00122e8c;
    *(undefined4 *)(param_1 + 0x250) = DAT_00122e90;
    uVar14 = DAT_00122e94;
    *(float *)(param_1 + 0x254) = fVar19;
    *(undefined4 *)(param_1 + 600) = uVar14;
    *(float *)(param_1 + 0x25c) = fVar8;
    *(undefined1 *)(param_1 + 0x203) = 1;
LAB_00122bec:
    FUN_0036e168(*(undefined4 *)(param_1 + 600),fVar18,fVar19,uVar6,param_1 + 0x254);
    fVar12 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0x250),fVar18,
                                 *(undefined4 *)(param_1 + 0x254),uVar6,param_1 + 0x24c);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar12 == fVar8) << 0x1e;
    *(short *)(param_1 + 0x206) =
         *(short *)(param_1 + 0x206) + (short)(int)(*(float *)(param_1 + 0x24c) * fVar13);
    if (!SUB41(in_fpscr >> 0x1e,0)) goto LAB_00122c50;
    *(undefined2 *)(param_1 + 0x264) = 0;
    *(undefined1 *)(param_1 + 0x203) = 2;
LAB_00122c5c:
    *(short *)(param_1 + 0x206) =
         *(short *)(param_1 + 0x206) + (short)(int)(*(float *)(param_1 + 0x24c) * fVar13);
    uVar3 = *(ushort *)(param_1 + 0x264);
    *(ushort *)(param_1 + 0x264) = uVar3 + 1;
    uVar14 = DAT_00122ea0;
    if (uVar3 < 0x3d) goto LAB_00122ff8;
    *(float *)(param_1 + 0x24c) = *(float *)(param_1 + 0x21c) - fVar18;
    *(undefined4 *)(param_1 + 0x250) = DAT_00122e98;
    *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x228) - fVar18;
    *(undefined4 *)(param_1 + 600) = DAT_00122e9c;
    FUN_00375bcc(param_1,uVar14);
    *(undefined1 *)(param_1 + 0x203) = 3;
LAB_00122cd4:
    uVar14 = DAT_00122ea4;
    *(short *)(param_1 + 0x206) = *(short *)(param_1 + 0x206) + 0x4000;
    fVar13 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0x250),uVar7,uVar14,uVar6,param_1 + 0x24c
                                );
    FUN_0036e168(*(undefined4 *)(param_1 + 600),uVar7,uVar14,uVar6,param_1 + 0x254);
    *(float *)(param_1 + 0x218) = *(float *)(param_1 + 0x254) + fVar18;
    *(float *)(param_1 + 0x21c) = *(float *)(param_1 + 0x24c) + fVar18;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar8) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) goto LAB_00122d5c;
    *(undefined4 *)(param_1 + 0x24c) = DAT_00122ea8;
    *(undefined4 *)(param_1 + 0x250) = DAT_00122eac;
    *(undefined1 *)(param_1 + 0x203) = 4;
LAB_00122d68:
    fVar13 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0x250),uVar7,DAT_00122eb0,uVar5,
                                 param_1 + 0x24c);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar8) << 0x1e;
    sVar10 = *(short *)(param_1 + 0x206) + (short)(int)*(float *)(param_1 + 0x24c);
    iVar11 = (int)sVar10;
    *(short *)(param_1 + 0x206) = sVar10;
    if (!SUB41(in_fpscr >> 0x1e,0)) goto LAB_00122dcc;
    if (0 < iVar11) {
      iVar11 = iVar11 + -0x10000;
    }
    uVar14 = VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x24c) = uVar14;
    *(float *)(param_1 + 0x250) = fVar8;
    *(undefined1 *)(param_1 + 0x203) = 5;
LAB_00122dd8:
    iVar11 = (int)*(short *)(param_1 + 0x206);
    if (0 < iVar11) {
      iVar11 = iVar11 + -0xffff;
    }
    uVar14 = VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x24c) = uVar14;
    fVar13 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0x250),uVar7,uVar5,uVar6,param_1 + 0x24c)
    ;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar8) << 0x1e;
    *(short *)(param_1 + 0x206) = (short)(int)*(float *)(param_1 + 0x24c);
    if (!SUB41(in_fpscr >> 0x1e,0)) goto LAB_00122ebc;
    *(undefined2 *)(param_1 + 0x206) = 0;
    *(undefined2 *)(param_1 + 0x264) = 0;
    uVar14 = DAT_00122eb8;
    *(float *)(param_1 + 0x24c) = *(float *)(param_1 + 0x21c) - fVar18;
    *(float *)(param_1 + 0x250) = fVar8;
    *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x218) - fVar18;
    uVar5 = DAT_00122eb4;
    *(float *)(param_1 + 600) = fVar8;
    *(undefined4 *)(param_1 + 0x25c) = uVar5;
    *(float *)(param_1 + 0x260) = fVar8;
    FUN_00375bcc(param_1,uVar14);
    *(undefined1 *)(param_1 + 0x203) = 6;
  }
  else {
    if (*(char *)(param_1 + 0x203) == '\x01') goto LAB_00122bec;
LAB_00122c50:
    if (*(char *)(param_1 + 0x203) == '\x02') goto LAB_00122c5c;
    if (*(char *)(param_1 + 0x203) == '\x03') goto LAB_00122cd4;
LAB_00122d5c:
    if (*(char *)(param_1 + 0x203) == '\x04') goto LAB_00122d68;
LAB_00122dcc:
    if (*(char *)(param_1 + 0x203) == '\x05') goto LAB_00122dd8;
LAB_00122ebc:
    if (*(char *)(param_1 + 0x203) != '\x06') goto LAB_00122ff8;
  }
  fVar15 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0x250),uVar7,fVar19,uVar6,param_1 + 0x24c);
  fVar16 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 600),uVar7,fVar19,uVar6,param_1 + 0x254);
  fVar17 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0x260),uVar7,DAT_00123020,uVar6,
                               param_1 + 0x25c);
  fVar12 = DAT_0012302c;
  uVar9 = DAT_00123024;
  *(float *)(param_1 + 0x218) = *(float *)(param_1 + 0x254) + fVar18;
  fVar13 = DAT_00123028;
  *(float *)(param_1 + 0x21c) = *(float *)(param_1 + 0x24c) + fVar18;
  lVar4 = (ulonglong)(uint)*(ushort *)(param_1 + 0x264) * (ulonglong)uVar9;
  uVar1 = (uint)((ulonglong)lVar4 >> 0x23);
  iVar11 = (uint)*(ushort *)(param_1 + 0x264) + uVar1 * -10;
  fVar18 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
  fVar18 = (float)FUN_003727f0(fVar18 * fVar19 * fVar13 * fVar12,iVar11,uVar1 * -5,(int)lVar4);
  *(float *)(param_1 + 0x218) = *(float *)(param_1 + 0x218) + fVar18 * *(float *)(param_1 + 0x25c);
  lVar4 = (ulonglong)(uint)*(ushort *)(param_1 + 0x264) * (ulonglong)uVar9;
  uVar1 = (uint)((ulonglong)lVar4 >> 0x23);
  iVar11 = (uint)*(ushort *)(param_1 + 0x264) + uVar1 * -10;
  fVar18 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
  fVar19 = (float)FUN_003727f0(fVar18 * fVar19 * fVar13 * fVar12,iVar11,uVar1 * -5,(int)lVar4);
  *(float *)(param_1 + 0x21c) = *(float *)(param_1 + 0x21c) + fVar19 * *(float *)(param_1 + 0x25c);
  *(short *)(param_1 + 0x264) = *(short *)(param_1 + 0x264) + 1;
  uVar5 = DAT_00123030;
  if ((fVar15 == fVar8 && fVar16 == fVar8) && fVar17 == fVar8) {
    *(undefined1 *)(param_1 + 0x200) = 0;
    *(undefined4 *)(param_1 + 0x1fc) = uVar5;
  }
LAB_00122ff8:
  if (uVar2 <= *(ushort *)(param_1 + 0x206)) {
    return;
  }
  FUN_00375bcc(param_1,DAT_00123034);
  return;
}
