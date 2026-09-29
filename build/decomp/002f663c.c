// OoT3D decomp @ 002f663c  name=FUN_002f663c  size=360

void FUN_002f663c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_6c [4];
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  float local_38;
  float local_34;
  float local_30;

  fVar5 = DAT_002f67b8;
  iVar4 = DAT_002f67b4;
  iVar3 = DAT_002f67b0;
  uVar2 = DAT_002f67ac;
  iVar1 = DAT_002f67a8;
  local_6c[0] = *DAT_002f67a4;
  local_6c[1] = DAT_002f67a4[1];
  local_6c[2] = DAT_002f67a4[2];
  local_6c[3] = DAT_002f67a4[3];
  iStack_5c = DAT_002f67a4[4];
  iStack_58 = DAT_002f67a4[5];
  iStack_54 = DAT_002f67a4[6];
  iStack_50 = DAT_002f67a4[7];
  iStack_4c = DAT_002f67a4[8];
  iStack_48 = DAT_002f67a4[9];
  iStack_44 = DAT_002f67a4[10];
  iStack_40 = DAT_002f67a4[0xb];
  iStack_3c = DAT_002f67a4[0xc];
  iVar7 = 0;
  iVar8 = DAT_002f67a8 + 0xe10;
  iVar9 = DAT_002f67a8 + 0xed0;
  while( true ) {
    if ((local_6c[iVar7] < 0xc) &&
       ((*(uint *)(iVar4 + *(int *)(DAT_002f67bc + local_6c[iVar7] * 4) * 4 + -0x150) &
        *(uint *)(iVar3 + 0xbc)) != 0)) {
      FUN_002fc534(*(undefined4 *)(iVar1 + 8),iVar8 + iVar7 * 8,DAT_002f67c0,1,iVar7 + 0x12);
      FUN_002fc40c(*(undefined4 *)(iVar1 + 8),iVar9 + iVar7 * 8,DAT_002f67c0,1,iVar7 + 0x12);
      FUN_002e18c4(*(undefined4 *)(iVar1 + 8),DAT_002f67c4,1,iVar7 + 0x12);
    }
    else {
      FUN_002fc534(*(undefined4 *)(iVar1 + 8),DAT_002f67c8 + iVar7 * 8,DAT_002f67cc,1,iVar7 + 0x12);
      FUN_002fc40c(*(undefined4 *)(iVar1 + 8),DAT_002f67cc + 8,DAT_002f67cc,1,iVar7 + 0x12);
      pfVar6 = (float *)(DAT_002f67d0 + iVar7 * 0xc);
      local_38 = *pfVar6 * fVar5;
      local_34 = pfVar6[1] * fVar5;
      local_30 = pfVar6[2] * fVar5;
      FUN_002e18c4(*(undefined4 *)(iVar1 + 8),&local_38,1,iVar7 + 0x12);
    }
    iVar7 = iVar7 + 1;
    if (0xb < iVar7) break;
    if (iVar7 == 3 || iVar7 == 7) {
      *(undefined4 *)(iVar1 + 0x54) = uVar2;
    }
  }
  return;
}
