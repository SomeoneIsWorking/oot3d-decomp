// OoT3D decomp @ 002e946c  name=FUN_002e946c  size=468

void FUN_002e946c(float param_1,float param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_70 [9];
  float local_4c [9];

  uVar2 = DAT_002e9650;
  fVar1 = DAT_002e9644;
  fVar11 = DAT_002e9640;
  iVar3 = *(int *)(param_3 + 0x40);
  if (iVar3 == 2) {
    local_4c[0] = *DAT_002e9648;
    local_4c[1] = DAT_002e9648[1];
    local_4c[2] = DAT_002e9648[2];
    local_4c[3] = DAT_002e9648[3];
    local_4c[4] = DAT_002e9648[4];
    local_4c[5] = DAT_002e9648[5];
    local_4c[6] = DAT_002e9648[6];
    local_4c[7] = DAT_002e9648[7];
    local_4c[8] = DAT_002e9648[8];
    local_70[0] = *DAT_002e964c;
    local_70[1] = DAT_002e964c[1];
    local_70[2] = DAT_002e964c[2];
    local_70[3] = DAT_002e964c[3];
    local_70[4] = DAT_002e964c[4];
    iVar3 = 0;
    local_70[5] = DAT_002e964c[5];
    local_70[6] = DAT_002e964c[6];
    local_70[7] = DAT_002e964c[7];
    local_70[8] = DAT_002e964c[8];
    do {
      iVar6 = param_3 + iVar3 * 4;
      fVar7 = local_4c[iVar3];
      fVar8 = local_70[iVar3];
      iVar5 = *(int *)(iVar6 + 0x10);
      *(float *)(iVar5 + 0x44) = fVar1;
      *(float *)(iVar5 + 0x40) = fVar8 + param_2;
      *(float *)(iVar5 + 0x3c) = fVar7 + param_1;
      if (iVar3 == 8) {
        iVar5 = *(int *)(param_3 + 0x30);
        *(float *)(iVar5 + 0xf0) = fVar11;
        *(float *)(iVar5 + 0xf4) = fVar11;
        *(float *)(iVar5 + 0xf8) = fVar11;
        *(float *)(iVar5 + 0xfc) = fVar11;
      }
      else {
        iVar5 = *(int *)(iVar6 + 0x10);
        *(undefined4 *)(iVar5 + 0xf0) = uVar2;
        *(undefined4 *)(iVar5 + 0xf4) = uVar2;
        *(undefined4 *)(iVar5 + 0xf8) = uVar2;
        *(float *)(iVar5 + 0xfc) = fVar11;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 9);
  }
  else {
    if (iVar3 == 1) {
      iVar3 = 0;
      fVar7 = param_2 + DAT_002e9654;
      fVar8 = param_1 + DAT_002e9654;
      do {
        pfVar4 = (float *)FUN_002e11a4(*(undefined4 *)(param_3 + iVar3 * 4 + 8),0);
        fVar10 = fVar8 + fVar11;
        iVar3 = iVar3 + 1;
        *pfVar4 = param_1 + fVar11;
        pfVar4[1] = param_2 + fVar11;
        pfVar4[2] = fVar1;
        pfVar4[3] = param_1 + fVar11;
        fVar9 = fVar7 + fVar11;
        pfVar4[4] = fVar9;
        pfVar4[5] = fVar1;
        pfVar4[6] = fVar10;
        pfVar4[7] = param_2 + fVar11;
        pfVar4[8] = fVar1;
        pfVar4[9] = fVar10;
        pfVar4[10] = fVar9;
        pfVar4[0xb] = fVar1;
        fVar11 = fVar1;
      } while (iVar3 < 2);
      return;
    }
    iVar5 = *(int *)(param_3 + 0x10);
    *(float *)(iVar5 + 0x3c) = param_1;
    *(float *)(iVar5 + 0x40) = param_2;
    *(float *)(iVar5 + 0x44) = fVar1;
    if (iVar3 != 3) {
      iVar3 = *(int *)(param_3 + 0x14);
      *(float *)(iVar3 + 0x3c) = param_1;
      *(float *)(iVar3 + 0x40) = param_2;
      *(float *)(iVar3 + 0x44) = fVar1;
      return;
    }
  }
  return;
}
