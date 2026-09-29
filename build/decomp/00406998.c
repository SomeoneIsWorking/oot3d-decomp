// OoT3D decomp @ 00406998  name=FUN_00406998  size=528

void FUN_00406998(int param_1,char *param_2)

{
  undefined1 uVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_4c [2];

  fVar8 = DAT_00406bb0;
  fVar2 = DAT_00406ba8;
  if (*param_2 != '\0') {
    uVar3 = (uint)(byte)param_2[0xd];
    fVar13 = (float)VectorUnsignedToFloat((uint)(byte)param_2[0xc],(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = *(float *)(param_1 + 0xc) * DAT_00406ba8;
    fVar13 = fVar13 * DAT_00406bac;
    fVar10 = *(float *)(param_2 + 0x14);
    fVar18 = *(float *)(param_1 + 0x10) * DAT_00406ba8;
    if (uVar3 < 2) {
      fVar11 = (float)VectorSignedToFloat(uVar3 - 0x3f,(byte)(in_fpscr >> 0x15) & 3);
    }
    else {
      fVar11 = (float)VectorSignedToFloat(uVar3 - 0x40,(byte)(in_fpscr >> 0x15) & 3);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x24);
    uVar15 = *(undefined4 *)(param_1 + 0x20);
    uVar3 = 0;
    fVar14 = *(float *)(param_2 + 0x18) +
             *(float *)(param_1 + 0x14) + DAT_00406bb0 + fVar11 * DAT_00406bb4;
    fVar11 = *(float *)(param_2 + 0x1c) + DAT_00406bb0;
    fVar12 = *(float *)(param_1 + 0x18);
    fVar16 = *(float *)(param_1 + 0x1c) + DAT_00406ba8;
    fVar17 = *(float *)(param_1 + 0x28) + DAT_00406bb0;
    do {
      pfVar4 = local_4c + uVar3;
      *pfVar4 = fVar8;
      fVar7 = (float)FUN_0030a024(param_1,uVar3 & 0xff);
      uVar3 = uVar3 + 1;
      *pfVar4 = fVar7 + *pfVar4;
    } while ((int)uVar3 < 2);
    iVar5 = 0;
    if (param_2[0xe] != '\0') {
      do {
        iVar6 = *(int *)(*(int *)(param_2 + iVar5 * 4 + 4) + 0x30);
        if (iVar6 != 0) {
          FUN_00309600(fVar10 * fVar13 * fVar9,iVar6);
          FUN_003095dc(fVar18,iVar6);
          FUN_003095b8(fVar16,iVar6);
          FUN_0030954c(uVar15,iVar6,uVar1);
          FUN_00309508(fVar17,iVar6);
          uVar3 = 0;
          do {
            FUN_003094cc(local_4c[uVar3],iVar6,uVar3 & 0xff);
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < 2);
          if (param_2[0xe] == '\x01') {
            FUN_003094a8(fVar14,iVar6);
          }
          else if (param_2[0xe] == '\x02') {
            fVar8 = fVar14 - fVar2;
            if ((iVar5 != 0) && (fVar8 = fVar14, iVar5 == 1)) {
              fVar8 = fVar14 + fVar2;
            }
            FUN_003094a8(fVar8,iVar6);
          }
          FUN_00309484(fVar12 + fVar11,iVar6);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)(byte)param_2[0xe]);
    }
  }
  return;
}
