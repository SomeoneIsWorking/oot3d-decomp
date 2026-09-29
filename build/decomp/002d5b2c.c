// OoT3D decomp @ 002d5b2c  name=FUN_002d5b2c  size=940

void FUN_002d5b2c(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *unaff_r11;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_78 [48];
  float local_48 [3];

  fVar5 = DAT_002d5e5c;
  fVar13 = DAT_002d5e58;
  fVar12 = DAT_002d5e54;
  piVar4 = DAT_002d5e50;
  fVar3 = DAT_002d5e48;
  fVar2 = DAT_002d5e44;
  puVar8 = (undefined4 *)(param_2 + 0x28fc);
  if (*(char *)(param_2 + 0x1a7) == '\x02') {
    if ((*(ushort *)(param_2 + 0x90) & 1) == 0) {
      if (((*(uint *)(DAT_002d5e4c + param_2) & 0x800000) == 0) &&
         (uVar7 = (uint)*(byte *)(param_2 + 0x227f), uVar7 != 0)) {
        iVar6 = (int)*(short *)(*DAT_002d5e50 + 0x110);
        fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
        if ((int)uVar7 < (int)(DAT_002d5e54 / fVar9 + DAT_002d5e58)) {
          fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
          fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
          iVar11 = (int)(DAT_002d5e54 / fVar10 + DAT_002d5e58);
          if ((int)(DAT_002d5e54 / fVar9 + DAT_002d5e58) + -5 < (int)uVar7) {
            fVar12 = (float)VectorSignedToFloat(iVar11 - uVar7,(byte)(in_fpscr >> 0x15) & 3);
            fVar12 = (float)VectorSignedToFloat((int)(fVar12 * DAT_002d5e60),
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar12 = fVar12 * DAT_002d5e5c;
            fVar13 = *(float *)(param_2 + 0x2908) - fVar12;
            if (DAT_002d5e64 < (int)ABS(fVar13)) {
              fVar12 = fVar12 + fVar13 * *(float *)(DAT_002d5e40 + 0x10c);
            }
LAB_002d5d90:
            *(float *)(param_2 + 0x2908) = fVar12;
          }
          else if ((int)uVar7 < iVar11) {
            fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
            if ((int)(DAT_002d5e54 / fVar9 + DAT_002d5e58) / 2 < (int)uVar7) {
              fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
              uVar7 = (int)(DAT_002d5e54 / fVar9 + DAT_002d5e58) / 2;
            }
            fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
            fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
            iVar6 = (int)(DAT_002d5e54 / fVar10 + DAT_002d5e58);
            sVar1 = ((short)((int)(DAT_002d5e54 / fVar9 + DAT_002d5e58) / 2) - (short)uVar7) *
                    (short)((int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1e)) >> 2);
            fVar9 = (float)FUN_00338f60((int)(short)(sVar1 * sVar1));
            fVar9 = (float)VectorSignedToFloat((int)(DAT_002d5e68 + fVar9 * DAT_002d5e68),
                                               (byte)(in_fpscr >> 0x15) & 3);
            fVar14 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
            fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar12 = (float)VectorSignedToFloat((int)(fVar12 / fVar10 + fVar13) / 2,
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar13 = (float)VectorSignedToFloat((int)(fVar9 + DAT_002d5e6c),
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar12 = (float)VectorSignedToFloat((int)((fVar2 / fVar12) * fVar14 * fVar13),
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar12 = fVar12 * fVar5;
            goto LAB_002d5d90;
          }
          *puVar8 = *(undefined4 *)(param_2 + 0x28);
          *(undefined4 *)(param_2 + 0x2900) = *(undefined4 *)(param_2 + 0x2c);
          *(undefined4 *)(param_2 + 0x2904) = *(undefined4 *)(param_2 + 0x30);
          puVar8 = (undefined4 *)(param_2 + 0x28);
          goto LAB_002d5dec;
        }
      }
LAB_002d5de8:
      *(float *)(param_2 + 0x2908) = DAT_002d5e48;
      puVar8 = unaff_r11;
      goto LAB_002d5dec;
    }
  }
  else if ((*(ushort *)(param_2 + 0x90) & 1) == 0) goto LAB_002d5de8;
  fVar12 = *(float *)(param_2 + 0x2908) - *(float *)(DAT_002d5e40 + 0x110);
  *(float *)(param_2 + 0x2908) = fVar12;
  if (fVar12 <= fVar3) {
    fVar12 = fVar3;
  }
  *(float *)(param_2 + 0x2908) = fVar12;
LAB_002d5dec:
  if (*(float *)(param_2 + 0x2908) != fVar3) {
    local_48[0] = *DAT_002d5e70;
    local_48[1] = DAT_002d5e70[1];
    local_48[2] = DAT_002d5e70[2];
    fVar13 = local_48[param_3];
    iVar6 = FUN_003695f8();
    fVar12 = DAT_002d5e74;
    if ((iVar6 == 0) && (param_3 != 2)) {
      *(float *)(*(int *)(*(int *)(param_2 + 0x28f8) + 0xc) + 0xc) = DAT_002d5e74;
    }
    else {
      *(float *)(*(int *)(*(int *)(param_2 + 0x28f8) + 0xc) + 0xc) = fVar3;
    }
    FUN_003679d0(*puVar8,(float)puVar8[1] + fVar12,puVar8[2],auStack_78,DAT_002d5f10);
    FUN_00371348(DAT_002d5f14,DAT_002d5f14,DAT_002d5f14,auStack_78,1);
    FUN_003695cc(fVar2,fVar2,fVar2,*(float *)(param_2 + 0x2908) * fVar13,
                 *(undefined4 *)(param_2 + 0x28f8),0,4,2);
    *(undefined1 *)(*(int *)(param_2 + 0x28f8) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_2 + 0x28f8),auStack_78);
    FUN_00372170(*(undefined4 *)(param_2 + 0x28f8),0);
  }
  return;
}
