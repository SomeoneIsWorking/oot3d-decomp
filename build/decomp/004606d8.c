// OoT3D decomp @ 004606d8  name=FUN_004606d8  size=284

void FUN_004606d8(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  puVar1 = DAT_004607f4;
  uVar5 = *DAT_004607f4;
  if (uVar5 < uVar5 + DAT_004607f4[1] * 0x88) {
    do {
      FUN_002d6a50(uVar5,1);
      *(undefined4 *)(uVar5 + 0x84) = 0;
      uVar5 = uVar5 + 0x88;
    } while (uVar5 < *puVar1 + puVar1[1] * 0x88);
  }
  iVar3 = DAT_00460800;
  puVar2 = DAT_004607fc;
  iVar6 = DAT_004607f8;
  iVar7 = 0;
  *(undefined4 *)(DAT_004607f8 + 0x80) = 0;
  *(undefined4 *)(iVar6 + 0x108) = 0;
  *(undefined4 *)(iVar6 + 400) = 0;
  *(undefined4 *)(iVar6 + 0x214) = 0;
  *(undefined4 *)(iVar6 + 0x29c) = 0;
  *(undefined4 *)(iVar6 + 0x324) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  do {
    iVar6 = 0;
    do {
      if (puVar1[iVar7 * 10 + iVar6 + 2] != 0) {
        if (((*puVar2 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_004607fc), iVar4 != 0)) {
          FUN_0036788c(DAT_00460804);
        }
        FUN_00348904(*(undefined4 *)(iVar3 + 0x47c),puVar1[iVar7 * 10 + iVar6 + 2]);
        puVar1[iVar7 * 10 + iVar6 + 2] = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 10);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x25);
  return;
}
