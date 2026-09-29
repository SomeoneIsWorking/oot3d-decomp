// OoT3D decomp @ 0033befc  name=FUN_0033befc  size=512

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0033befc(float param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;

  fVar10 = DAT_00485388;
  fVar8 = DAT_0048537c;
  fVar7 = DAT_0036b80c;
  fVar6 = DAT_0036b804;
  fVar11 = DAT_0033c100;
  piVar1 = DAT_0033c0fc;
  if (param_6 != 0) {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_3 + 0x221c) == DAT_0033c100) << 0x1e;
    if (SUB41(in_fpscr >> 0x1e,0)) {
      iVar3 = param_3 + 0x254;
      iVar9 = *DAT_0036b7fc;
      switch(*(undefined1 *)(param_3 + 0x2c5)) {
      default:
        goto switchD_0036b538_caseD_0;
      case 1:
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar11 = *(float *)(param_3 + 0x290) + *(float *)(param_3 + 0x294) * fVar11 * DAT_0036b800;
        *(float *)(param_3 + 0x290) = fVar11;
        fVar6 = *(float *)(param_3 + 0x2a0);
        if (fVar11 < fVar7) {
          fVar11 = fVar11 + fVar6;
LAB_0036b5a8:
          *(float *)(param_3 + 0x290) = fVar11;
        }
        else if (fVar6 <= fVar11) {
          fVar11 = fVar11 - fVar6;
          goto LAB_0036b5a8;
        }
        FUN_002bb34c(iVar3,param_2);
        param_2 = 0;
switchD_0036b538_caseD_0:
        return param_2;
      case 2:
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar6 = *(float *)(param_3 + 0x29c);
        if (*(float *)(param_3 + 0x290) == fVar6) {
          FUN_002bb34c(iVar3,param_2);
          return 1;
        }
        fVar11 = *(float *)(param_3 + 0x290) + *(float *)(param_3 + 0x294) * fVar11 * DAT_0036b800;
        *(float *)(param_3 + 0x290) = fVar11;
        if (fVar7 < (fVar11 - fVar6) * *(float *)(param_3 + 0x294)) {
          *(float *)(param_3 + 0x290) = fVar6;
        }
        else {
          fVar6 = *(float *)(param_3 + 0x2a0);
          if (fVar11 < fVar7) {
            fVar11 = fVar11 + fVar6;
          }
          else {
            if (fVar11 < fVar6) goto LAB_0036b650;
            fVar11 = fVar11 - fVar6;
          }
          *(float *)(param_3 + 0x290) = fVar11;
        }
LAB_0036b650:
        FUN_002bb34c(iVar3,param_2);
        return 0;
      case 3:
        fVar8 = *(float *)(param_3 + 0x288);
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar11 = fVar8 - *(float *)(param_3 + 0x28c) * fVar11 * DAT_0036b800;
        *(float *)(param_3 + 0x288) = fVar11;
        if (fVar11 <= fVar7) {
          if (*(byte *)(param_3 + 0x2c4) < 2) {
            *(undefined1 *)(param_3 + 0x2c5) = 1;
          }
          else {
            *(undefined1 *)(param_3 + 0x2c5) = 2;
          }
          *(float *)(param_3 + 0x288) = fVar7;
        }
        uVar4 = FUN_00324154(param_2 + 0x3410,iVar3);
        FUN_002c3814(fVar6 - *(float *)(param_3 + 0x288) / fVar8,uVar4,
                     *(undefined1 *)(param_3 + 0x2c8),*(undefined4 *)(param_3 + 0x2cc),
                     *(undefined4 *)(param_3 + 0x2d0));
        return 0;
      case 4:
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar11 = *(float *)(param_3 + 0x290) + *(float *)(param_3 + 0x294) * fVar11 * DAT_0036b808;
        *(float *)(param_3 + 0x290) = fVar11;
        if (fVar7 <= fVar11) {
          fVar6 = *(float *)(param_3 + 0x2a0);
          if (fVar11 < fVar6) goto LAB_0036b86c;
          goto LAB_0036b864;
        }
LAB_0036b848:
        fVar11 = fVar11 + *(float *)(param_3 + 0x2a0);
        break;
      case 5:
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar11 = *(float *)(param_3 + 0x290) + *(float *)(param_3 + 0x294) * fVar11 * DAT_0036b808;
        *(float *)(param_3 + 0x290) = fVar11;
        fVar6 = *(float *)(param_3 + 0x298);
        if (fVar6 <= fVar11) {
          if (*(float *)(param_3 + 0x29c) <= fVar11) {
            *(float *)(param_3 + 0x290) = (fVar11 - *(float *)(param_3 + 0x29c)) + fVar6;
          }
        }
        else {
          *(float *)(param_3 + 0x290) = (fVar11 - fVar6) + *(float *)(param_3 + 0x29c);
        }
        goto LAB_0036b86c;
      case 6:
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if (*(float *)(param_3 + 0x290) == *(float *)(param_3 + 0x29c)) {
          FUN_003204a4(iVar3,*(undefined4 *)(param_3 + 0x284),*(undefined1 *)(param_3 + 0x2c8),
                       *(undefined4 *)(param_3 + 0x2cc));
          FUN_002bb1cc(iVar3);
          return 1;
        }
        fVar11 = *(float *)(param_3 + 0x290) + *(float *)(param_3 + 0x294) * fVar11 * DAT_0036b808;
        *(float *)(param_3 + 0x290) = fVar11;
        if (fVar7 < (fVar11 - *(float *)(param_3 + 0x29c)) * *(float *)(param_3 + 0x294)) {
          *(float *)(param_3 + 0x290) = *(float *)(param_3 + 0x29c);
          goto LAB_0036b86c;
        }
        if (fVar11 < fVar7) goto LAB_0036b848;
        fVar6 = *(float *)(param_3 + 0x2a0);
        if (fVar11 < fVar6) goto LAB_0036b86c;
LAB_0036b864:
        fVar11 = fVar11 - fVar6;
        break;
      case 7:
        fVar11 = *(float *)(param_3 + 0x288);
        fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar8 = fVar11 - *(float *)(param_3 + 0x28c) * fVar8 * DAT_0036b808;
        *(float *)(param_3 + 0x288) = fVar8;
        if (fVar8 <= fVar7) {
          if (*(byte *)(param_3 + 0x2c4) < 2) {
            *(undefined1 *)(param_3 + 0x2c5) = 4;
          }
          else {
            if (*(byte *)(param_3 + 0x2c4) < 4) {
              uVar2 = 6;
            }
            else {
              uVar2 = 5;
            }
            *(undefined1 *)(param_3 + 0x2c5) = uVar2;
          }
          *(float *)(param_3 + 0x288) = fVar7;
        }
        if (*(char *)(param_3 + 0x2ca) != '\0') {
          FUN_0030f900();
          return 0;
        }
        FUN_0030f6b0(fVar6 - *(float *)(param_3 + 0x288) / fVar11,*(undefined1 *)(param_3 + 0x2c8),
                     *(undefined1 *)(param_3 + 0x2c9),*(undefined4 *)(param_3 + 0x2cc),
                     *(undefined4 *)(param_3 + 0x2cc));
        return 0;
      case 8:
        fVar6 = *(float *)(param_3 + 0x288) * DAT_0048537c;
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00485380 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar11 = *(float *)(param_3 + 0x288) - *(float *)(param_3 + 0x28c) * fVar11 * DAT_00485384;
        *(float *)(param_3 + 0x288) = fVar11;
        if (fVar11 <= fVar10) {
          if (*(byte *)(param_3 + 0x2c4) < 2) {
            *(undefined1 *)(param_3 + 0x2c5) = 4;
          }
          else {
            if (*(byte *)(param_3 + 0x2c4) < 4) {
              uVar2 = 6;
            }
            else {
              uVar2 = 5;
            }
            *(undefined1 *)(param_3 + 0x2c5) = uVar2;
          }
          *(float *)(param_3 + 0x288) = fVar10;
          fVar11 = *(float *)(param_3 + 0x288);
        }
        fVar7 = DAT_0048538c;
        iVar3 = (int)(short)(int)(fVar11 * fVar8);
        if (*(char *)(param_3 + 0x2a4) < '\0') {
          fVar11 = (float)FUN_00338f60();
          fVar11 = fVar7 - fVar11;
          fVar6 = (float)FUN_00338f60(iVar3);
          fVar6 = fVar7 - fVar6;
        }
        else {
          fVar11 = (float)FUN_002cfca0((int)(short)(int)fVar6);
          fVar6 = (float)FUN_002cfca0(iVar3);
        }
        if (fVar6 != fVar10) {
          fVar10 = fVar6 / fVar11;
        }
        if (*(char *)(param_3 + 0x2ca) == '\0') {
          FUN_0030f6b0(fVar7 - fVar10,*(undefined1 *)(param_3 + 0x2c8),
                       *(undefined1 *)(param_3 + 0x2c9),*(undefined4 *)(param_3 + 0x2cc),
                       *(undefined4 *)(param_3 + 0x2cc));
        }
        else {
          FUN_0030f900();
        }
        return 0;
      }
      *(float *)(param_3 + 0x290) = fVar11;
LAB_0036b86c:
      FUN_002bb1cc(iVar3);
      return 0;
    }
    if (param_6 == 2) goto LAB_0033c06c;
  }
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0033c0fc + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * DAT_0033c104;
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(param_4 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar7 - *(float *)(param_3 + 0x28);
  iVar3 = ((uint)*(ushort *)(param_4 + 4) - (uint)*(ushort *)(DAT_0033c108 + param_2)) + 1;
  fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_4 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = fVar8 - *(float *)(param_3 + 0x30);
  param_1 = SQRT(fVar7 * fVar7 + fVar8 * fVar8) / fVar6;
  param_5 = FUN_003758b0();
  if (param_6 == 1) {
    fVar8 = (float)VectorSignedToFloat(*(int *)(param_4 + 0x18) - *(int *)(param_4 + 0xc),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat(*(int *)(param_4 + 0x20) - *(int *)(param_4 + 0x14),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorSignedToFloat((uint)*(ushort *)(param_4 + 4) -
                                        (uint)*(ushort *)(param_4 + 2),(byte)(in_fpscr >> 0x15) & 3)
    ;
    iVar9 = (int)(((SQRT(fVar8 * fVar8 + fVar7 * fVar7) / fVar6) / fVar10) * DAT_0033c10c *
                 DAT_0033c110);
    if (iVar9 < iVar3) {
      fVar6 = (float)VectorSignedToFloat((iVar3 - iVar9) + 1,(byte)(in_fpscr >> 0x15) & 3);
      param_1 = param_1 / fVar6;
    }
    else {
      param_5 = (int)*(short *)(param_3 + 0xbe);
      param_1 = fVar11;
    }
  }
  else {
    fVar6 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    param_1 = param_1 / fVar6;
  }
LAB_0033c06c:
  *(uint *)(param_3 + 0x1714) = *(uint *)(param_3 + 0x1714) | 0x20;
  FUN_002be660(param_3,param_2);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x3a),(byte)(in_fpscr >> 0x15) & 3);
  FUN_002dd714(param_1,fVar6 * DAT_0033c114,DAT_0033c118,param_3 + 0x221c);
  FUN_00370378(param_3 + 0x2220,param_5,(int)*(short *)(*piVar1 + 0x4a));
  bVar5 = false;
  if (param_1 == fVar11) {
    bVar5 = *(float *)(param_3 + 0x221c) == fVar11;
  }
  if (bVar5) {
    FUN_002be4c4(param_3,param_2);
  }
  return 0;
}
