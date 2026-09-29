// OoT3D decomp @ 001cde74  name=FUN_001cde74  size=308

void FUN_001cde74(int param_1,undefined4 param_2)

{
  short sVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint in_fpscr;
  float fVar14;

  iVar7 = FUN_0036b4ec(param_1 + 0x254);
  iVar11 = DAT_001cdfb0;
  if (iVar7 != 0) {
    if (*(char *)(param_1 + 0x2237) == '\0') {
      if ((*(short *)(param_1 + 0x2238) == 0) ||
         (sVar1 = *(short *)(param_1 + 0x2238) + -1, *(short *)(param_1 + 0x2238) = sVar1,
         sVar1 == 0)) {
        *(float *)(param_1 + 0x29c) = *(float *)(param_1 + 0x2a0) - DAT_001cdfa8;
        *(undefined1 *)(param_1 + 0x2237) = 1;
      }
      return;
    }
    FUN_0036055c(param_2,param_1,DAT_001cdfac,1);
    uVar8 = FUN_0034d628(param_1);
    FUN_003604f0(param_1 + 0x254,param_2,uVar8);
    *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
    return;
  }
  if (*(int *)(DAT_001cdfb0 + 4) == 0) {
    iVar9 = FUN_0036b1e0(DAT_001cdfb4,param_1 + 0x254);
    uVar6 = DAT_00360cc0;
    iVar5 = DAT_00360cbc;
    iVar7 = DAT_00360cb8;
    uVar8 = DAT_00360cb4;
    if (iVar9 != 0) {
      if (*(char *)(param_1 + 2) != '\x02') {
        FUN_0037547c(DAT_001cdfb8,param_1 + 0x28,4,DAT_0036aee8 + 0x60);
        return;
      }
      FUN_0036f59c(param_1,DAT_001cdfb8 + (uint)*(ushort *)(*(int *)(DAT_001cdfbc + param_1) + 0xf4)
                  );
      return;
    }
    piVar13 = DAT_001cdfc0;
    if (*(int *)(iVar11 + 4) == 0) {
      do {
        uVar10 = (uint)(short)piVar13[1];
        if ((int)uVar10 < 0) {
          uVar10 = -uVar10;
        }
        uVar12 = uVar10 & 0x7800;
        fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0x7ff,(byte)(in_fpscr >> 0x15) & 3);
        iVar11 = FUN_0036b1e0(ABS(fVar14),param_1 + 0x254);
        if (iVar11 != 0) {
          if (uVar12 == 0x800) {
            FUN_0036f59c(param_1,*piVar13);
          }
          else if (uVar12 == 0x1000) {
            FUN_0036f59c(param_1,*(int *)(param_1 + 0x228c) + *piVar13);
          }
          else if (uVar12 == 0x1800) {
            FUN_0036f59c(param_1,*(int *)(param_1 + 0x228c) +
                                 (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6) + *piVar13);
          }
          else if (uVar12 == 0x2000) {
            if (*(char *)(param_1 + 2) == '\x02') {
              FUN_0036f59c(param_1,*piVar13 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
            }
            else {
              FUN_0036aeb4(param_1 + 0x28);
            }
          }
          else if (uVar12 == 0x2800) {
            FUN_0034bd3c(param_1);
          }
          else if (uVar12 == 0x3000) {
            cVar3 = *(char *)(param_1 + 0x1a7);
            uVar4 = uVar8;
joined_r0x00360c58:
            iVar11 = iVar7;
            if (cVar3 != '\x01') {
              iVar11 = *(int *)(param_1 + 0x228c) +
                       (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6) + 0x1000001;
            }
            FUN_0032d700(uVar4,param_1 + 0x28,iVar11);
          }
          else if (uVar12 == 0x3800) {
            iVar11 = DAT_00360cc4;
            if (*(char *)(param_1 + 0x1a7) != '\x01') {
              cVar3 = *(char *)(iVar5 + 0x80);
              iVar11 = *(int *)(param_1 + 0x228c) +
                       (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6) + 0x1000011;
              if ((cVar3 == ';' || cVar3 == '<') || cVar3 == '=') {
                FUN_0036f59c(param_1,DAT_00360cc8);
              }
            }
            FUN_0036f59c(param_1,iVar11);
          }
          else {
            if (uVar12 == 0x4000) {
              cVar3 = *(char *)(param_1 + 0x1a7);
              uVar4 = uVar6;
              goto joined_r0x00360c58;
            }
            if (uVar12 == 0x4800) {
              FUN_0032d700(uVar6,param_1 + 0x28,
                           *(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6) + 0x100000b);
            }
          }
        }
        piVar2 = piVar13 + 1;
        piVar13 = piVar13 + 2;
        if ((short)*piVar2 < 0) {
          return;
        }
      } while( true );
    }
  }
  *(undefined4 *)(param_1 + 0x228c) = 2;
  FUN_00360a1c(param_1,DAT_001cdfc4);
  return;
}
