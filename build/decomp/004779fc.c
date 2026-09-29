// OoT3D decomp @ 004779fc  name=FUN_004779fc  size=600

void FUN_004779fc(void)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  int in_r3;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;

  iVar4 = DAT_00477c54;
  cVar1 = *(char *)(DAT_00477c54 + 0x1d);
  if (cVar1 != '\0') {
    bVar11 = *(short *)(DAT_00477c54 + 0x44) != 0;
    uVar5 = 0;
    if (bVar11) {
      uVar5 = *(int *)(DAT_00477c54 + 0xd8) - *(int *)(DAT_00477c54 + 0xa4);
    }
    uVar9 = *(uint *)(DAT_00477c54 + 0x98);
    if (!bVar11) {
      uVar5 = 3;
    }
    if (uVar5 < uVar9) {
      *(uint *)(DAT_00477c54 + 0x98) = uVar9 - uVar5;
      if (uVar9 - uVar5 != 0) {
        return;
      }
    }
    else {
      in_r3 = uVar5 - uVar9;
      *(undefined4 *)(DAT_00477c54 + 0x98) = 0;
    }
    uVar9 = DAT_00477c58;
    iVar6 = *(int *)(iVar4 + 0xa8) + (uint)*(ushort *)(iVar4 + 0x42) * 8;
    uVar5 = (uint)*(ushort *)(iVar6 + 2);
    *(uint *)(iVar4 + 0x98) = uVar5;
    if (*(ushort *)(iVar4 + 0x42) == 1) {
      uVar5 = uVar5 + 1;
      *(uint *)(iVar4 + 0x98) = uVar5;
    }
    if (uVar5 != 0) {
      *(uint *)(iVar4 + 0x98) = uVar5 - in_r3;
      bVar2 = *(byte *)(iVar6 + 4);
      if ((uint)bVar2 != (uint)*(byte *)(iVar4 + 0x1f)) {
        *(byte *)(iVar4 + 0x1f) = bVar2;
        fVar13 = (float)VectorUnsignedToFloat((uint)bVar2,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(iVar4 + 0xa0) = fVar13 * DAT_00477c5c;
      }
      cVar1 = *(char *)(iVar6 + 5);
      if (cVar1 != *(char *)(iVar4 + 0x20)) {
        *(char *)(iVar4 + 0x20) = cVar1;
        FUN_002cfe00(DAT_00477c60,cVar1);
      }
      pcVar7 = (char *)(*(int *)(iVar4 + 0xa8) + (uint)*(ushort *)(iVar4 + 0x42) * 8);
      iVar6 = (int)pcVar7[6];
      if (iVar6 != *(char *)(iVar4 + 0x21)) {
        *(char *)(iVar4 + 0x21) = pcVar7[6];
        if (iVar6 < 0x41) {
          if (iVar6 < -0x40) {
            iVar6 = -0x80;
          }
          else if (iVar6 < 0) {
            iVar6 = (int)(char)((int)(iVar6 * 0x80 + ((uint)(iVar6 * 0x80 >> 0x1f) >> 0x1a)) >> 6);
          }
          else {
            iVar6 = (int)(char)((int)(iVar6 * 0x7f + ((uint)(iVar6 * 0x7f >> 0x1f) >> 0x1a)) >> 6);
          }
        }
        else {
          iVar6 = 0x7f;
        }
        *(undefined4 *)(iVar4 + 0x9c) = *(undefined4 *)(DAT_00477c64 + iVar6 * 4 + 0x200);
      }
      cVar1 = pcVar7[4];
      cVar3 = pcVar7[-4];
      bVar11 = cVar1 == cVar3;
      if (bVar11) {
        cVar1 = pcVar7[5];
        cVar3 = pcVar7[-3];
      }
      bVar12 = bVar11 && cVar1 == cVar3;
      if (bVar11 && cVar1 == cVar3) {
        bVar12 = pcVar7[6] == pcVar7[-2];
      }
      if (bVar12) {
        *(undefined1 *)(iVar4 + 0x1e) = 0xfe;
      }
      cVar1 = *pcVar7;
      if (cVar1 != *(char *)(iVar4 + 0x1e)) {
        if (cVar1 == '\n') {
          *(char *)(iVar4 + 0x1e) = pcVar7[7] + '\n';
        }
        else {
          *(char *)(iVar4 + 0x1e) = cVar1;
        }
        if (*(char *)(iVar4 + 0x1e) == -1) {
          FUN_0048961c(uVar9);
        }
        else {
          *(short *)(iVar4 + 0x44) = *(short *)(iVar4 + 0x44) + 1;
          if (*(char *)(DAT_00477c68 + 5) == '\0') {
            FUN_002cfd74(DAT_00477c60,DAT_00477c6c + -4);
            FUN_002cfd24(DAT_00477c60,*(char *)(iVar4 + 0x15) + -1);
            FUN_002cfcf0(DAT_00477c60,*(byte *)(iVar4 + 0x1e) & 0x3f);
            FUN_002cfe00(DAT_00477c60,0);
          }
        }
      }
      *(short *)(iVar4 + 0x42) = *(short *)(iVar4 + 0x42) + 1;
      return;
    }
    *(char *)(iVar4 + 0x1d) = cVar1 + -1;
    if (cVar1 == '\x01') {
      if (uVar9 < DAT_004896b4) {
        uVar10 = 0;
      }
      else if (uVar9 < DAT_004896b8) {
        uVar10 = 1;
      }
      else if (uVar9 < DAT_004896bc) {
        uVar10 = 2;
      }
      else if (uVar9 < DAT_004896c0) {
        uVar10 = 3;
      }
      else if (uVar9 < DAT_004896c4) {
        uVar10 = 4;
      }
      else if (uVar9 < DAT_004896c8) {
        uVar10 = 5;
      }
      else {
        uVar10 = 6;
      }
      uVar8 = FUN_0030f0ec();
      uVar10 = FUN_0030f0c0(uVar8,uVar10);
      *(uint *)(DAT_004896cc + 0x28) = uVar9;
      FUN_0030efb0(uVar10,DAT_004896d0,0);
      return;
    }
    *(undefined2 *)(iVar4 + 0x42) = 0;
    *(undefined2 *)(iVar4 + 0x44) = 0;
    *(undefined1 *)(iVar4 + 0x1e) = 0xff;
  }
  return;
}
