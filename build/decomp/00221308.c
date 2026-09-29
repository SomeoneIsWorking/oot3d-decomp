// OoT3D decomp @ 00221308  name=FUN_00221308  size=1312

void FUN_00221308(int param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r12;
  uint extraout_r12_00;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;

  FUN_003510b0(param_1,DAT_002217b4);
  puVar2 = DAT_002217b8;
  local_50 = (float)(param_1 + 0x2b0);
  *(byte *)(param_1 + 0x1c0) = (byte)(((uint)*(ushort *)(param_1 + 0x1c) << 0x14) >> 0x1c);
  local_58 = (float)(param_1 + 0x2ac);
  *(byte *)(param_1 + 0x1c1) = (byte)((ushort)*(undefined2 *)(param_1 + 0x1c) >> 0xc);
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0x3f;
  *puVar2 = 0;
  local_54 = 2.8026e-45;
  local_4c = 4.2039e-45;
  local_48 = 0.0;
  FUN_00372f38(param_1,param_2,param_1 + 0x2a0,4,param_1 + 0x2a4,5,param_1 + 0x2a8,1);
  if (*(byte *)(param_1 + 0x1c0) < 2) {
    FUN_003532e8(param_1,0);
    iVar3 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
    if (iVar3 == 0) {
      local_38 = 0.0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x30;
      local_38 = (float)FUN_00353fd4(param_1,param_2,0);
      uVar10 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_38);
      *(undefined4 *)(param_1 + 0x1a4) = uVar10;
      if (*(char *)(param_1 + 0x1c0) == '\0') {
        uVar7 = (uint)*(byte *)(param_1 + 0x1c1);
        if (uVar7 != 3) {
          uVar11 = VectorSignedToFloat((int)*(short *)(DAT_002217ec + uVar7 * 2),
                                       (byte)(in_fpscr >> 0x15) & 3);
          uVar10 = VectorSignedToFloat((int)*(short *)(DAT_002217f0 + uVar7 * 2),
                                       (byte)(in_fpscr >> 0x15) & 3);
          iVar3 = FUN_0036aa20(uVar10,*(undefined4 *)(param_1 + 0x2c),uVar11,param_2 + 0x208c,
                               param_1,param_2,0x93,0,(int)*(short *)(param_1 + 0xbe),
                               (int)(short)(*(short *)(param_1 + 0xc0) + -0x4000),
                               (int)(short)(*(short *)(param_1 + 0x1c) +
                                            (ushort)*(byte *)(param_1 + 0x1c1) * 0x1000 + 0x1000));
          if (iVar3 == 0) {
LAB_00221804:
            FUN_00374428(param_1);
            return;
          }
          if (*(char *)(param_1 + 0x1c1) == '\0') {
            iVar3 = *(int *)(*(int *)(param_1 + 0x128) + 0x128);
            if (iVar3 == 0) goto LAB_00221804;
            iVar3 = *(int *)(iVar3 + 0x128);
            if (iVar3 == 0) {
              FUN_00374428(param_1);
              param_1 = *(int *)(param_1 + 0x128);
              goto LAB_00221830;
            }
            *(int *)(param_1 + 0x124) = iVar3;
            *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x128) + 0x128) + 0x128) + 0x128) =
                 param_1;
          }
        }
      }
      *(undefined4 *)(param_1 + 0x2c) = DAT_00221894;
      uVar11 = FUN_0036e81c(param_2 + 0xa98,param_1 + 0x7c,&local_3c,param_1,param_1 + 0x28);
      uVar10 = DAT_00221898;
      *(undefined4 *)(param_1 + 0x84) = uVar11;
      *(undefined4 *)(param_1 + 0x1bc) = uVar10;
      return;
    }
  }
  else {
    FUN_0034f910(param_2,param_1 + 0x1c8);
    FUN_0034f760(param_2,param_1 + 0x1c8,param_1,puVar2 + 0x24,param_1 + 0x1e8);
    iVar3 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
    if (iVar3 == 0) {
      fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      iVar3 = DAT_002217c8;
      fVar13 = DAT_002217bc;
      if (*(char *)(param_1 + 0x1c0) == '\x04') {
        fVar8 = fVar8 * DAT_002217c0;
        fVar9 = fVar9 * DAT_002217c0;
        fVar13 = DAT_002217c4;
      }
      iVar6 = 0;
      uVar7 = extraout_r12;
      if (0 < *(int *)(DAT_002217c8 + 8)) {
        do {
          iVar4 = *(int *)(iVar3 + 0xc) + iVar6 * 0x3c;
          local_58 = *(float *)(iVar4 + 0x20) * fVar8 + fVar9 * *(float *)(iVar4 + 0x18) +
                     *(float *)(param_1 + 8);
          local_54 = *(float *)(param_1 + 0xc) + fVar13 * *(float *)(iVar4 + 0x1c);
          local_50 = (*(float *)(param_1 + 0x10) + fVar9 * *(float *)(iVar4 + 0x20)) -
                     fVar8 * *(float *)(iVar4 + 0x18);
          local_4c = *(float *)(iVar4 + 0x2c) * fVar8 + fVar9 * *(float *)(iVar4 + 0x24) +
                     *(float *)(param_1 + 8);
          local_48 = *(float *)(param_1 + 0xc) + fVar13 * *(float *)(iVar4 + 0x28);
          local_44 = (*(float *)(param_1 + 0x10) + fVar9 * *(float *)(iVar4 + 0x2c)) -
                     fVar8 * *(float *)(iVar4 + 0x24);
          local_40 = *(float *)(iVar4 + 0x38) * fVar8 + fVar9 * *(float *)(iVar4 + 0x30) +
                     *(float *)(param_1 + 8);
          local_3c = *(float *)(param_1 + 0xc) + fVar13 * *(float *)(iVar4 + 0x34);
          local_38 = (*(float *)(param_1 + 0x10) + fVar9 * *(float *)(iVar4 + 0x38)) -
                     fVar8 * *(float *)(iVar4 + 0x30);
          FUN_00362434(param_1 + 0x1c8,iVar6,&local_58,&local_4c,&local_40);
          iVar6 = iVar6 + 1;
          uVar7 = extraout_r12_00;
        } while (iVar6 < *(int *)(iVar3 + 8));
      }
      bVar1 = *(byte *)(param_1 + 0x1c0);
      if (bVar1 != 4) {
        uVar7 = (uint)*(byte *)(param_1 + 0x1c1);
      }
      if (bVar1 != 4 && uVar7 != 2) {
        uVar5 = uVar7;
        if (bVar1 != 2) {
          uVar5 = uVar7 + 2;
        }
        uVar12 = VectorSignedToFloat((int)*(short *)(DAT_002217cc + uVar7 * 2),
                                     (byte)(in_fpscr >> 0x15) & 3);
        uVar11 = VectorSignedToFloat((int)*(short *)(DAT_002217d0 + uVar7 * 2),
                                     (byte)(in_fpscr >> 0x15) & 3);
        uVar10 = VectorSignedToFloat((int)*(short *)(DAT_002217d4 + uVar5 * 2),
                                     (byte)(in_fpscr >> 0x15) & 3);
        iVar3 = FUN_0036aa20(uVar10,uVar11,uVar12,param_2 + 0x208c,param_1,param_2,0x93,0,
                             (int)(short)(*(short *)(param_1 + 0xbe) + -0x8000),0,
                             (int)(short)((ushort)bVar1 * 0x100 + 0x1000 +
                                         *(short *)(param_1 + 0x1c) + (short)uVar7 * 0x1000));
        if (iVar3 == 0) {
LAB_00221830:
          FUN_00374428(param_1);
          return;
        }
        if (*(char *)(param_1 + 0x1c1) == '\0') {
          iVar3 = *(int *)(*(int *)(param_1 + 0x128) + 0x128);
          if (iVar3 == 0) goto LAB_00221830;
          *(int *)(param_1 + 0x124) = iVar3;
          *(int *)(*(int *)(*(int *)(param_1 + 0x128) + 0x128) + 0x128) = param_1;
        }
      }
      *(undefined2 *)(param_1 + 0x1c4) = 0;
      *(undefined1 *)(DAT_002217d8 + param_2) = 0;
      uVar10 = DAT_002217dc;
      if (*(char *)(param_1 + 0x1c0) == '\x04') {
        *puVar2 = 0;
        *(undefined4 *)(param_1 + 0x1bc) = uVar10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  FUN_00374428(param_1);
  return;
}
