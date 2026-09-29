// OoT3D decomp @ 00326e74  name=FUN_00326e74  size=520

void FUN_00326e74(int param_1)

{
  short *psVar1;
  char cVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  uVar4 = DAT_00327090;
  fVar3 = DAT_00327080;
  cVar2 = *(char *)(param_1 + 0x232);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      if (*(short *)(DAT_0032707c + param_1) != 0) {
        iVar9 = 0;
        do {
          iVar7 = param_1 + iVar9 * 0x2c;
          if (*(short *)(iVar7 + 0x12f4) != 0) {
            *(float *)(iVar7 + 0x12d4) = *(float *)(iVar7 + 0x12d4) + *(float *)(iVar7 + 0x12e0);
            *(float *)(iVar7 + 0x12d8) = *(float *)(iVar7 + 0x12d8) + *(float *)(iVar7 + 0x12e4);
            *(float *)(iVar7 + 0x12dc) = *(float *)(iVar7 + 0x12dc) + *(float *)(iVar7 + 0x12e8);
            *(char *)(iVar7 + 0x12f8) = *(char *)(iVar7 + 0x12f8) + -3;
            *(float *)(iVar7 + 0x12e4) = *(float *)(iVar7 + 0x12e4) - fVar3;
            *(short *)(iVar7 + 0x12ec) = *(short *)(iVar7 + 0x12ec) + 0xd00;
            *(short *)(iVar7 + 0x12ee) = *(short *)(iVar7 + 0x12ee) + 0x1100;
            *(short *)(iVar7 + 0x12f0) = *(short *)(iVar7 + 0x12f0) + 0x1500;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x12);
      }
      if (*(char *)(DAT_00327084 + param_1) != '\0') {
        return;
      }
    }
    else {
      if (cVar2 != '\x02') {
        if (cVar2 != '\x03') {
          return;
        }
        iVar9 = param_1 + 0x12d4;
        if (*(short *)(param_1 + 0x1c) == -1) {
          *(undefined4 *)(param_1 + 0xee0) = *(undefined4 *)(param_1 + 0x3c);
          *(undefined4 *)(param_1 + 0xee4) = *(undefined4 *)(param_1 + 0x40);
          *(undefined4 *)(param_1 + 0xee8) = *(undefined4 *)(param_1 + 0x44);
          FUN_0037547c(DAT_00327094,param_1 + 0xee0,4,uVar4,uVar4,DAT_0032708c);
        }
        uVar5 = DAT_00327098;
        if (*(short *)(param_1 + 0x12f6) == -1) {
          return;
        }
        do {
          if (*(short *)(iVar9 + 0x22) == 0) {
            *(char *)(iVar9 + 0x24) = *(char *)(iVar9 + 0x24) + -2;
          }
          else {
            *(short *)(iVar9 + 0x1e) = *(short *)(iVar9 + 0x22) + *(short *)(iVar9 + 0x1e);
          }
          uVar6 = *(ushort *)(iVar9 + 0x1e);
          if (uVar5 < uVar6) {
            uVar6 = (ushort)uVar5;
          }
          *(ushort *)(iVar9 + 0x1e) = uVar6;
          psVar1 = (short *)(iVar9 + 0x4e);
          iVar9 = iVar9 + 0x2c;
        } while (*psVar1 != -1);
        return;
      }
      iVar9 = 0;
      do {
        iVar8 = param_1 + iVar9 * 0x2c;
        iVar7 = *(short *)(iVar8 + 0x12f4) * 2;
        if (0x14 < iVar7) {
          iVar7 = 0x14;
        }
        *(short *)(iVar8 + 0x12f2) = (short)iVar7 + (short)iVar9 + *(short *)(iVar8 + 0x12f2);
        iVar9 = iVar9 + 1;
        if (*(short *)(iVar8 + 0x12f4) != 0) {
          *(short *)(iVar8 + 0x12f4) = *(short *)(iVar8 + 0x12f4) + -1;
        }
      } while (iVar9 < 3);
      if (*(short *)(DAT_00327088 + param_1) != 0) {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x232) = 0;
  }
  return;
}
