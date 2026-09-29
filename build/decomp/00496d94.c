// OoT3D decomp @ 00496d94  name=FUN_00496d94  size=768

void FUN_00496d94(int param_1,undefined4 param_2)

{
  short sVar1;
  uint *puVar2;
  uint *puVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;

  if (*(char *)(param_1 + 0x1749) == '\x02') {
    FUN_0036b4ec(param_1 + 0x254,param_2);
  }
  uVar8 = DAT_00497094;
  if ((*(uint *)(param_1 + 0x1710) & 0x8000000) == 0) {
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00497098 + 0x6a),
                                        (byte)(in_fpscr >> 0x15) & 3);
    FUN_003705a0(DAT_00497094,fVar10 * DAT_0049709c,param_1 + 0x221c);
  }
  else {
    FUN_0034b17c(param_1);
    FUN_0034ad70(uVar8,param_1,param_1 + 0x221c,(int)*(short *)(param_1 + 0xbe));
  }
  if (*(char *)(param_1 + 0x1749) == '\x02') {
    uVar5 = FUN_0034dd2c(param_1);
    bVar9 = uVar5 == 0;
    if (bVar9) {
      uVar5 = *(uint *)(param_1 + 0x1710);
    }
    if (!bVar9 || (uVar5 & 0x1000000) != 0) {
      FUN_0034cc78(param_1,param_2);
    }
  }
  if ((*(char *)(param_1 + 0x12bc) == '\0') &&
     (*(byte *)(param_1 + 0x1749) != 0 && *(byte *)(param_1 + 0x1749) < 4)) {
    iVar6 = FUN_00349574(param_1);
    bVar9 = iVar6 == 0;
    if (bVar9) {
      iVar6 = *(int *)(param_1 + 0x16f8);
    }
    if (bVar9 && iVar6 == 0) {
      if (*(char *)(param_1 + 0x1749) == '\x02') {
        iVar6 = FUN_0034dd2c(param_1);
        if (iVar6 == 0) {
          uVar8 = 10;
        }
        else if (*(int *)(DAT_004970a0 + 4) == 0) {
          uVar8 = 7;
        }
        else {
          uVar8 = 0xb;
        }
      }
      else {
        uVar8 = 6;
      }
      uVar7 = FUN_0036c5bc(param_2,0);
      iVar6 = FUN_00332284(uVar7,uVar8);
      puVar3 = DAT_004970a8;
      puVar2 = DAT_004970a4;
      if (iVar6 != 0) {
        if (*(char *)(param_1 + 0x1749) == '\x02') {
          if (((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & (*DAT_004970a4 | *DAT_004970a8 | 0x100))
               != 0) || ((*(uint *)(param_1 + 0x1710) & DAT_004970ac) != 0)) goto LAB_00496fa8;
          iVar6 = FUN_0033bd6c(param_1);
          if (iVar6 == 0) {
            uVar5 = *(uint *)(param_1 + 0x1710);
            bVar9 = (uVar5 & 0x1000000) == 0;
            if (!bVar9) {
              uVar5 = (uint)*(ushort *)(param_1 + 0x2218);
            }
            if (bVar9 || uVar5 == 0) goto LAB_00496fa8;
          }
        }
        if ((*(char *)(param_1 + 0x1749) != '\x01') ||
           (((iVar6 = FUN_00349504(), iVar6 == 0 && (iVar6 = FUN_003494f4(), iVar6 == 0)) &&
            ((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & (*puVar2 | *puVar3 | 0x2d00)) == 0)))) {
          if (((*(short *)(param_1 + 0x2238) == 0) ||
              (sVar1 = *(short *)(param_1 + 0x2238) + -1, *(short *)(param_1 + 0x2238) = sVar1,
              sVar1 == 0)) || (*(char *)(param_1 + 0x1749) != '\x02')) {
            iVar6 = FUN_0034d4b0(param_1);
            if (iVar6 == 0) {
              uVar4 = FUN_002c036c(param_2,param_1,0,0,0);
              *(undefined2 *)(param_1 + 0xbe) = uVar4;
            }
            else {
              *(ushort *)(param_1 + 0x174a) = *(ushort *)(param_1 + 0x174a) | 0x43;
              FUN_00306f04();
              FUN_002c0804();
              *(undefined2 *)(param_1 + 0x28f0) = *(undefined2 *)(param_1 + 0x48);
              *(undefined2 *)(param_1 + 0x28f2) = *(undefined2 *)(param_1 + 0x4a);
              *(undefined2 *)(param_1 + 0x28f4) = *(undefined2 *)(param_1 + 0x4c);
            }
          }
          goto LAB_00497080;
        }
      }
    }
  }
LAB_00496fa8:
  FUN_003551b4(DAT_004970b0,param_1,param_2);
  FUN_0037547c(DAT_004970bc,0,4,DAT_004970b8,DAT_004970b8,DAT_004970b4);
LAB_00497080:
  *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
  return;
}
