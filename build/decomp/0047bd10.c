// OoT3D decomp @ 0047bd10  name=FUN_0047bd10  size=688

void FUN_0047bd10(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  ushort *puVar12;
  uint uVar13;
  ushort *puVar14;
  uint uVar15;
  int iVar16;
  undefined2 *puVar17;
  char cVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;

  iVar7 = DAT_0047bfc0;
  cVar18 = '\0';
  cVar1 = *(char *)(DAT_0047bfc0 + 0x16);
  if (cVar1 == -1) {
    if (*(char *)(DAT_0047bfc0 + 0x3b) == '\0') {
      return;
    }
  }
  else if (*(char *)(DAT_0047bfc0 + 0x3b) == '\0') {
    *(undefined1 *)(DAT_0047bfc0 + 0x3b) = 1;
    *(undefined1 *)(iVar7 + 0x19) = 0xff;
  }
  iVar8 = DAT_0047bfc4;
  if ((int)*(char *)(iVar7 + 0x1a) + 0x14U < 0x29) {
    uVar19 = (uint)*(byte *)(iVar7 + 0x3c);
    bVar20 = *(char *)(iVar7 + 0x17) != cVar1;
    bVar2 = *(byte *)(iVar7 + 0x3d);
    bVar3 = *(byte *)(DAT_0047bfc0 + 0x3e);
    if (uVar19 < bVar2) {
      bVar4 = *(byte *)(iVar7 + 0x2c);
      cVar18 = '\0';
      do {
        uVar5 = *(ushort *)(iVar7 + 0x50);
        if (((uint)uVar5 & 1 << uVar19 & 0xffffU) != 0) {
          puVar12 = (ushort *)(DAT_0047bfc8 + uVar19 * 2);
          uVar13 = (uint)*puVar12;
          puVar17 = (undefined2 *)(DAT_0047bfc8 + -0x1c + uVar19 * 2);
          uVar15 = uVar13 + 0x12;
          uVar9 = uVar15 & 0xffff;
          *puVar17 = (short)uVar15;
          if (bVar20 && cVar1 != -1) {
            uVar6 = (ushort)(1 << uVar19);
            if ((int)uVar9 < (int)(uVar13 - 0x12)) {
              if (uVar9 < 10) {
                *puVar17 = 0;
                cVar18 = -1;
                *(char *)(iVar7 + 0x19) = cVar1;
              }
              else {
                *(ushort *)(iVar7 + 0x50) = uVar5 ^ uVar6;
              }
            }
            else {
              if (*(char *)(iVar7 + 0x19) != -1) {
                if (*(char *)(iVar8 + uVar19) == *(char *)(iVar7 + 0x19)) {
                  if (uVar19 == 0xc) {
                    *(undefined2 *)(DAT_0047bfd4 + 0x18) = 0;
                  }
                }
                else {
                  *(ushort *)(iVar7 + 0x50) = uVar5 ^ uVar6;
                }
              }
              iVar16 = DAT_0047bfcc + uVar19 * 0xa0;
              puVar14 = (ushort *)(DAT_0047bfd0 + uVar19 * 2);
              uVar9 = *puVar14 + 1;
              pcVar11 = (char *)(iVar16 + (uint)*puVar14 * 8);
              *puVar14 = (ushort)uVar9;
              pcVar10 = (char *)(iVar16 + (uVar9 & 0xffff) * 8);
              *puVar12 = *(ushort *)(pcVar11 + 2);
              *(char *)(iVar8 + uVar19) = *pcVar11;
              if (*(char *)(iVar8 + uVar19) != cVar1) {
                *(ushort *)(iVar7 + 0x50) = uVar6 ^ *(ushort *)(iVar7 + 0x50);
              }
              while ((*pcVar11 == *pcVar10 || ((*pcVar10 == -1 && (*(short *)(pcVar10 + 2) != 0)))))
              {
                *puVar12 = *(short *)(pcVar10 + 2) + *puVar12;
                pcVar11 = (char *)(iVar16 + (uint)*puVar14 * 8);
                *puVar14 = *puVar14 + 1;
                pcVar10 = pcVar11 + 8;
              }
            }
          }
          else if (((int)(uVar13 - 0x12) <= (int)uVar9) && (uVar15 <= uVar9)) {
            uVar9 = (uint)*(ushort *)(DAT_0047bfd0 + uVar19 * 2);
            uVar13 = (uint)*(ushort *)(DAT_0047bfcc + uVar19 * 0xa0 + uVar9 * 8 + 2);
            bVar21 = uVar13 == 0;
            if (bVar21) {
              uVar13 = (uint)*(byte *)(iVar8 + uVar19);
              uVar9 = (uint)*(byte *)(iVar7 + 0x19);
            }
            if (bVar21 && uVar13 == uVar9) {
              *(char *)(iVar7 + 0x2b) = (char)uVar19 + '\x01';
              *(undefined1 *)(iVar7 + 0x14) = 0;
              *(undefined4 *)(iVar7 + 0x94) = 0;
            }
          }
        }
        if ((*(short *)(iVar7 + 0x50) == 0) && (bVar4 <= bVar3)) {
          *(undefined1 *)(iVar7 + 0x14) = 0;
          if (((*(uint *)(iVar7 + 0x94) & 0x4000) != 0) &&
             (*(char *)(DAT_0047bfcc + uVar19 * 0xa0) == cVar1)) {
            *(short *)(iVar7 + 0x46) = (short)*(uint *)(iVar7 + 0x94);
          }
          goto LAB_0047bf80;
        }
        uVar19 = uVar19 + 1 & 0xff;
      } while (uVar19 < bVar2);
    }
    if (bVar20 && cVar1 != -1) {
      *(char *)(iVar7 + 0x19) = cVar1;
      *(byte *)(iVar7 + 0x3e) = bVar3 + cVar18 + '\x01';
      return;
    }
  }
  else {
LAB_0047bf80:
    *(undefined4 *)(iVar7 + 0x94) = 0;
  }
  return;
}
