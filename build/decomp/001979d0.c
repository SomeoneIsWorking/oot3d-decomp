// OoT3D decomp @ 001979d0  name=FUN_001979d0  size=528

void FUN_001979d0(int param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  byte bVar3;
  float fVar4;
  int iVar5;
  short *psVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;

  fVar4 = DAT_00197be4;
  if (*(float *)(param_1 + 0x1a8) != DAT_00197be4) {
    *(uint *)(*(int *)(DAT_00197be0 + param_2) + 0x1714) =
         *(uint *)(*(int *)(DAT_00197be0 + param_2) + 0x1714) & 0xffffffef;
    fVar8 = *(float *)(param_1 + 0x1a8);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar4) << 0x1f | (uint)(fVar8 == fVar4) << 0x1e;
    uVar7 = uVar1 | (uint)(NAN(fVar8) || NAN(fVar4)) << 0x1c;
    bVar3 = (byte)(uVar1 >> 0x18);
    if ((!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) &&
       (iVar5 = FUN_0036a7a0(param_2), iVar5 == 0)) {
      sVar2 = *(short *)(param_1 + 0x1b0);
      if (sVar2 == 0 || sVar2 == -0x8000) {
        iVar5 = 0;
        do {
          if (*(short *)(DAT_00197be8 + iVar5 * 2) == (short)(int)*(float *)(param_1 + 0x28)) {
            psVar6 = (short *)(DAT_00197bec + iVar5 * 4);
            if (sVar2 == 0) {
              sVar2 = *psVar6;
            }
            else {
              sVar2 = psVar6[1];
            }
            uVar9 = VectorSignedToFloat((int)sVar2,(byte)(uVar7 >> 0x15) & 3);
            *(undefined4 *)(param_1 + 0x1c8) = uVar9;
            goto LAB_00197b14;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 7);
        uVar9 = DAT_00197bf0;
        if (sVar2 == 0) {
          uVar9 = DAT_00197bf4;
        }
        *(undefined4 *)(param_1 + 0x1c8) = uVar9;
      }
      else {
        iVar5 = 0;
        do {
          if (*(short *)(DAT_00197bf8 + iVar5 * 2) == (short)(int)*(float *)(param_1 + 0x30)) {
            psVar6 = (short *)(DAT_00197bfc + iVar5 * 4);
            if (sVar2 == 0x4000) {
              sVar2 = *psVar6;
            }
            else {
              sVar2 = psVar6[1];
            }
            uVar9 = VectorSignedToFloat((int)sVar2,(byte)(uVar7 >> 0x15) & 3);
            *(undefined4 *)(param_1 + 0x1c0) = uVar9;
            goto LAB_00197b14;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 7);
        uVar9 = DAT_00197c00;
        if (sVar2 == 0x4000) {
          uVar9 = DAT_00197c04;
        }
        *(undefined4 *)(param_1 + 0x1c0) = uVar9;
      }
LAB_00197b14:
      iVar5 = FUN_00363e64(param_1,param_1 + 0x1c0);
      if (0x3f800000 < iVar5) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
        FUN_0036e980(param_2,param_1,8);
        *(undefined2 *)(param_1 + 0x1c) = 1;
        *(undefined4 *)(param_1 + 0x1bc) = DAT_00197c08;
      }
    }
    *(float *)(param_1 + 0x1a8) = fVar4;
  }
  uVar9 = DAT_00197c10;
  if (fVar4 < *(float *)(param_1 + 100)) {
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + DAT_00197c0c;
    iVar5 = FUN_003705a0(uVar9,param_1 + 0x2c);
    if (iVar5 != 0) {
      *(float *)(param_1 + 100) = fVar4;
      fVar4 = DAT_00197c14;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar4;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
      if (*(short *)(param_1 + 0x1c) != 0) {
        FUN_0036e980(param_2,param_1,7);
      }
      *(undefined4 *)(param_1 + 0x1bc) = DAT_00197c18;
    }
  }
  return;
}
