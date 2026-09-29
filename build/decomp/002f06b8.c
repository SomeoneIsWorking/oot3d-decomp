// OoT3D decomp @ 002f06b8  name=FUN_002f06b8  size=844

void FUN_002f06b8(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [88];
  undefined1 auStack_e8 [8];
  float local_e0 [24];
  byte local_80 [96];

  iVar2 = DAT_002f0a04;
  FUN_002eef74(*(undefined4 *)(DAT_002f0a04 + 0x2c));
  FUN_00371738(local_e0,DAT_002f0a08,0x60);
  uVar8 = 0xff;
  if (*(char *)(DAT_002f0a0c + 0xe) == '\x01') {
    puVar5 = auStack_e8;
    iVar6 = 6;
    do {
      iVar6 = iVar6 + -1;
      *(float *)(puVar5 + 8) = (DAT_002f0a10 - *(float *)(puVar5 + 8)) - DAT_002f0a14;
      *(float *)(puVar5 + 0x10) = (DAT_002f0a10 - *(float *)(puVar5 + 0x10)) - DAT_002f0a14;
      puVar5 = puVar5 + 0x10;
    } while (iVar6 != 0);
    iVar6 = 0;
    do {
      pbVar7 = (byte *)(DAT_002f0a18 + iVar6 * 8);
      iVar1 = iVar6 * 8;
      iVar6 = iVar6 + 1;
      local_80[iVar1] = *pbVar7;
      local_80[iVar1 + 1] = pbVar7[7];
      local_80[iVar1 + 2] = pbVar7[6];
      local_80[iVar1 + 3] = pbVar7[5];
      local_80[iVar1 + 4] = pbVar7[4];
      local_80[iVar1 + 5] = pbVar7[3];
      local_80[iVar1 + 6] = pbVar7[2];
      local_80[iVar1 + 7] = pbVar7[1];
    } while (iVar6 < 0xc);
  }
  else {
    FUN_0034338c(local_80,DAT_002f0a18,0x60);
  }
  fVar3 = DAT_002f0a1c;
  uVar9 = 0;
  do {
    uVar10 = VectorFloatToUnsigned(local_e0[uVar9 * 2 + 1] - fVar3,3);
    uVar11 = VectorFloatToUnsigned(local_e0[uVar9 * 2] - fVar3,3);
    iVar6 = FUN_0033f428(uVar11 & 0xffff,uVar10 & 0xffff,0x1a,0x1a,1);
    if (iVar6 != 0) {
      uVar8 = uVar9 & 0xff;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0xc);
  uVar9 = 0xff;
  if (uVar8 == 0xff) {
    uVar8 = FUN_0033b5d0();
    if (((uVar8 & 0x40) == 0) || (uVar8 = FUN_0033b5d0(), (uVar8 & 0x10) == 0)) {
      uVar8 = FUN_0033b5d0();
      if (((uVar8 & 0x80) == 0) || (uVar8 = FUN_0033b5d0(), (uVar8 & 0x10) == 0)) {
        uVar8 = FUN_0033b5d0();
        if (((uVar8 & 0x80) == 0) || (uVar8 = FUN_0033b5d0(), (uVar8 & 0x20) == 0)) {
          uVar8 = FUN_0033b5d0();
          if (((uVar8 & 0x40) == 0) || (uVar8 = FUN_0033b5d0(), (uVar8 & 0x20) == 0)) {
            uVar8 = FUN_0033b5d0();
            if ((uVar8 & 0x40) == 0) {
              uVar8 = FUN_0033b5d0();
              if ((uVar8 & 0x10) == 0) {
                uVar8 = FUN_0033b5d0();
                if ((uVar8 & 0x80) == 0) {
                  uVar8 = FUN_0033b5d0();
                  if ((uVar8 & 0x20) == 0) goto LAB_002f0998;
                  iVar6 = 6;
                }
                else {
                  iVar6 = 4;
                }
              }
              else {
                iVar6 = 2;
              }
            }
            else {
              iVar6 = 0;
            }
          }
          else {
            iVar6 = 7;
          }
        }
        else {
          iVar6 = 5;
        }
      }
      else {
        iVar6 = 3;
      }
    }
    else {
      iVar6 = 1;
    }
    uVar8 = (uint)local_80[iVar6 + *(int *)(iVar2 + 0x48) * 8];
    uVar9 = (uint)local_80[iVar6 + uVar8 * 8];
    if (uVar8 == 0xff) goto LAB_002f0998;
  }
  iVar6 = FUN_002d23d4(*(undefined4 *)(iVar2 + 0x2c),uVar8);
  uVar4 = DAT_002f0a20;
  if (iVar6 == 0) {
    if ((uVar9 != 0xff) && (iVar6 = FUN_002d23d4(*(undefined4 *)(iVar2 + 0x2c),uVar9), iVar6 != 0))
    {
      FUN_0037547c(uVar4,0,4,DAT_002f0a28,DAT_002f0a28,DAT_002f0a24);
      *(uint *)(iVar2 + 0x48) = uVar9;
    }
  }
  else {
    FUN_0037547c(DAT_002f0a20,0,4,DAT_002f0a28,DAT_002f0a28,DAT_002f0a24);
    *(uint *)(iVar2 + 0x48) = uVar8;
  }
LAB_002f0998:
  FUN_002f7af4(local_e0[*(int *)(iVar2 + 0x48) * 2] - fVar3,
               local_e0[*(int *)(iVar2 + 0x48) * 2 + 1] - fVar3,*(undefined4 *)(iVar2 + 0x4c));
  FUN_00371738(auStack_140,DAT_002f0a2c,0x60);
  local_148 = *DAT_002f0a30;
  uStack_144 = DAT_002f0a30[1];
  FUN_002fc40c(*(undefined4 *)(iVar2 + 0x10),auStack_140 + *(int *)(iVar2 + 0x48) * 8,&local_148,1,
               0xf);
  return;
}
